#include <stdio.h>


char toUppercase(char);

void main() {

	char letter = 'l', uppercaseLetter;


	uppercaseLetter = toUppercase(letter);

	printf("Lowercase letter %c, uppercase letter %c\n", letter, uppercaseLetter);
}


char toUppercase(char letter) {

	return (char)(letter - 32);
}