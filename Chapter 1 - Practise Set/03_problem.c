#include <stdio.h>

int main(){
    float c, f;

    printf("Enter The Value In Celcius: ");
    scanf("%f", &c); //Must Remember Always Enter Amp; In scanf!!

    f = ((9.0/5)*c) + 32;

    printf("The Temparature In Fahrenheit Is: %f", f);
    return 0;
}