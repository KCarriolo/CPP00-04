#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4){
		std::cout << "Error: Invalid arguments." << std::endl;
		std::cout << "Usage: ./snr filename s1 s2" << std::endl;
		return (1);
	}	
	std::string	arg2 (argv[2]);
	std::string	arg3 (argv[3]);
	if (arg2.empty() || arg3.empty()){
		std::cout << "Error: Empty parameters." << std::endl;		
		std::cout << "Usage: ./snr filename s1 s2" << std::endl;
		return (1);
	}
	std::ifstream file (argv[1]);
	if (!file.is_open()){
		std::cout << "Error: file does not exist or you don't have permission to access it" << std::endl;
		file.close();
		return (1);
	}
	char	c;
	if (file.get(c) == 0){
		std::cout << "Error: nothing to be searched and replaced. File is empty." << std::endl;
		file.close();
		return (1);
	}
	size_t			pos;
	std::string		aux;	
	std::string		arg1 (argv[1]);
	std::ifstream	auxSwap;
	std::ofstream 	outFile (arg1.append(".replace").data());
	if (!outFile.is_open()){
		std::cout << "Error: You don't have the required permissions for .replace file" << std::endl;
		file.close();
		auxSwap.close();
		outFile.close();
		return (1);
	}
	while (file.good() && !file.eof())
	{
		getline(file, aux);
		while ((pos = aux.find(arg2,  0)) != std::string::npos){
			aux = aux.erase(pos, arg2.length());	
			aux.insert(pos, arg3);	
		}
		outFile << aux << std::endl;
	}
	file.close();
	auxSwap.close();
	outFile.close();
	return (0);
}
