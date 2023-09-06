
#include <stdio.h>
#include <string.h>

int main() {
	char first[20];
	char second[20];

	printf("Enter a word: ");

	scanf("%s", first);

	printf("Array begins @: %p", first);

	printf("")

	for (int i = 0; i < strlen(first); i++) {
		printf("Index %d is %c\n", i, first[i]);
	}
}
