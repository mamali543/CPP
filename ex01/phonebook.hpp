#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <string>

using namespace std;

class myclass{
    public:
        string brand;
        string model;
        int year;   
        myclass(string p, string s, int a) {
            brand = p;
            model = s;
            year = a;
        }
};

#endif