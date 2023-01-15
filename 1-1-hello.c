// every C programm consists of `functions` and `variables`.
// `function` contains `statements` that specify the computing operations to be done
// `variable` store values used during the computation.

// tells the compiler to include information about standard input/output library 
#include <stdio.h>

// we can give functions whatever names but `main` function is special.
// C program begins executing at the beginning of main.
// this means that every program must have ONE `main` somewhere.
int main()
// one method of communicating data between functions is for calling function to provide a list of values, called `arguments`.
// in this example, `main` is defined to be a function that expects no arguments / empty list `()`.
{
	// main calls standard input/output library - function `printf` to print this sequece of characters
	printf("hello, world\n"); 
	// sequence of characters in double quotes, is called a character string or string constant.
	// `\n` - escape characters, represents the newline character
} // statements of main are enclosed in braces

// compile C program using `cc` command in terminal
// example: `cc hello.c`
// it will make an executable file called: `a.out`
// if you run `./a.out` in terminal, it will print `hello, world`
