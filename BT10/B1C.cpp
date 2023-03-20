#include <iostream>
#include <string>
using namespace std;

struct Strng
{
    int n;
    char* s = new char;
    Strng(string m)
    {
        char* x = new char [m.length()];
        for (int i = 0; i < m.length(); i++)
        {
            *(x + i) = m[i];
        }
        n = m.length();
        s = x;
    }
    ~Strng()
    {
        delete []s;
    }

    void print()
    {
        cout << s;
    }

    void append(const char* m)
    {
       int i(0);

       while (*(m+i) != NULL)
       {
           *(s+n) =  *(m+i);
           n++;
           i++;
       }


    }
};


int main()
{
    Strng s = Strng("hello");
  //  s.print();
    s.append(" Darkness My Old Friend");
    s.print();
    return 0;
}
