#include <stdio.h>

// text input/output, regardless of where it originates or where it goes to, is dealt with as streams of characters.
// a text stream is a sequence of characters divided into lines; 
// each line consists of zero or more characters followed by a newline character.
// it is the responsibility of the library to make each input/output stream confirm this model.

// copy input to output; 1st version
int main() {
	// we must declare `c` to be a type big enough to hold any value that `getchar` returns.
	// we can't use `char` since `c` must big enough to hold `EOF` in addition to any possible `char`.
	// therefore we use `int`
	int c;

	// `getchar` reads the next input character from a text stream and returns that as its value.
	c = getchar();

	// what appears to be a character on the keyboard or screen is of course, stored internally just as a bit pattern.
	// the type `char` is specifically meant for storing such character data, but any integer type can be used.
	// `getchar` returns a distinctive value when there is no more input, a value that cannot be confused with any real character.
	// this value is called `EOF`, for `end of file`
	// `EOF` is an integer defined in `<stdio.h>`, using the symbolic constant.
	// in terminal, use CTRL-D to provoke an `EOF`, after all the input has been read, the loop will terminate.

	while(c != EOF) {
		// `putchar` prints a character each time it is called.
		putchar(c);
		c = getchar();
	}
}
