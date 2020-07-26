#include<stdio.h>

int addDigit(int num) {

   if (num <= 0) {

     return 0;

   }

   return ( num % 10) + addDigit( num / 10);
}

int main(void) {

  int n, result;

  printf ("Enter a number : \n");
  scanf ("%d", &n);

  result = addDigit(n);

  printf("Sum of digits of a number is %d",result);

  return 0;
}
