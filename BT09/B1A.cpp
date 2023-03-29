#include <iostream>
#include <cstring>
using namespace std;
char* concat(const char* a, const char* b)
{
    int n = 0,m = 0;
    while (a[n] != NULL) n++;
    while (b[m] != NULL) m++;
    char *c = new char [n+m];
    strcpy(c,a);
    strcpy(c+n,b);
    return c;

}
int main()
{
    char *c = new char;
    char *a = "Hello";
    char *b = "World";
    c = concat(a, b);
    cout << c;
    return 0;
}
