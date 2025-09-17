#include <stdio.h>

int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year%4 == 0) {
        printf("This Is A Leap Year!");
    } else if (year%100 != 0) {
        printf("This Is NOT A Leap Year!");
    } 
    return 0;
}