#include <stdio.h>
int main (){

 int N1, Fatorial, count, loop, original;
 loop = 0;

 while (loop == 0){ 
 count = 1;
  printf("write a number: ");
   scanf("%d", &N1);
   original = N1;
   while (original - count != 0){
    N1 = N1 * count;
    count = count + 1;
   }
   printf("seu fatorial é: %d", N1);
return 0;

 }
}