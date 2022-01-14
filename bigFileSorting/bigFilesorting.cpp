#include <iostream>
#include <fstream>
#include <string>
#include <bitset>
#include <limits>

namespace constants
{
	const int size = 10000000;

}

int main()
{
	
	std::bitset<constants::size> bits;
	std::string path = "unsortedfile.txt";
	
	std::fstream fin(path, std::ios_base::in);
	if(!fin.is_open())
        	std::cout << "Something went wrong, while openning \"unsortedfile.txt\" text file.\n";
	else{
		std::string line;
		while(!fin.eof())
		{
			std::getline(fin, line);
			if(line != "")
				bits[std::stoi(line)] = 1;
		}
	}
	
	fin.close();
	for(int i = 0; i < constants::size; ++i)
		std::cout << bits[i];
	std::fstream sorted("so1.txt", std::ios_base::out);
	if(!sorted.is_open()) 
		std::cout << "Something went wrong, while openning \"sorted.txt\" text file.\n";
	else{
		for(int i = 0; i < bits.size(); ++i)
		{
			if(bits[i]) sorted << i << "\n";
		}
	}
	sorted.close();
	
	return 0;
}
