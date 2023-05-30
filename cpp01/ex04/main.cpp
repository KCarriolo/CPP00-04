#include <iostream>
#include <fstream>
#include <cstdlib>

int	main(int argc, char **argv)
{
	/*if (argc != 4){
		std::cout << "Invalid arguments!" << std::endl;
		std::cout << "Usage: ./snr filename s1 s2" << std::endl;
		return (1);
	}*/
	std::ifstream file (argv[1]);
	if (!file.is_open()){
		std::cout << "Error: file does not exist" << std::endl;
		return (0);
	}
	std::string	arg = argv[1].c_str();
	std::string	str = "touch ";
	str = str + argv[1] + ".replace";
	system(str);
	//file.open(argv[1], std::ifstream::in)
	return (1);
}
