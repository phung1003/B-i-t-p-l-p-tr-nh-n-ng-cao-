#include <iostream>
using namespace std;
int main()
{
    int n;
    int* pn = &n;
    delete pn;
    return 0;
} //Chương trình ngay lập tức bị lỗi và return;
