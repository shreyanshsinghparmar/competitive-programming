// Given N(<=26) followed by N distinct characters, we can find all possible 2^N words(sequence of characters) which preserve the ordering in the input (assuming that all words are valid words in the language). For example, if N is 3 and characters are A, B and C, the words in the alphabet order are A, AB, ABC, AC, B, BC and C. Your task now, is to find the index of the word in the dictionary. i.e., if input is AC, output is 4. You may avoid generating all the words and comparing the word with every word in the dictionary.

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	char input_chars[n];
	int i;
	for(i = 0; i < n; ++i) scanf(" %c", &input_chars[i]);

	char input[100];
	scanf("%s", input);

	int j;
	int words[n];
	for(i = 0, j = n - 1; i < n; ++i, --j)
		words[i] = (1 << j);

	int position = 0;
	for(i = 0, j = 0; input[i]; ++i) {
		while(input_chars[j] != input[i]) {
			position += words[j];
			++j;
		}
		++j;
		++position;
	}
	printf("%d\n", position);

	return 0;
}
