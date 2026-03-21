#include <stdio.h> 
int main ()
{
int N1, count, result, A, loop;
loop = 0;
while (loop == 0)
{
    count = 0;
A = 1;
printf("type a value: ");
scanf("%d", &N1);
if (N1%2 == 0)
{
    result = N1*N1;
    printf("your result is: %d\n", result);
}  
else 
{

    while (N1 > 0)
    {
        N1 = N1 - A;
        A = A + 2;
        count = count + 1;
    }

    if (N1 == 0)
        printf("the square root is: %d\n", count);
    else
    count = count -1;
        printf("the approximate integer square root is: %d\n", count);

    
}
}
return 0;
}