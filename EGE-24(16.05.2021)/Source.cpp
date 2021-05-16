#include <iostream>
#include <cmath>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int countG = 0;
	int numberStr = 0;
	int min = 100000;
	fstream file; // creat special fstream object for our file
	file.open("1.txt"); // open file
	string s; // create a string massive
	 // getline(file, s); read the 1 string and writting in s


	if (!file) { // just a checking whats happing with file
		cout << "File is not open\n\n";
		return 0;
	}
	else {
		cout << "file open\n\n";
	}
	for(int i = 0; (getline(file, s)); i++) {
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'G') {
				countG += 1;
			}
		}
		if (countG < min) {
			min = countG;
			numberStr = i;
		}
		
		countG = 0;
	}
	char word = 'a'; // create char object with first element of english alphabet
	for (int i = 0; i < 26; i++, word++) { // write alphabet for next work ;)
		cout << word << endl;
	}
	/*
	for (char word = 'a'; 'a' <= 'z'; word++) {
		cout << word << endl;
	}
	*/
	

	return 0;
}


