#include <stdio.h>

int main(){
    int i = 5; // 5
    printf("The Value Of I Is %d\n", i);
    
    i = i + 5; // 10
    printf("The Value Of I Is %d\n", i);
    
    i++; // i = i + 1
    printf("The Value Of I Is %d\n", i++); // I is increased by 1
    
    printf("The Value Of I Is %d\n", i);
    
    printf("The Value Of I Is %d\n", ++i);

    i--;
    printf("The Value Of I Is %d\n", i); // I is decreased by 1

    i += 2; //Same as i = i + 2
    printf("The Value Of I Is %d\n", i); // I Value is increased by 2
 
    return 0;
}