#pragma once

#include "mysql_connection.h" 
#include <cppconn/driver.h> 
#include <cppconn/exception.h> 
#include <cppconn/prepared_statement.h> 
#include <cppconn/resultset.h>
#include <msclr/marshal_cppstd.h>

using std::string;
using std::cout;
using std::endl;
using namespace System;
using namespace System::Windows::Forms;

class DB {
private:
	const string SERVER = "tcp://localhost:3306";
	const string USER = "root";
	const string PASSWORD = "root";

	sql::Driver* driver;
	sql::Connection* conn = nullptr;
	sql::Statement* stmt;
	sql::PreparedStatement* ptmt;
	sql::ResultSet* res;

	void connect() {
		try {
			driver = get_driver_instance();
			conn = driver->connect(SERVER, USER, PASSWORD);
		}
		catch (sql::SQLException& ex) {
			if (conn != nullptr && !conn->isClosed())
				conn->close();
			cout << "Error connection. " << ex.what();
			system("pause");
			exit(1);
		}

		conn->setSchema("cppwinforms");
	}

	void disconnect() {
		conn->close();
		delete conn;
	}
public:
	void add_user(String^ login, String^ password) {
		connect();

		std::string user_login = msclr::interop::marshal_as<std::string>(login);
		std::string user_pass = msclr::interop::marshal_as<std::string>(password);
		ptmt = conn->prepareStatement("INSERT INTO users (login, password) VALUES(?, ?)");
		ptmt->setString(1, user_login);
		ptmt->setString(2, user_pass);
		ptmt->execute();

		delete ptmt;

		disconnect();
	}

	bool auth_user(String^ login, String^ password) {
		connect();

		std::string user_login = msclr::interop::marshal_as<std::string>(login);
		std::string user_pass = msclr::interop::marshal_as<std::string>(password);
		ptmt = conn->prepareStatement("SELECT id FROM users WHERE login = ? AND password = ?");
		ptmt->setString(1, user_login);
		ptmt->setString(2, user_pass);
		res = ptmt->executeQuery();

		size_t rows_count = res->rowsCount();

		delete ptmt;
		delete res;

		disconnect();

		return rows_count == 1 ? true : false;
	}

	void add_task(String^ task) {
		connect();

		std::string user_task = msclr::interop::marshal_as<std::string>(task);
		ptmt = conn->prepareStatement("INSERT INTO tasks (task) VALUES(?)");

		ptmt->setString(1, user_task);
		ptmt->execute();

		delete ptmt;

		disconnect();
	}

	ListBox::ObjectCollection^ get_tasks() {
		connect();

		stmt = conn->createStatement();

		res = stmt->executeQuery("SELECT * FROM tasks ORDER BY id DESC");
		if (res->rowsCount() == 0) {
			disconnect();
			return nullptr;
		}

		ListBox^ tasks_list = gcnew ListBox;
		while (res->next()) {
			String^ value = gcnew String(res->getString("task").c_str());
			tasks_list->Items->Add(value);
		}

		delete stmt;
		delete res;

		disconnect();

		return tasks_list->Items;
	}

	void delete_task(String^ task_to_delete) {
		connect();

		std::string task_delete = msclr::interop::marshal_as<std::string>(task_to_delete);
		ptmt = conn->prepareStatement("DELETE FROM tasks WHERE task = ?");

		ptmt->setString(1, task_delete);
		ptmt->execute();

		delete ptmt;

		disconnect();
	}

	void update_task(String^ _old_task, String^ _new_value) {
		connect();

		std::string old_task = msclr::interop::marshal_as<std::string>(_old_task);
		std::string new_value = msclr::interop::marshal_as<std::string>(_new_value);
		ptmt = conn->prepareStatement("UPDATE tasks SET task = ? WHERE task = ?");

		ptmt->setString(1, new_value);
		ptmt->setString(2, old_task);
		ptmt->execute();

		delete ptmt;

		disconnect();
	}

	void delete_user(String^ login) {
		connect();

		std::string user_delete = msclr::interop::marshal_as<std::string>(login);
		ptmt = conn->prepareStatement("DELETE FROM users WHERE login = ?");

		ptmt->setString(1, user_delete);
		ptmt->execute();

		delete ptmt;

		disconnect();
	}

};