#include <stdio.h>
int main(){
    
    // int length = 4; 
    // int breadth = 6;
   
    int length, breadth;

    printf("Enter The Value Of Length: "); // User Input Of Values
    scanf("%d", &length);

    printf("Enter The Value Of Breadth: ");
    scanf("%d", &breadth);

    printf("Total Area Is : %d", length*breadth);
    return 0;
}