
#include <locale.h>
#include <iostream>
#include <Windows.h>
#include <string.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

		char Str[80];
		cout << "Введите строку:" << endl;
		cin.getline(Str, 80);
		int len = 0;
		while (Str[len] != '\0') {
			len++;
		}
		int firstlen = 0;
		while (Str[firstlen] != ' ') {
			firstlen++;
		}
		cout << "Колличество символов в первом слове: " << firstlen << endl << "Слова, в которых меньше символов, чем в первом: ";
		int counter, wordlen = 0, lesscharnum = 0;
		for (counter = firstlen; counter <= len; counter++) {
			int old_c = counter;
			wordlen = 0;
			while (Str[counter] != ' ' && Str[counter] != '\0') {
				wordlen++;
				counter++;
			}

			if (wordlen < firstlen && wordlen != 0) {
				while (Str[old_c] != ' ' && Str[old_c] != '\0') {
					cout << Str[old_c];
					old_c++;
				}
				cout << " ";
				lesscharnum++;
			}
		}
		cout << endl << "Колличество слов, в которых меньше символов, чем в первом: " << lesscharnum <<endl; 
		  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  char Str1[80];
	cout << "Введите строку:" << endl;
	cin.getline(Str, 80);
	int len1 = strlen(Str);
	int firstlen1 = 0;
	while (isalnum(Str[firstlen1])){
		firstlen1++; 
	}
	cout <<"Колличество символо в первом слове: " << firstlen1 <<endl <<"Слова, в которых меньше символов, чем в первом: ";
	int counter1, wordlen1 = 0, lesscharnum1 = 0;
	for (counter1 = firstlen1; counter1 <= len1; counter1++) {
		int old_c1 = counter1;
		wordlen1 = 0;
		while (isalnum(Str[counter1])){
			wordlen1++;
			counter1++;
		}
		if(wordlen1 < firstlen1 && wordlen1 != 0) {
			while (isalnum(Str[old_c1])) {
				cout << Str[old_c1];
				old_c1++;
			}
			cout << " ";
			lesscharnum1++;
		}
	}
	cout << endl << "Колличество слов, в которых меньше символов, чем в первом: " << lesscharnum1 << endl;
}


