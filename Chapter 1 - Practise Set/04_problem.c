#include <stdio.h>

int main(){
    int p, r, t;
    float i;

    printf("Enter Value Of Principal: ");
    scanf("%d",&p);

    printf("Enter Value Of Rate: ");
    scanf("%d",&r);

    printf("Enter Value Of Time(Years): ");
    scanf("%d",&t);

    i = (p * r * t)/100.0;

    printf("The Simple Interest Amount Is: %.2f", i);

    return 0;
}