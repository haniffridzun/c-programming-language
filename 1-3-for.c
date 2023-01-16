#include <stdio.h>

int main() {
	int fahr;

	// `for` statement is a loop, a generalization of the `while`
	// there are 3 parts, separated by semicolons
	// first part - the initialization is done once, before the loop is entered
	// second part - test or condition that controls the loop. if it is true, the loop is executed.
	// third part - increment step is executed and the condition re-evaluated
	// the loop terminates if the condition has become false.
	for(fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}
