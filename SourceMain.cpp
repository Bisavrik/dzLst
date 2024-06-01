#include <iostream>
#include <cstring>
#include "Header.h"
#define INTEGER
#pragma warning(disable : 4996)

using namespace std;

int main()
{
	//1

   /* char surnames[numSurnames][maxLength1];
    char longestSurname[maxLength1];

    inputSurnames(surnames);
    findLongestSurname(surnames, longestSurname);

    cout << "The longest surname: " << longestSurname << endl;*/


    //2

    char str[maxLength2];
    char substr[maxLength2];

    cout << "Enter string: ";
    customInput(str, maxLength2);

    cout << "Enter substring for search: ";
    customInput(substr, maxLength2);

    int occurrences = countSubstring(str, substr);

    cout << "Result: " << occurrences << endl;

}