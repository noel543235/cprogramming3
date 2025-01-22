#include <stdio.h>

int main (){
     int myNumbers[] = {25, 50, 75, 100};
    printf("address of the second element: %p | element: %d\n", &myNumbers[1], *&myNumbers[1]);
    for(int i = 0; i<sizeof(myNumbers)/sizeof(myNumbers[0]); i++){
        printf("memory address %p: value: %d\n", &myNumbers[i], *&myNumbers[i]);
    }
    
}