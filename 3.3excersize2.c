#include <stdio.h>


void tempConvert (float temp){
    float c = (temp-32)*(5.0/9);
    printf("F to C convert %f to C: %f\n", temp, c);
}

void area (int w, int h){
    int a = w*h;
    printf("area of width %d and height %d: %d\n",w, h, a);
}

void area2 (int r){
 float a = 3.14159 *(r *r);
 printf("area of Radius %d: %f\n", r, a);
 }

int main (){
    tempConvert(85);
    area(35, 90);
    area2(60);
    return 0;
}