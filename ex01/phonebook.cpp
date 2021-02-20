#include "phonebook.hpp"

PhoneBook	pb[8];
int			idx = 0;
std::string	title[11] = {"first name", "last name", "nickname",
	"login", "postal address", "email address", "phone number",
	"birthday data", "favorite_meal", "underwear_color",
	"darkest_secret"};


void show(PhoneBook pb[])
{
	std::cout << "---------------------------------------------\n";
	std::cout << "|     index|first name| last name|  nickname|\n";
	for (int i = 0; i < idx; i++)
		pb[i].select_show(i);
}

void	run(std::string command)
{
	std::string datas[11];
	if (command == "ADD")
	{
		if (idx == 8)
		{
			std::cout << "\n\033[31mYou don't add more than 8 contact!\033[0m\n\n";
			return ;
		}
		std::cin.ignore();
		for (int i = 0; i < 11; i++)
		{
			std::cout << title[i] << " : ";
			getline(std::cin, datas[i]);
		}
		pb[idx].set(datas);
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
		pb[input].detail_show(title, input);
	}
	else if (command == "hidden")
	{
		std::ifstream fin;

		fin.open("hidden.txt");
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 11; j++)
			{
				std::cout << title[j] << " : ";
				getline(fin, datas[j]);
				std::cout << datas[j] << std::endl;
			}
			pb[idx].set(datas);
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
