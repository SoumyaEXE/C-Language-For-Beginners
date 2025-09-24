#include <stdio.h>

int main(){
    int prime = 1;
    int n = 13;
    for (int i = 2; i < n; i++)
    {
        if(n%1 == 0){
            prime = 0;       
            break;
        }
    }

    if(prime){
        printf("%d is not prime\n", n);
    } else {
        printf("%d is prime\n", n);
    }
    
    return 0;
}