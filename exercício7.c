#include <stdio.h>
int main ()
{
float max, min, number, same;
int count;
count = 0;
while(count < 30) {
printf("enter a value:");
scanf("%f", &number);
if (count == 0)
{ 
    max = number;
    min = number;
}
else if (number > max)
{
 max = number;
}
else if (number < min)
{
min = number;
}
else if (number==max || number==min)
{
same = number;
}
count = count + 1;
}
printf("The smallest result is: %f", min);
printf("The largest result is: %f", max);

return 0;

}