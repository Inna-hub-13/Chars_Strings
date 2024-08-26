#include <stdio.h>
#define MAX_SIZE 50

void printLetters(char*);

void main() {

	char string1[MAX_SIZE] = "He09dkL:'dfjfm@";
	char string2[MAX_SIZE];

	printf("Enter string: ");
	gets(string2);

	printLetters(string1);
	printLetters(string2);
}


void printLetters(char* string) {

	for (int i = 0; string[i] != '\0'; i++) {

		if (string[i] >= 'A' && string[i] <= 'Z'
			|| string[i] >= 'a' && string[i] <= 'z')
			printf("%c", string[i]);

		else
			printf("@");
	}

	printf("\n");
}