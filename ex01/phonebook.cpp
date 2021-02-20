#include <iostream>
#include <fstream>
#include <string>

int hdflag = 0;

class	PhoneBook {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
	public:
		PhoneBook()
		{}
		void set(std::string first_name, std::string last_name, std::string nickname,
				std::string login, std::string postal_address, std::string email_address,
				std::string phone_number, std::string birthday_date, std::string favorite_meal,
				std::string underwear_color, std::string darkest_secret)
		{
			this->first_name = first_name;
			this->last_name = last_name;
			this->nickname = nickname;
			this->login = login;
			this->postal_address = postal_address;
			this->email_address = email_address;
			this->phone_number = phone_number;
			this->birthday_date = birthday_date;
			this->favorite_meal = favorite_meal;
			this->underwear_color = underwear_color;
			this->darkest_secret = darkest_secret;
		}

		void select_show(int input)
		{
			std::cout << "---------------------------------------------\n";
			show_data(input);
			std::cout << "---------------------------------------------\n";
		}

		void data_print(std::string str)
		{
			if (str.size() >= 10)
				str[9] = '.';
			for (int i = 0; i < 10; i++)
				std::cout << str[i];
		}

		void white_print(int count)
		{
			for (int i = 0; i < count; i++)
				std::cout << ' ';
		}

		void detail_show(int input)
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

			std::cout << "|";
			white_print(10 - (int)strlen("first name"));
			data_print("first name");
			std::cout << "|";
			white_print(10 - this->first_name.size());
			data_print(this->first_name);
			std::cout << "|\n";
			std::cout << "-----------------------\n";

			std::cout << "|";
			white_print(10 - (int)strlen("last name"));
			data_print("last name");
			std::cout << "|";
			white_print(10 - this->last_name.size());
			data_print(this->last_name);
			std::cout << "|\n";
			std::cout << "-----------------------\n";

			std::cout << "|";
			white_print(10 - (int)strlen("nickname"));
			data_print("nickname");
			std::cout << "|";
			white_print(10 - this->nickname.size());
			data_print(this->nickname);
			std::cout << "|\n";
			std::cout << "-----------------------\n";

			std::cout << "|";
			white_print(10 - (int)strlen("login"));
			data_print("login");
			std::cout << "|";
			white_print(10 - this->login.size());
			data_print(this->login);
			std::cout << "|\n";
			std::cout << "-----------------------\n";

			std::cout << "|";
			white_print(10 - (int)strlen("postal address"));
			data_print("postal address");
			std::cout << "|";
			white_print(10 - this->postal_address.size());
			data_print(this->postal_address);
			std::cout << "|\n";
			std::cout << "-----------------------\n";

			std::cout << "|";
			white_print(10 - (int)strlen("email address"));
			data_print("email address");
			std::cout << "|";
			white_print(10 - this->email_address.size());
			data_print(this->email_address);
			std::cout << "|\n";
			std::cout << "-----------------------\n";

			std::cout << "|";
			white_print(10 - (int)strlen("phone number"));
			data_print("phone number");
			std::cout << "|";
			white_print(10 - this->phone_number.size());
			data_print(this->phone_number);
			std::cout << "|\n";
			std::cout << "-----------------------\n";

			std::cout << "|";
			white_print(10 - (int)strlen("birthday date"));
			data_print("birthday date");
			std::cout << "|";
			white_print(10 - this->birthday_date.size());
			data_print(this->birthday_date);
			std::cout << "|\n";
			std::cout << "-----------------------\n";

			std::cout << "|";
			white_print(10 - (int)strlen("favorite meal"));
			data_print("favorite meal");
			std::cout << "|";
			white_print(10 - this->favorite_meal.size());
			data_print(this->favorite_meal);
			std::cout << "|\n";
			std::cout << "-----------------------\n";

			std::cout << "|";
			white_print(10 - (int)strlen("underwear color"));
			data_print("underwear color");
			std::cout << "|";
			white_print(10 - this->underwear_color.size());
			data_print(this->underwear_color);
			std::cout << "|\n";
			std::cout << "-----------------------\n";

			std::cout << "|";
			white_print(10 - (int)strlen("darkest secret"));
			data_print("darkest secret");
			std::cout << "|";
			white_print(10 - this->darkest_secret.size());
			data_print(this->darkest_secret);
			std::cout << "|\n";

