#include <iostream>
using namespace std;


string	to_upper(string str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int main(int argc, char **argv)
{
	int	i;
	string	str;
	i = 1;

	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	else
	{
		while (argv[i])
		{
			str = to_upper(argv[i++]);
			cout << str;
		}
		cout << endl;
	}
	return (0);
}