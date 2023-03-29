#include <iostream>
using namespace std;
int main( )
{
   char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }

   int b[5] = {1,4,3,6};
   cout << sizeof(b) / 5 << endl;

   double c[3];
   cout << sizeof(c) / 3;

   return 0;
}

