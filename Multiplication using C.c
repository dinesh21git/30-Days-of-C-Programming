#include <stdio.h>

int main () {
     int num;
     printf("Enter an number: ");
     scanf("%d",&num);
     
     for(int i = 1; i <= num ; i++) {
         printf("%d x %d = %d \n",num,i,num*i);
     }
    
    
    return 0;
}
