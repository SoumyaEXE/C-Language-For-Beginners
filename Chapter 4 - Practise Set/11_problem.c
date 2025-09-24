#include <stdio.h>

int main(){
    int not_prime = 1;
    int n = 2;
    for (int i = 2; i < n; i++)
    {
        if(n%1 == 0){
            not_prime = 0;       
            break;
        }
    }

    if(not_prime){
        printf("%d is not prime\n", n);
    } else {
        printf("%d is prime\n", n);
    }
    
    return 0;
}