// Write a program to find grade of a student via basis on marks
#include <stdio.h>

int main(){
    char grade;
    int marks;
    printf("Enter Your Marks: ");
    scanf("%d", &marks);

    if(marks <=100 && marks >= 90){
        printf("Grade A");
    } else if(marks <=90 && marks >= 80){
        printf("Grade B");
    } else if(marks <=80 && marks >= 70){
        printf("Grade C");
    } else if(marks <=70 && marks >= 60){
        printf("Grade D");
    } else if(marks <=60 && marks >= 50){
        printf("Grade E");
    } else {
        printf("Youre Failed, Never Give Up!");
    }
    return 0;
}