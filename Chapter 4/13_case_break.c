#include <stdio.h>

int main(){
    for(int i = 0; i < 15; i++){  
        if(i==7){
            // break; // Exit The Loop.
            // continue; // Skip The Iteration, For Example : 7 Will Not Print In The Output.
        }
        printf("Value Of I is: %d\n", i);
    }

    printf("For Loop Is Done!");

    return 0;
}