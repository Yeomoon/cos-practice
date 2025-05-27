#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int i ,j, x;
    int *p;

    for (i=0; i<x; i++){
        cout << i << "th iteration p:" << (void *)p << endl;
        p = (int *)malloc(sizeof(int) * 1000000);
        for (j=0; j<1000000; j++)
            p[j] = 1000000*i + j;
        // free(p);
    }
    cout << "We have successfully performed " << x << "allocations!" << endl;
    
    return 0;
}