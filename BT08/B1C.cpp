#include <iostream>
using namespace std;

void reverse(char a[], int n){
    char b[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[n - i -1];
    }
    for (int i = 0; i<n; i++) a[i] = b[i];

}

void delete_char(char a[], char c, int &n)
{
    int d(0),t=n;
    char b[n];
    for (int i = 0; i < n; i++)
    {
        if (a[i] != c)
        {
            b[d] = a[i];
            d++;
            t--;
        }
    }

    for (int i = 0; i < d; i++)
    {
       a[i] = b[i];
    }
    n=t+1;
}

void pad_right(char a[], int n, int &t)
{
    while (t < n)
    {
        a[t] = ' ';
        t++;
    }
}

void pad_left(char a[], int n, int &t)
{
    if (t<n)
    {
        for (int i = t - 1; i >= 0; i--)
        {
            a[i+(n-t)] = a[i];
        }
        for (int i = 0; i < n-t; i++)
        {
            a[i] = ' ';
        }
    }
    t = n;

}

void truncate(char a[], int n,int &t)
{

    while (t > n)
    {
        a[t] = NULL;
        t--;
    }
}

bool is_palindrome(char a[], int n)
{
    for (int i = 0; i < n/2; i++)
    {
        if (a[i] != a[n-i-1]) return 0;
    }
    return 1;
}

void trim_left(char a[], int &n)
{
    while (a[0] == ' ')
    {
        for (int i = 1; i < n; i++)
        {
            a[i-1] = a[i];
        }
        a[n-1] = NULL;
        n--;
    }
}

void trim_right(char a[],int &n)
{
    while (a[n] == ' ')
    {
       a[n] = NULL;
       n--;
    }

}

int main()
{
    int n;
    cin >> n;
    char *a = new char [n];;

    for (int i = 0; i < n; i++) cin >> a[i];

    pad_left(a,9,n);
    for (int i = 0; i < n; i++) cout << a[i];

    return 0;

}
