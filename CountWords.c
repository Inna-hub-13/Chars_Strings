#include <stdio.h>
#define MAX_SIZE 100

int countWords(char*);


void main() {

	char string[MAX_SIZE] = "Hot cake summer bomb";

	int count = countWords(string);

	printf("The number of words is: %d\n", count);

}

int countWords(char* string) {

	int count = 1;
	for (int i = 0; string[i] != '\0'; i++) {

		if (string[i] == ' ')
			count++;
	}

	return count;
}