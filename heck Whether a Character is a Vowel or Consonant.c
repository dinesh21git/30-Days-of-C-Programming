#include <stdio.h>
#include <ctype.h>

int main() {
    
    char input;
    char lowerCase,upperCase;
    
    printf("Enter an alphabet: ");
    scanf("%c",&input);
    
    lowerCase = (input =='a'||input =='e'||input =='i'||input =='o'||input =='u');
    upperCase = (input == 'A'||input =='E'||input =='I'||input =='O'||input =='U');
    
    if  (!isalpha(input))
        printf("Non alphabet letter");
    else if ( lowerCase || upperCase)
        printf ("%c,is an vowel",input);
     else 
        printf("%c is an consonant",input);
    
    return 0;
}
