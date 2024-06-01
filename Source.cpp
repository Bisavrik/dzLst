#include <iostream>
#include <cstring>
#include "Header.h"
#pragma warning(disable : 4996)

using namespace std;

//1

/*void inputSurnames(char surnames[][maxLength1])
{
    cout << "Enter 5 students surnames:" << endl;
    for (int i = 0; i < numSurnames; i++) 
    {
        cout << "Surname " << i + 1 << ": ";
        cin >> surnames[i];
    }
}

void findLongestSurname(char surnames[][maxLength1], char longestSurname[]) 
{
    int maxSurnameLength = 0;
    for (int i = 0; i < numSurnames; i++)
    {
        int currentLength = strlen(surnames[i]);
        if (currentLength > maxSurnameLength) 
        {
            maxSurnameLength = currentLength;
            strcpy(longestSurname, surnames[i]);
        }
    }
}*/


//2

void customInput(char* buffer, int size)
{
    int i = 0;
    while (i < size - 1)
    {
        char ch;
        cin >> noskipws >> ch;
        if (ch == '\n')
        {
            break;
        }
        buffer[i++] = ch;
    }
    buffer[i] = '\0';
}
int countSubstring(const char* str, const char* substr) 
{
    int count = 0;
    int strLength = strlen(str);
    int substrLength = strlen(substr);

    for (int i = 0; i <= strLength - substrLength; ++i)
    {
        bool match = true;
        for (int j = 0; j < substrLength; ++j) 
        {
            if (str[i + j] != substr[j]) 
            {
                match = false;
                break;
            }
        }
        if (match) 
        {
            count++;
        }
    }

    return count;
}

