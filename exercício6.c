#include <stdio.h>
int main ()
{
int count, number, odd, even, average;
even = 0;
odd = 0;
count = 0;
while (count<10){
printf("enter a value: ");
scanf("%d", &number);
if (number%2 == 0) //verify the parity.
{
even = even + 1;
}
else {
odd = odd + number;
}
count = count + 1;}
if (even < 10){ //If we have 10 even numbers then the formula I will use for the average would collapse, as 10-even =0 we would have odd/0.
average = (odd/(10-even));
}
else {
average = 0;    
}
printf("the number of even values is: %d", even);
printf("the average of odd values is %d", average);

return 0;
}