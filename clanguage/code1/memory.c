#include<stdio.h>
int main(){
    int a=42; // a=1420, 42
    int* b=&a;
    printf("%d \t %p \n",a,b);
    return 0;

}
// int weight=72;
// int* location=&weight;
// print("%p",location);