			std::cout << "-----------------------\n";
		}

		void show_data(int input)
		{
			std::string str_input;

			str_input = std::to_string(input);
			std::cout << "|";
			white_print(10 - str_input.size());
			data_print(str_input);
			std::cout << "|";
			white_print(10 - this->first_name.size());
			data_print(this->first_name);
			std::cout << "|";
			white_print(10 - this->last_name.size());
			data_print(this->last_name);
			std::cout << "|";
			white_print(10 - this->nickname.size());
			data_print(this->nickname);
			std::cout << "|";
			std::cout << "\n";
		}
};

PhoneBook	pb[8];
int			idx = 0;

void show(PhoneBook pb[])
{
	std::cout << "---------------------------------------------\n";
	std::cout << "|     index|first name| last name|  nickname|\n";
	for (int i = 0; i < idx; i++)
		pb[i].select_show(i);
}



void	run(std::string command)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
	if (command == "ADD")
	{
		if (idx == 8)
		{
			std::cout << "\n\033[31mYou don't add more than 8 contact!\033[0m\n\n";
			return ;
		}
		std::cout << "first name : ";
		std::cin.ignore();
		getline(std::cin, first_name);
		std::cout << "last name : ";
		getline(std::cin, last_name);
		std::cout << "nick name : ";
		getline(std::cin, nickname);
		std::cout << "login : ";
		getline(std::cin, login);
		std::cout << "postal address : ";
		getline(std::cin, postal_address);
		std::cout << "email address : ";
		getline(std::cin, email_address);
		std::cout << "phone number: ";
		getline(std::cin, phone_number);
		std::cout << "birthday date : ";
		getline(std::cin, birthday_date);
		std::cout << "favorite meal : ";
		getline(std::cin, favorite_meal);
		std::cout << "underwear color : ";
		getline(std::cin, underwear_color);
		std::cout << "darkest_secret : ";
		getline(std::cin, darkest_secret);
		pb[idx].set(first_name, last_name, nickname,
				login, postal_address, email_address, phone_number,
				birthday_date, favorite_meal, underwear_color,
				darkest_secret);
		std::cout << "\n\033[32mADD SUCCESS\033[0m\n\n";
		idx++;
	}
	else if (command == "SEARCH")
	{
		int input;

		if (idx == 0)
		{
			std::cout << "\n\033[31mNo contacts exist!\033[0m\n\n";
			return ;
		}
		show(pb);
		std::cout << "\nplease input index (0 ~ " << idx - 1<< ") : ";
		std::cin >> input;
		while (input < 0 || input >= idx)
		{
			std::cout << "\n\033[31mYou should input right range of index!\033[0m\n\n";
			std::cout << "\nplease input index (0 ~ " << idx - 1<< ") : ";
			std::cin >> input;
		}
		pb[input].detail_show(input);
		//pb[input].select_show(input);
	}
	else if (command == "hidden")
	{
		std::ifstream fin;

		fin.open("hidden.txt");
		for (int i = 0; i < 8; i++)
		{
			std::cout << "first name : ";
			getline(fin, first_name);
			std::cout << first_name << std::endl;
			std::cout << "last name : ";
			getline(fin, last_name);
			std::cout << last_name << std::endl;
			std::cout << "nick name : ";
			getline(fin, nickname);
			std::cout << nickname << std::endl;
			std::cout << "login : ";
			getline(fin, login);
			std::cout << login << std::endl;
			std::cout << "postal address : ";
			getline(fin, postal_address);
			std::cout << postal_address << std::endl;
			std::cout << "email address : ";
			getline(fin, email_address);
			std::cout << email_address << std::endl;
			std::cout << "phone number: ";
			getline(fin, phone_number);
			std::cout << phone_number << std::endl;
			std::cout << "birthday date : ";
			getline(fin, birthday_date);
			std::cout << birthday_date << std::endl;
			std::cout << "favorite meal : ";
			getline(fin, favorite_meal);
			std::cout << favorite_meal << std::endl;
			std::cout << "underwear color : ";
			getline(fin, underwear_color);
			std::cout << underwear_color << std::endl;
			std::cout << "darkest_secret : ";
			getline(fin, darkest_secret);
			std::cout << darkest_secret << std::endl;
			pb[idx].set(first_name, last_name, nickname,
					login, postal_address, email_address, phone_number,
					birthday_date, favorite_meal, underwear_color,
					darkest_secret);
			std::cout << "\n\033[32mADD SUCCESS\033[0m\n\n";
			idx++;
		}
	}
}

int		main()
{
	std::string command;

	while (1)
	{
		std::cout << "please input your command : \033[34mEXIT, ADD, SEARCH\033[0m" << std::endl;
		std::cout << "any other command is discarded" << std::endl;
		std::cout << " $ ";
		std::cin >> command;
		if (command == "EXIT")
			break ;
		run(command);
	}
}
