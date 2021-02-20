#include <iostream>
#include <string>

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
		void show()
		{
		}
};

PhoneBook	pb[8];
int			idx = 0;

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
		if (idx == 7)
		{
			std::cout << "You don't add more than 8 contact!\n";
			return ;
		}
		std::cout << "first name : ";
		std::cin.ignore();
		getline(std::cin, first_name);
		std::cout << "last name : ";
		std::cin.ignore();
		getline(std::cin, last_name);
		std::cout << "nick name : ";
		std::cin.ignore();
		getline(std::cin, nickname);
		std::cout << "login : ";
		std::cin.ignore();
		getline(std::cin, login);
		std::cout << "postal address : ";
		std::cin.ignore();
		getline(std::cin, postal_address);
		std::cout << "email address : ";
		std::cin.ignore();
		getline(std::cin, email_address);
		std::cout << "phone number: ";
		std::cin.ignore();
		getline(std::cin, phone_number);
		std::cout << "birthday date : ";
		std::cin.ignore();
		getline(std::cin, birthday_date);
		std::cout << "favorite meal : ";
		std::cin.ignore();
		getline(std::cin, favorite_meal);
		std::cout << "underwear color : ";
		std::cin.ignore();
		getline(std::cin, underwear_color);
		std::cout << "darkest_secret : ";
		std::cin.ignore();
		getline(std::cin, darkest_secret);
		pb[idx].set(first_name, last_name, nickname,
				login, postal_address, email_address, phone_number,
				birthday_date, favorite_meal, underwear_color,
				darkest_secret);
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
		std::cout << "please input index (0 ~ " << idx - 1<< ") : ";
		std::cin >> input;
		while (input < 0 || input > idx)
		{
			std::cout << "You should input right range of index!\n";
			std::cout << "please input index (0 ~ " << idx - 1<< ") : ";
			std::cin >> input;
		}
		pb[input].show();
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
