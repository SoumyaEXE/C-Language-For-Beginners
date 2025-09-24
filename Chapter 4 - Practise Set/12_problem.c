#include <stdio.h>

int main(){
    int n = 12; // Will Check This Number
    int i = 2; // Starting Divisor Number
    int not_prime = 0; // Assume Prime

    if(n <= 1){
        not_prime = 1; // 0 and 1 are not prime
    } else {
        do {
        if (n%i == 0){
            not_prime = 1; 
            break;
        } 
        i++;
    } while (i<n);
} 

if (not_prime){
    printf("%d is not prime\n", n);
} else {
    printf("%d is prime", n);
}
    return 0;
}