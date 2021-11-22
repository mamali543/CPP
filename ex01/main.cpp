#include "phonebook.hpp"

int main()
{
    string p;

    while (1)
    {
        cout << "$cmd>" ; 
        cin >> p;
        if (p.compare("ADD") == 0)
            cout << p << endl;
        else if (p.compare("SEARCH") == 0)
            cout << p << endl;
        else if (p.compare("exit") == 0)
            break ;
    }
    return (0);
}
