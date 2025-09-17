#include <stdio.h>

int main(){
    int a;
    printf("Enter A Value Between 1 To 7: ");
    scanf("%d", &a);
    
    switch(a) {
        case 1:
        printf("You Have Entered 1\n");
        break;  
        case 2:
        printf("You Have Entered 2\n"); 
        break; 
        case 3:
        printf("You Have Entered 3\n");
        break;  
        case 4:
        printf("You Have Entered 4\n");
        break; 
        case 5:
        printf("You Have Entered 5\n");
        break;  
        case 6:
        printf("You Have Entered, Negga\n");
        break;  
        case 7:
        printf("You Have Entered, GOATED Number\n");
        break;
        default:
        printf("Enter Between 1 To 7!, Invalid Input\n");   
    }
    return 0;
}