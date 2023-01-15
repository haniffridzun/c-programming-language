#include <stdio.h>

/* print Fahrenheit-Celcius table 
 * for fahr = 0, 20, ..., 300; floating-point version */

void main() {
	// all `variables` must be declared before they are used
	// a declaration announces the properties of variables; consists of a name and list of variables
	// `float` means floating point - numbers that may have a fractional part.
	// 32-bit quantity, with atleast 6 significant digits and magnitude between 10^-38 and 10^38
	// `char` means character - a single byte
	// `short` means short integer
	// `long` means long integer
	// `double` means double-precision floating point
	float fahr, celsius;
	float lower, upper, step;

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
		// we were unable to use 5/9 in the previous version because integer division would truncate it to zero.
		// a decimal point in a constant indicates that it is floating point,
		// however, 5.0/9.0 is not truncated because it is the ratio of two floating-point values.
		// if an arithmetic operator has one floating-point operand and one integer operand, however,
		// the integer will be converted to floating point beofre the operation is done.
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		// conversion specification `%3.0f` says that a floating-point number is to be printed at least 3 characters wide,
		// with no decimal point and no fraction digits.
		// `%6.1f` describes that is to be printed at least 6 characters wide, with 1 digit after the decimal point.
		fahr = fahr + step;
	}
}
// output:
//  0  -17.8
// 20	-6.7
// 40 	 4.4
// 60	15.6
//
//
// `%d`    print as decimal integer
// `%6d`   print as decimal integer, at least 6 characters wide
// `%f`    print as floating point
// `%6f`   print as floating point, at least 6 characters wide
// `%.2f`  print as floating point, 2 characters after decimal point
// `%6.2f` print as floating point, at least 6 characters wide and 2 characters after decimal point
