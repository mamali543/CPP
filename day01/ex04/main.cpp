#include <iostream>
#include <fstream>
#include <string>

int     main(int    argc, char**    argv)
{
    std::string text;


    if (argc != 4)
    {
        std::cout << "invalid args" << std::endl;
        return (0);
    }
    std::ifstream file(argv[1]);
    if (file.is_open() == 0)
    {
            std::cout << "ther's no such file : " << argv[1] << std::endl;
            return (0);
    }
    std::string ffile = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (s1.empty() || s2.empty())
    {
        std::cout << "invalid args" << std::endl;
        return (0);     
    }
    ffile = ffile + ".replace";
    std::ofstream Myfile(ffile);
    std::ifstream Myreadfile(argv[1]);
    while (std::getline (Myreadfile, text))
    {
        std::size_t  found;
        int start = 0;
        std::string a = "";
        std::string b = "";
        found = text.find(s1, 0);
        while (found != std::string::npos)
        {
            a = text.substr(start, found - start);
            b = b + a + s2;
            start = found + s1.size();
            found = text.find(s1, found + s1.size());
        }
        a = text.substr(start, text.size());
        Myfile << b + a;
        if (!Myreadfile.eof())
            Myfile << '\n';
    }
    Myreadfile.close();
    Myfile.close();
    return (0);
}