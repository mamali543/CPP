#include "phonebook.hpp"

int main()
{
    string p;
    string t;
    phonebook phone;

    // getline(cin, t);
    // cout << t << endl;
    while (1)
    {
        cout << "$cmd>" ; 
        cin >> p;
        if (p.compare("ADD") == 0)
        {
            cout << "First name: ";
            cin.ignore();
            getline(cin, t);
            phone.setfs(t);
            cout << "Last name: ";
            getline(cin, t);
            phone.setln(t);
            cout << "Phone number: ";
            getline(cin, t);
            phone.setpn(t);
            cout << "Darkest secret: ";
            getline(cin, t);
            phone.setds(t);
            cout << phone.getfs() << endl << phone.getln() << endl << phone.getpn() << endl << phone.getds() << endl;   
        }
        else if (p.compare("SEARCH") == 0)
            cout << p << endl;
        else if (p.compare("exit") == 0)
            break ;
    }
    return (0);
}
