#include <stdio.h>

int main(){

    int i = 10;
    int j = i;
    int a = 2, b = 3, c = 4, d = 6, r = 7;
    printf("The Value Of I is %d, and Value Of J is %d\n", i,j);
    // %d is called format specifier
    // %d is for int, %f is for float, %c is for char
    printf("The Value Of a is %d, and Value Of b is %d\n", a,b);
    printf("The Value Of c is %d, and Value Of d is %d\n", c,d);
    printf("The Value Of r is %d\n", r);
   
    int j1 = a + j - i;
    printf("The Value Of j1 is %d", j1);

    // int a, b, c, d;
    // int a = b = c = d = 20;

    return 0;
}