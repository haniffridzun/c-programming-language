#include <stdio.h>

// count lines in input
int main() {
	int c, nl;

	nl = 0;
	while((c = getchar()) != EOF)
		// `==` is the C notation for 'is equal to'
		// this is used to distinguish the equality test from the single `=` that uses for assignment.
		// character written between single quotes represents an integer value equal to the numerical value
		// of the character in the machine's character set. this is called a character constant
		// E.g., 'A' is a character constant; in the ASCII character set its value is 65
		// so '\n' stands for the value of the newline character, which is 10 in ASCII
		if(c == '\n')	
			++nl;
	printf("%d\n", nl);
}
