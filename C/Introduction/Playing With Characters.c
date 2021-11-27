#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char character;
    scanf("%c", &character);
    
    char string[100];
    scanf("%s", string);
    
    char sentences[100];
    scanf(" %[^\n]%*c", sentences);
    
    
    printf ("%c\n", character);
    printf("%s\n", string);
    printf("%s", sentences);

    
    return 0;
}