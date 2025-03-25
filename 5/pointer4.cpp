#include <iostream>
#define BUFLEN 10
using namespace std;

int main(int argc, char *argv[])
{
    char str1[6] = {'h', 'e', 'l', 'l', 'o', 0};
    char str2[6] = {'w', 'o', 'r', 'l', 'd', 0};
    char *p;
    int i;

    // // pointer 4
    // p = str1 + 1;

    // cout << "str1 = " << str1 << endl;
    // cout << "str2 = " << str2 << endl;
    // cout << "p = " << p << endl;

    // // pointer 5
    // p = str2;

    // cout << "str1 = " << str1 << endl;
    // cout << "str2 = " << str2 << endl;

    // for (i=-10;i<10;i++)
    //     cout << "p[" << i << "] = " << p[i] << endl;

    // // practice
    // *(p-1) = ',';
    // cout << "str1 = " << str1 << endl;

    return 0;
}
