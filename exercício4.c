#include <stdio.h>
int main ()
{
int a, b, value;
printf("enter a value: \n");
scanf("%d", &a);
printf("enter a value: \n");
scanf("%d", &b);
if (a>b) {
    value = a + b;
printf("your value is: %d\n", value);
}
else if (a<b) {
    value = b - a;
    printf("your value is: %d\n", value);
}
else {
value = a*a;
printf("your value is: %d", value);
}

}