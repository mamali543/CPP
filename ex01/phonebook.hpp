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
		void setpn(string pn){
			phone_number = pn;
		}
		void setfs(string fs){
			f_name = fs;
		}
		void setln(string ln){
			l_name = ln;
		}
		void setds(string ds){
			dark_secret = ds;
		}
		string getfs(){
			return (f_name);
		}
		string getln(){
			return (l_name);
		}
		string getpn(){
			return (phone_number);
		}
		string getds(){
			return (dark_secret);
		}
};

#endif