#include <stdio.h>
int main ()
{
float x, y, n1, n2, sum;
int count;
count = 0;
while(count < 20) {
printf("\nenter a value: \n");
scanf("%f", &n1);
printf("enter another value: \n");
scanf("%f", &n2);
if (n1>n2)
{
 x = n1, y = n2;
 sum = (x+y) * (x-y+1)/2; //calculate the sum of the numbers between x and y.
 printf("your sum is: \n%f\n", sum);
}
else if (n1 < n2)
{
 x = n2, y = n1;
 sum = ((x+y) * (x-y+1)/2);
 printf("\nyour sum is: \n%f\n", sum);
}
else if (n2 = n1);
{
  x = n2;
  y = n1;
  sum = x;
  printf("\n%f\n", x);
}
count = count + 1;
}
return 0;

}