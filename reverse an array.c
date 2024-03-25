#include <stdio.h>

void reverse(int arr[],int length);

int main() {

   int length;
   scanf("%d",&length);

   int array[length];

   for (int i = 0 ; i < length ; i++) {
      scanf("%d",&array[i]);
   }

   reverse(array,length);

   return 0;
}

void reverse(int arr[],int length) {
      for (int i = 0 ; i < length / 2 ; i++) {
      int temp = arr[i];
      arr[i] = arr[length - i - 1];
      arr[length - i - 1] = temp;
   }

   for (int i = 0 ; i < length;i++) {
      printf("%d\n",arr[i]);
   }
}
