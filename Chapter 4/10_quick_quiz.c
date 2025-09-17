//print natural numbers

#include <stdio.h>

int main(){
    int i, n;
    printf("Enter Nth Number: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("Natural Number To Nth Term Is: %d\n", i);
    }
    
    return 0;
}