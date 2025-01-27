#include <stdio.h>
void area2 (int r){
 float a = 3.14159 *(r *r);
 printf("area of Radius %d: %f\n", r, a);
 }

int main (){
    area2(60);
    return 0;
}