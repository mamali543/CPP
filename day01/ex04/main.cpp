#include <iostream>
#include <fstream>
#include <string>

int     main(int    argc, char**    argv)
{
    int     i;
    std::string text;

    i = 0;

    if (argc != 4)
        std::cout << "invalid args" << std::endl;
    std::ifstream file(argv[1]);
    if (file.is_open() == 0)
        std::cout << "ther's no such file : " << argv[1] << std::endl;
    std::string ffile = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    ffile = ffile + ".replace";
    std::ofstream Myfile(ffile);
    std::ifstream Myreadfile(argv[1]);
    while (std::getline (Myreadfile, text))
    {
        std::size_t  found;
        int start = 0;
        std::string a = "";
        std::string b = "";
        if (i != 0)
            Myfile << '\n';
        found = text.find(s1, 0);
        while (found != std::string::npos)
        {
            a = text.substr(start, found - start);
            std::cout << "a>>" << a << "\n----------\n";
            b = b + a + s2;
            std::cout << "b>>" << b << "\n";
            start = found + s1.size();
            found = text.find(s1, found + s1.size());
        }
        a = text.substr(start, text.size());
        Myfile << b + a;
        i++;
    }
    Myreadfile.close();
    Myfile.close();
    return (0);
}