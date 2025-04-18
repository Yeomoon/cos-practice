#include <iostream>
using namespace std;

short test(short x, short y, short z){
    __asm__(
        "leaq (%rdx, %rsi), %rax\n"
        "subq %rdi, %rax\n"
        "cmpq $5, %rdx\n"
        "jle .label2\n"
        "cmpq $2, %rsi\n"
        "jle .label3\n"
        "movq %rdi, %rax\n"
        "idivq %rdx, %rax\n"
        "jmp .label4\n"
        ".label3:\n"
        "movq %rdi, %rax\n"
        "idivq %rsi, %rax\n"
        "jmp .L4\n"
        ".label2:\n"
        "cmpq $3, %rdx\n"
        "jge .label4\n"
        "movq %rdx, %rax\n"
        "idivq %rsi, %rax\n"
        ".label4:\n"
        "rep"
    );
}

int main(int argc, char *argv[]){
    short x,y,z;
    if (argc != 4){
        cout << "Error" << endl;
        return 1;
    }

    x = atoi(argv[1]); y = atoi(argv[2]); z = atoi(argv[3]);
    cout << "Result: " << test(x,y,z) << endl;
    return 0;
}

