#include <stdio.h>
int main()
{
int price, quantity, debt;
printf("price of the product? \n");
scanf("%d", &price);
printf("quantity of the product? \n");
scanf("%d", &quantity);
debt = quantity * price;
printf("your debt is: %d", debt);

}
