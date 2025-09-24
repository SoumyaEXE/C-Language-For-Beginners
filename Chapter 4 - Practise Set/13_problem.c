#include <stdio.h>

int main(){
    int n; // Will Check This Number
    int i = 2; // Starting Divisor Number
    int not_prime = 0; // Assume Prime

 printf("Enter a number: ");
 scanf("%d", &n);

if(n <= 1){
    not_prime = 1; // 0 and 1 are not prime
} else {
    while(i<n){
        if(n % i == 0){
            not_prime = 1;
            break;
        }
        i++;
    }
}

 if (not_prime){
    printf("%d is not prime\n", n);
} else {
    printf("%d is prime", n);
}
    return 0;
}