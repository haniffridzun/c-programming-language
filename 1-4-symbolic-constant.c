#include <stdio.h>

// it's bad practice to bury magic numbers like 300 and 20 in a program
// they convey little information to someone who might have to read the program later
// one way to deal with magic numbers is to give them a meaningful names
// `#define name REPLACEMENT` line defines a symbolic name or constant to be a particular string of characters

#define LOWER	0 	// lower limit of table
#define UPPER	300	// upper limit
#define STEP	20	// step size

// symbolic constants are not variables, so they do not appear in declarations
// notice that there is no semicolon at the end of a `#define` line

int main() {
	int fahr;

	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}
