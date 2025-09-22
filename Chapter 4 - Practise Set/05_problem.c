#include <stdio.h>

int main(){
    int i = 1;
    int sum = 0;
    while(i <= 10){
        sum += i;
        i++;
    }
    printf("The Sum Of First 10 Natural Numbers Is: %d",sum);
    return 0;
}