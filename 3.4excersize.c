#include <stdio.h>

void area (int w, int h){
    int a = w*h;
    printf("area of width %d and height %d: %d\n",w, h, a);
}



int main (){
    area(35, 90);
    return 0;
}