#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int x,y;
    cout << "Enter a first number: ";
    cin >> x;
    cout << "Enter a second number: ";
    cin >> y;

    if (x > y) {
        printf("You enter the first number that is bigger than second one!\n");
    } else {
        int z = 0;
        for (int i=x;i<=y;i++) {
            z += i;
        }
        cout << "Sum: " << z << endl;
    }

    return 0;
}

// professor code
// {
//     int first, second, sum;

//     if (argc != 3) {
//         printf("Invaild arguments")
//         return 1;
//     }

//     first = atoi(argv[1]);
//     second = atoi(argv[2]);

//     if (first < second) {
//         sum = 0;
//         while (first <= second) {
//             sum += first;
//             first++;
//         }
//         printf("Sum: %d\n", sum);
//     } else {
//         printf("Invaild arguments: the second number should be bigger than the first one\n");
//     }

//     return 0;
// }