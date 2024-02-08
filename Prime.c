#include <stdio.h>
#include <stdbool.h>

int main() {
  int n;
  bool is_prime = true;

  scanf("%d",&n);

  if (n == 0 || n == 1) {
    is_prime = false;
  }
  for (int i = 2;i * i <= n;i++) {
    if (n % i == 0) {
    is_prime = false;
    }
  }

  if (is_prime == true) {
    printf("%d\n is Prime",n);
  } else printf("%d is not an Prime",n);

  return 0;
}
