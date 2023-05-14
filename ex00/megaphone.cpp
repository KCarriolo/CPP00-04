#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	if (argc > 1){
		int	i = 1;
		std::string str;
		while (argv[i])
			str = str + " " + argv[i++];
		i = 0;
		while (str[i]){
			if (std::islower(str[i]))
				str[i] = std::toupper(str[i]);
			i++;
		}
		std::cout << str << std::endl;
		return (0);
	}
	std::cout << " * LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
