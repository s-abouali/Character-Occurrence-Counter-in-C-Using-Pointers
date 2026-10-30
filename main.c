#include <stdio.h>

int CountCharacter(char *str, char c) {
    int count = 0;
    char *p = str;

    while(*p != '\0'){
        if(*p == c){
            count++;
        }
        p++;
    }
	return count;
}

int main(){
    char str[50], c;

    printf("Enter a string : ");
    gets(str);
	printf("Enter the character to search for: ");
    scanf(" %c", &c);
	printf("The character '%c' appears %d times.\n", c, CountCharacter(str, c));

    return 0;
}
