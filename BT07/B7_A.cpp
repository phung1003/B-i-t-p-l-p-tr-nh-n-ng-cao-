#include <iostream>
#include <string.h>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    int d(0);
    string s;
    getline(std::cin, s);
    char *s1 = new char [s.length() + 1];
    strcpy(s1, s.c_str());

    getline(std::cin, s);
    char *s2 = new char [s.length() + 1];
    strcpy(s2, s.c_str());

    for (int i = 0; i < s.length() - 2; i++)
    {
        char *temp = new char;
        memcpy(temp, s2+i, 3);

        if (strcmp(s1, temp) == 0) d++;
        delete []temp;

    }


    cout << d;
    return 0;
    delete []s1;
    delete []s2;



}
