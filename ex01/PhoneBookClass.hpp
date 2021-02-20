#ifndef __PHONE_BOOK_CLASS_HPP
#define __PHONE_BOOK_CLASS_HPP
#include "phonebook.hpp"

class	PhoneBook {
	private:
		std::string datas[11];
	public:
		PhoneBook();
		void set(std::string datas[11]);
		void data_print(std::string str);
		void white_print(int count);
		void detail_show(std::string title[11], int input);
		void select_show(int input);
		void brief_show(int input);
};

#endif
