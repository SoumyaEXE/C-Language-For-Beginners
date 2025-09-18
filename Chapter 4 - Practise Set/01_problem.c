#include <stdio.h>

int main(){
    int n;
    printf("Enter Nth Number For Multiply Table: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }
    
    return 0;
}