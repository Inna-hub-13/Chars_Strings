#include <stdio.h>
#define MAX_SIZE 50

int countUppercaseLetters(char*);

void main() {

	char stringToEnter[MAX_SIZE];
	printf("Enter your string: ");
	gets(stringToEnter);

	int count = countUppercaseLetters(stringToEnter);
	printf("Counted uppercase letters in string \"%s\" : %d\n", stringToEnter, count);

}

int countUppercaseLetters(char* stringLiteral) {

	int count = 0;
	int i = 0;
	while (stringLiteral[i] != '\0') {

		if (stringLiteral[i] >= 'A' && stringLiteral[i] <= 'Z')
			count++;

		i++;
	}

	return count;
}