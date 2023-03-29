#include <iostream>
using namespace std;
int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    //delete p; //Dong code gay loi
    *p2 = 100;
    cout << *p2;
    delete p2;
}
//Do c++ chỉ gán nông, nên khi gán p2 bằng p thì thứ sao chép  chỉ là địa chỉ. Nên trong chương trình có 2 lệnh đelete sẽ khiến 1 địa chỉ bị xóa 2 lần gây lỗi
