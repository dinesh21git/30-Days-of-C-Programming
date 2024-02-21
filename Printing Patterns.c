#include <stdio.h>
#include <stdlib.h>

/*

int main() {
    int n;
    scanf("%d",&n);

    for (int i = 1; i <= n;i++) {
        for (int j = 1; j <= i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    

    return 0;
}

*/

/*

int main() {

    
    int n = 5;
    int start = 1;
    scanf("%d",&n);

    for (int row = 1 ; row <= n ; row++) {
        for (int col = 1 ; col <= n;col++) {
            printf("%d ",start);
            start++;
        }
        printf("\n");
    }


    return 0;
}

*/

/*

int main() {
    int n;
    scanf("%d",&n);

    for (int i = 0; i <= n; i++) {
        for(int j = 0; j <= n - i;j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

*/

/*
int main() {
    int n;
    scanf("%d",&n);

    for (int rows = 1; rows <= n; rows++) {
        for (int spaces = 0; spaces < n - rows;spaces++) {
            printf(" ");
        }
        for (int col = 1; col <= 2 * rows - 1;col++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

*/

/*
int main() {
    int n;
    scanf("%d",&n);

    for (int row = 1; row <= n; row++) {
        for (int col = 1 ; col <= row;col++){
            printf("%d ",row*col);
        }
        printf("\n");
    }
    return 0;
}
*/

