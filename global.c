#include <stdio.h>

int x = 5;

void myFunction(){
    int x = 7;
    printf("%d\n", x);
}

int main (){
    myFunction();
    printf("%d\n", x);
    return 0;
}