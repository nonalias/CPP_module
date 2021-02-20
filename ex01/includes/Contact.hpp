#ifndef __CONTACT_HPP
#define __CONTACT_HPP
#include "phonebook.hpp"

class	Contact {
	private:
		std::string datas[11];
	public:
		Contact();
		void set(std::string datas[11]);
		void data_print(std::string str);
		void white_print(int count);
		void detail_show(std::string title[11], int input);
		void select_show(int input);
		void brief_show(int input);
};

#endif
