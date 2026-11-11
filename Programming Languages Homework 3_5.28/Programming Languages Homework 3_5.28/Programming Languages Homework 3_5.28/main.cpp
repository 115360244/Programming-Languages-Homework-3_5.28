#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

char changeCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return ch + 32;
    else if (ch >= 'a' && ch <= 'z')
        return ch - 32;
    else
        return ch;
}

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "Changed case: " << changeCase(ch) << endl;
	system("pause");
    return 0;
}