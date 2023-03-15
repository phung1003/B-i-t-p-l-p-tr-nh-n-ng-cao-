#include <iostream>
using namespace std;
int binary_search(int* a, int n, int x) {
    int lo = 0, hi = n;
    while (lo < hi) {
        int mid = lo + (hi - lo)/2;
        if (a[mid] == x)
            return mid;
        else if (a[mid] < x)
            lo = mid+1;
        else
            hi = mid-1;
    }
    return -1;
}


int main()
{
    int *a = new int [10];
    for (int i = 0; i< 10; i++) *(a+i) = i+1;
    cout << binary_search(a, 10, 1);
    return 0;
}

