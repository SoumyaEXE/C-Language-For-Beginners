#include <stdio.h>

int main(){
    int age;
    printf("Enter Your Age Negro : ");
    scanf("%d", &age);
    if (age > 99) {
        printf("See You In Heaven!");
    } 
    else if (age > 70) {
        printf("You Cannot Drive");
    } 
    else if (age == 18) {
        printf("Congo Negro! You Got Your License!");
    } 
    else if (age >= 18) {
        printf("Horray! You Can Drive!");
    }
    else {
        printf("You're Cooked!");
    }
    return 0;
}