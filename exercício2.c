#include <stdio.h>
int main ()
{
int age, birth;
printf("year of birth? ");
scanf("%d", &birth);
age = 2026-birth;
printf("your age is: %d\n", age);
}