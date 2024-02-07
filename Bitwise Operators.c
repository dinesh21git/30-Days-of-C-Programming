#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int BitwiseAND = 0;
  int BitwiseOR = 0;
  int BitwiseXOR = 0;
  int  temp;
   
  
  for (int i = 1; i <=n;i++) {
     for (int j = i+1;j <= n;j++) {
     temp =i & j;
     if(temp > BitwiseAND && temp < k) {
         BitwiseAND =temp;
     }
     temp = i | j;
     if(temp > BitwiseOR && temp < k) {
         BitwiseOR =temp;
     }
     temp = i ^ j;
     if(temp > BitwiseXOR && temp < k) {
         BitwiseXOR =temp;
     }
     }
      }
      printf("%d\n%d\n%d",BitwiseAND,BitwiseOR,BitwiseXOR);
  }
  


int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
