#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4){
		std::cout << "Invalid arguments!" << std::endl;
		std::cout << "Usage: ./snr filename s1 s2" << std::endl;
		return (1);
	}	
	std::string	arg2 (argv[2]);
	std::string	arg3 (argv[3]);
	if (arg2.empty() || arg3.empty()){
		std::cout << "nope" << std::endl;		
		return (1);
	}
	std::ifstream file (argv[1]);
	if (!file.is_open()){
		std::cout << "Error: file does not exist" << std::endl;
		return (1);
	}
	size_t			pos;
	std::string		aux;	
	std::string		arg1 (argv[1]);
	std::ifstream	newFile(argv[1]);
	std::ofstream 	outFile (arg1.append(".replace"));
	//outFile.open(newFile, std::ofstream::out);
	while (newFile.good() && !newFile.eof() && outFile.good())
	{
		getline(newFile, aux);
		if ((pos = aux.find(arg2,  0)) != std::string::npos){
				
		}
	}
	return (0);
}
