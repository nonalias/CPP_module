#include "PhoneBookClass.hpp"

PhoneBook::PhoneBook(){}

void PhoneBook::set(std::string datas[11])
{
	for (int i = 0; i < 11; i++)
		this->datas[i] = datas[i];
}

void PhoneBook::data_print(std::string str)
{
	if (str.size() >= 10)
		str[9] = '.';
	for (int i = 0; i < 10; i++)
		std::cout << str[i];
}

void PhoneBook::white_print(int count)
{
	for (int i = 0; i < count; i++)
		std::cout << ' ';
}

void PhoneBook::detail_show(std::string title[11], int input)
{
	std::string str_input;

	str_input = std::to_string(input);
	std::cout << "\n";
	std::cout << "-----------------------\n";
	std::cout << "|";
	white_print(10 - (int)strlen("index"));
	data_print("index");
	std::cout << "|";
	white_print(10 - str_input.size());
	data_print(str_input);
	std::cout << "|\n";
	std::cout << "-----------------------\n";
	for (int i = 0; i < 11; i++)
	{
		std::cout << "|";
		white_print(10 - title[i].size());
		data_print(title[i]);
		std::cout << "|";
		white_print(10 - this->datas[i].size());
		data_print(this->datas[i]);
		std::cout << "|\n";
		std::cout << "-----------------------\n";
	}
}

void PhoneBook::select_show(int input)
{
	std::cout << "---------------------------------------------\n";
	brief_show(input);
	std::cout << "---------------------------------------------\n";
}


void PhoneBook::brief_show(int input)
{
	std::string str_input;

	str_input = std::to_string(input);
	std::cout << "|";
	white_print(10 - str_input.size());
	data_print(str_input);
	std::cout << "|";
	white_print(10 - this->datas[FIRST_NAME].size());
	data_print(this->datas[FIRST_NAME]);
	std::cout << "|";
	white_print(10 - this->datas[LAST_NAME].size());
	data_print(this->datas[LAST_NAME]);
	std::cout << "|";
	white_print(10 - this->datas[NICK_NAME].size());
	data_print(this->datas[NICK_NAME]);
	std::cout << "|";
	std::cout << "\n";
}
