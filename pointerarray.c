#include <stdio.h>

int main (){
    int myNumbers[] = {25, 50, 75, 100};
    printf("address of the array: %p\n", myNumbers);
    printf("address of the first element: %p\n", &myNumbers[0]);
    printf("address of the second element: %p | element: %d\n", &myNumbers[1], *&myNumbers[1]);
    


}