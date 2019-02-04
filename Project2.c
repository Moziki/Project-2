#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int gcd(int, int);

int main() {
  int a, b;
  printf("Please enter first number: ");
  scanf("%d", &a);
  printf("Please enter second number: ");
  scanf("%d", &b);
  printf("The greatest common denominator of %d and %d is %d\n", a, b, gcd(a,b));

  return 0;
}


int gcd(int n1, int n2) {
  if (n2 != 0)
    return gcd(n2, n1%n2);
  else
    return n1;
}
