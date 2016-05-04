#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int counter(string);

int main()
{
    string input;
	cout << "Enter a string:\n";
	getline(cin, input);
	cout << "Number of vowels = " << counter(input);

	cout << "\nPress any key to continue...";
	_getch();
	return 0;
}

int counter(string str)
{
    int count = 0;
    
	for(int i = 0; i < str.length(); i++)
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
            count++;
    return count;
}
