#include <iostream>
#include <fstream>
#include <string>



namespace Lib 
{

	template <typename T>
	void Print(T t) {
		std::cout << t << "\n";
	}

	void WriteToFile(std::string filepath) 
	{
		std::ofstream file(filepath);
		std::string fileContent;
		std::getline(std::cin, fileContent);
		file << fileContent;
		file.close();

	}

	std::string filepath1 = "minfil.txt";


	void ReadFromFile()
	{

	}
}




int main()
{
	Lib::Print(123);
	Lib::WriteToFile(Lib::filepath1);
}