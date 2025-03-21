#include <iostream>
#define BUFLEN 20
using namespace std;

void print_result(int *arr, int idx) {
    cout << "arr[" << idx << "] = " << arr[idx] << endl;
}

int main(int argc, char *argv[])
{
    int arr[BUFLEN];
    int i;

    for (i=0;i<BUFLEN;i++) {
        arr[i] = BUFLEN - i;
    }

    // cout << "arr[0] = " << arr[0] << endl;
    // cout << "arr[3] = " << arr[3] << endl;
    // cout << "arr[15] = " << arr[15] << endl;
    print_result(arr,0);
    print_result(arr,3);
    print_result(arr,15);

    return 0;
}