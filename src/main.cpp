#include <iostream>
#include <fstream>
#include <string>



namespace Lib 
{
	// Template print function
	template <typename T>
	void Print(T t) {
		std::cout << t << "\n";
	}
	// Writes to text file.
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
		std::string fileContent;
		std::ifstream openFile("minfil.txt");
		while (std::getline(openFile, fileContent))
		{
			std::cout << "Filecontent: " << fileContent << "\n";
		}
		openFile.close();
	}
}




int main()
{
	Lib::Print(123);
	Lib::WriteToFile(Lib::filepath1);
	Lib::ReadFromFile();
}