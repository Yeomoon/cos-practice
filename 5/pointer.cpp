// a=5, p는 &a로 a의 주솟값 자체를 담음, *p는 p라는 주솟값에 담긴 실제 값을 담음

#include <iostream>
#define BUFLEN 10
using namespace std;

int main(int argc, char *argv[])
{
    int arr[BUFLEN];
    int *p;
    int a,i;

    for (i=0; i<BUFLEN;i++)
        arr[i] = 10 - i;

    // // pointer1
    // a = 5;
    // p = &a;

    // cout << "a = " << a << endl;
    // cout << "p = " << p << endl;
    // cout << "&a = " << &a << endl;
    // cout << "*p = " << *p << endl;
    // cout << "arr = " << arr << endl;

    // // pointer2
    // *p = 10;
    // cout << "a = " << a << endl;
    // cout << "p = " << p << endl;

    // pointer3
    p = arr+2;
    cout << "arr[2] = " << arr[2] << endl;
    cout << "arr+2 = " << arr+2 << endl;
    cout << "*(arr+2) = " << *(arr+2) << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;

    return 0;
}
