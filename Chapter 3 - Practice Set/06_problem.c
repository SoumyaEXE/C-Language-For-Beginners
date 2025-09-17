#include <stdio.h>

int main(){
    int a, b , c, d;
    printf("Enter A Number: ");
    scanf("%d", &a);
    printf("Enter B Number: ");
    scanf("%d", &b);
    printf("Enter C Number: ");
    scanf("%d", &c);
    printf("Enter D Number: ");
    scanf("%d", &d);

    if(a>b && a > c && a > d){
        printf("A Is Greatest");
    } else if (b > a && b > c && b > d) {
        printf("B Is Greatest");
    } else if (c > a && c > b && c > d) {
        printf("C Is Greatest");
    } else {
        printf("D Is Greatest");
    }
    return 0;
}