#include <stdio.h>

int main(){
    int i = 1;
    int sum = 0;
    do{
        sum += i;
        i++;
    }while(i <= 10);
    printf("The Sum Of First 10 Natural Numbers Is: %d",sum);
    return 0;
}