#include <stdio.h>
int main ()
{
float value;
printf("What is the value of your purchase? ");
scanf("%f", &value);

if (value >= 100 && value <= 200) {
    value = value - value*0.05;
    printf("Your total is: %f", value);
}
else if (value > 200 && value <= 300){
    value = value - value*0.10;
    printf("Your total is: %f", value);
}
else {
    value = value - value*0.15;
    printf("Your total is: %f", value);
}
    }