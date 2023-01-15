#include <stdio.h>

/* print Fahrenheit-Celcius table 
 * for fahr = 0, 20, ..., 300 */

int main() {
	// all `variables` must be declared before they are used
	// a declaration announces the properties of variables; consists of a name and list of variables
	// `int` means that the variables listed are integers
	int fahr, celsius;
	int lower, upper, step;

	// assignment statements set the variables to their initial values. individual statements are terminated by semicolons.
	lower = 0;	// lower limit of temperature scale
	upper = 300;	// upper limit
	step = 20;	// step size

	fahr = lower;
	// we use `while` loop to repeats once per output line
	// the condition in parentheses is tested
	// if it is true, the body of the loop is executed
	// then the condition is retested, and if true, the body is executed again
	// when the test becomes false, the loop ends, and execution continue at the statement that follows the loop
	while(fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		// `printf` is a general-purpose output formatting function.
		// its first argument is a string of characters to be printed,
		// with each `%` indicating where one of the other arguments is to be substitued, and in what form it is to be printed.
		// `%d` specifies an integer argument
		// they must match up properly by position and type, or you will get wrong answers.
		// `scanf` is like `printf`, except that it reads input instead of writing output.
		printf("%d\t%d\n", fahr, celsius);	// `\t` is an escape character, to space tab the line
		
		fahr = fahr + step;
	}
}
// output:
// 0	-17
// 20	-6
// 40	4
// 60	15
//
//
// augment each `%d` with a width, the numbers printed will be right-justified in their fields
// `printf("%3d %6d," fahr, celsius);
// output:
//  0   -17
// 20    -6
// 40    -4
// 60    15
