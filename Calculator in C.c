#include <stdio.h>

int main()
{
    int num ,num2 , result;
    char operation;
    
    printf("Number 1: ");
    scanf("%d", &num);
    
    printf("Number 2: ");
    scanf("%d", &num2);
    
    printf("Enter the operation you want to perform (+, -, *, /): ");
    scanf(" %c", &operation);
    
    if (operation == '+') {
        result = num + num2;
    } else if (operation == '-') {
        result = num - num2;
    } else if (operation == '*') {
        result = num * num2;
    } else if (operation == '/') {
        if (num2 != 0) {
            result = num / num2;
        } else {
            printf("Error!");
        }
    }else {
        printf("Please enter vaild operation: ");
    }
    
    printf("%d",result);

    return 0;
}
