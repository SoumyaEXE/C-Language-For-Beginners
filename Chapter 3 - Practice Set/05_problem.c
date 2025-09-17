#include <stdio.h>

int main(){
    char ch;
    printf("Enter A Character: ");
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122) {
        printf("The Character Is LowerCase.\n");
    } else {
        printf("The Character Is NOT LowerCase\n");
    }
    return 0;
}