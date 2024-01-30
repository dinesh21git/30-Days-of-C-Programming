#include <stdio.h>
#include <stdbool.h>

int main()
{
  int i , n;
  bool is_prime = true;
  
  n = 9;
  
  if (n == 0 && n == 1) {
      is_prime = false;
  }
  
  for (i = 2; i <= n/2; i++){
       if (n % i == 0) {
           is_prime = false;
           break;
       }
  }
  
  if (is_prime) {
      printf("%d is prime",n);
  }else {
      printf("%d is not a prime",n);
  }
    return 0;
}
