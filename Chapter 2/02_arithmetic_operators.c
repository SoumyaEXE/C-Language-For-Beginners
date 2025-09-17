#include <stdio.h>

int main(){
    int a = 14;
    int b = 7;
    int c = a + b;
    int d = a - b;
    int e = a * b;
    int f = a / b;
    int g = a % b;
    // Sum Of The Numbers
    printf("The Of A is %d and Value Of B is %d and Sum Of Both Numbers Are : %d\n", a,b,c);
    // Sub Of The Numbers
    printf("The Value Of A is %d and Value Of B is %d and Sub Of Both Numbers Are : %d\n", a,b,d);
    //Multiply Of The Numbers
    printf("The Value Of A is %d and Value Of B is %d and Multiply Of Both Numbers Are : %d\n", a,b,e);
    // Divison Of The Numbers 
    printf("The Value Of A is %d and Value Of B is %d and Sub Of Both Numbers Are : %d\n", a,b,f);
    // Modulus Of The Numbers
    printf("The Value Pf A is %d and Value Of B is %d and Modulus Of Both Is : %d", a,b,g);
    return 0;
}