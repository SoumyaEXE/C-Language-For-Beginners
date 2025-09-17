#include <stdio.h>

int main(){
    int m, m2, m3;
    printf("Enter Your Marks 1: \n");
        scanf("%d", &m);
    printf("Enter Your Marks 2: \n");
        scanf("%d", &m2);
    printf("Enter Your Marks 3: \n");
        scanf("%d", &m3);
    printf("So Marks 1 Is %d, Marks 2 Is %d, Marks 3 Is %d", m, m2, m3);

    if(m<33 || m2<33 || m3<33){
        printf("You're Failed, Because Of Lower Marks In Individual Subjects!\n");
    } else if ((m+m2+m3)/3 < 40) {
        printf("You're Failed, Because Of Lower Marks Average In Total Subjects!\n");
    } else {
        printf("You're Passed!\n");
    }
    return 0;
}