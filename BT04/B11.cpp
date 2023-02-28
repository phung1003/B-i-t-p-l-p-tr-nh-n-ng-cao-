#include <iostream>
#include <string>
using namespace std;

string dao(string s)
{
    int n = s.length();
    string kq ="";
    for (int i=n-1; i>=0; i--)
    {
        kq = kq + s[i];
    }
    return kq;
}

int main()
{
    int n;
    cin >> n;
    string s[n], a;
    getline(std::cin,s[0]);
    for (int i=0; i<n; i++) getline(std::cin,s[i]);
    for (int i=0; i<n-1; i++)
    {
        string temp;
        if (s[i].length() % 2 != 0)
        {
            temp = dao(s[i]);
            for (int j = i+1; j < n; j++)
            {
                if (temp == s[j])
                {
                    cout << s[i].length() <<' ' ;
                    cout << s[i][s[i].length()/2];
                    break;
                }
            }
        }

    }
    return 0;


}
