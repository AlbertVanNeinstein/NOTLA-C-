
#include <iostream>
#include "windows.h"
#include "Index.h"
#include <fstream>
#include <string>

using namespace std;

int rmID;

ofstream myfile;
ifstream inFile;
ofstream outfile;

string textStr = "";
string nameStr = "";
string yesno = "";
string line;
string rm = "01";

bool on = false;

char indexed;
char loop;

void input() {
	cout << "Saving game information"<< endl;
	cout << ">>";
	cin >> rm + "\n";

}

void output() {
	cout << "What would you like to call the save file?" << endl;
	cout << ">>";
	cin >> nameStr;
	inFile.open("namedir.txt");
	size_t pos;
	while (inFile.good())
	{
		getline(inFile, line); // get line from file
		pos = line.find(nameStr); // search
		if (pos != string::npos) // string::npos is returned if string is not found
		{
			indexed = 1;
			if (indexed == 1) {
				cout << "This will overwrite the file, proceed? (Y/N) ";
				cin >> yesno;
				if (yesno == "Y") {
					cout << "The existing file will be overwritten" << endl;
					indexed = 3;
				}
				else if (yesno == "N") {
					exit(EXIT_FAILURE);
				}
			}
		}
		if (pos = string::npos) {
			std::ofstream outfile;
			outfile.open("namedir.txt", std::ios_base::app);
			outfile << nameStr + "\n";
			indexed = 3;
		}

	}
}

int main() {
	output();
	input();
	if (indexed == 0) {
		std::ofstream outfile;
		outfile.open("namedir.txt", std::ios_base::app);
		outfile << nameStr + "\n";
		goto close;
	}
	if (indexed == 3) {
	close:
		myfile.open(nameStr + ".gamesav");
		myfile << textStr;
		myfile.close();
		return 0;
	}
}