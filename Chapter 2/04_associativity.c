#include <stdio.h>

int main(){
    int a = 3;
    int b = 6;
    int c = 9;

    printf("The Value is %d ", a*b/c + 7);
    printf("The Value is %d", 3*b/2*c + 7*a);
    // Solving An Sum Is C Based On Priority!
    // 3*b/2*c + 7*a
    // 3*b/2*c + 7*3
    // 3*b/2*c + 21
    // 3*6/2*c + 21
    // 18/2*c + 21
    // 9*c + 21
    // 9*9 + 21
    // 81 + 21
    // 102
    return 0;
}