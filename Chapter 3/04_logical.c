#include <stdio.h>

int main(){
    int a = 1, b = 1;
    printf("The Value Of a and b is %d\n", a&&b);
    printf("The Value Of a or b is %d\n", a||b);
    printf("The Value Of not(a) is %d\n", !a);

    if (a && b) {
        printf("Both are True\n");
    }
    // is same as writting

    if(a){
        if(b){
            printf("Both Are True!\n");
        }  
    }
    return 0;
}