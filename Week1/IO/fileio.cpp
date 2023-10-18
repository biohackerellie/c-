#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

	ofstream outFile("output.txt");
	if (outFile.is_open())
	{
		outFile << "Hello, this is a text file. \n";
		outFile << "This is another line. \n";
		outFile.close();
	}
	else
	{
		cout << "Unable to open file for writing." << endl;
	}

	string line;
	ifstream inFile("output.txt");
	if (inFile.is_open())
	{
		while (getline(inFile, line))
		{
			cout << line << '\n';
		}
		inFile.close();
	}
	else
	{
		cout << "Unable to open file for reading." << endl;
	}
	return 0;
}