#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <string>

using namespace std;

class phonebook{
	private:
		string	f_name;
		string	l_name;
		string	phone_number;
		string  dark_secret;   
	public:
		void setfs(string fs){
			f_name = fs;
		}
};

#endif