#include <stdio.h>

// count digits, white space, others
int main() {
	int c, i, nwhite, nother;
	
	// declares `ndigit` to be an array of 10 integers
	// array always start at zero
	int ndigit[10];

	nwhite = nother = 0;
	for(i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while((c = getchar()) != EOF)
		// determines whether the character in c is a digit
		if(c >= '0' && c <= '9')
			// if it is, the numeric value of that digit is `c - '0'`
			++ndigit[c - '0'];
		// decision whether a character is a white space, or something else
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;

	printf("digits =");
	for(i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d\n", nwhite, nother);
}
