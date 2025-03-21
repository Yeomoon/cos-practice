#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    // unsigned int x{};
    int x{};
    cout << "Enter a number: ";
    cin >> x;

    if (x>=0) {
        cout << "You entered a positive integer!" << endl;
    } else {
        cout << "You entered a negetive integer!" << endl;
    }

    return 0;
}