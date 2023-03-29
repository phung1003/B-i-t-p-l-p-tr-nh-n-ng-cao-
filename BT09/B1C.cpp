#include <iostream>
using namespace std;

char* reverse(const char a[]){
    int n = 0;
    while (a[n] != NULL) n++;
    char *b = new char [n];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[n - i -1];
    }
    return b;

}

char* delete_char(const char a[], char c)
{
    int n = 0;
    while (a[n] != NULL) n++;
    int d(0);
    char *b = new char [n] ;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != c)
        {
            b[d] = a[i];
            d++;
        }
    }

    return b;
}



char* truncate(const char a[], int n)
{
    int t = 0;
    while (a[t] != NULL) t++;
    char *b = new char [n] ;
    for (int i = 0; i< n; i++) b[i] = a[i];
    return b;
}

bool is_palindrome(char a[], int n)
{
    for (int i = 0; i < n/2; i++)
    {
        if (a[i] != a[n-i-1]) return 0;
    }
    return 1;
}

char* trim_left(const char a[])
{
    int n = 0;
    while (a[n] != NULL) n++;
    char *b = new char ;
    for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }
    while (b[0] == ' ')
    {
        for (int i = 1; i < n; i++)
        {
            b[i-1] = b[i];
        }
        n--;
        b[n] = NULL;

    }
    return b;
}

char* trim_right(char a[])
{
    int n = 0;
    while (a[n] != NULL) n++;
    char *b = new char ;
    for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }
    while (b[n-1] == ' ')
    {
       b[n] = NULL;
       n--;
    }
    return b;

}

int main()
{
    char *a = "Hello   ";
    a = trim_right(a);
    cout << a;

    return 0;

}

