#include <iostream>
#include <string>

char	to_upper_case(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

std::string	to_upper_string(std::string str)
{
	int		i;

	if (str.size() == 0)
		return str;
	i = 0;
	while (str[i])
	{
		str[i] = to_upper_case(str[i]);
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while (i < argc)
		{
			std::cout << to_upper_string(argv[i]);
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
