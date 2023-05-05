
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
	int b = 0;
	while (Str[b] != '\0') {
		b++;
	}
	int i = 0;
	while (Str[i] != ' ') {
		i++;
	}
	cout << "Колличество символов в первом слове: " << i << endl <<"Слова, в которых меньше символов, чем в первом: ";
	int c, f=0, d=0;
	for ( c = i ; c <= b; c++) {
		int old_c = c;
		while (Str[c] != ' ') {
		f++;
		 c++;
		}
		if (f < i) {
			while (Str[old_c] != ' ') {
				cout << Str[old_c];
				old_c++;
			}
			cout << " ";
			d++;
		}
		f = 0;
	}
	cout <<endl <<"Колличество слов, в которых меньше символов, чем в первом: " << d;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



}


