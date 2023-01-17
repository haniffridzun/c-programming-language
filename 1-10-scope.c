#include <stdio.h>

// variables in `main`, such as `line`, `longest`, are private or local to `main`.
// because they are declared within `main`, no other function can have direct access to them.
// same with the variables in other functions; example, `i` in `getline` is unrelated to the `i` in `copy`.
// each local variable (automatic variables) in a function comes into existence only when the function is called,
// and disappears when the function is exited.
// because automatic variables come and go with function invocation, they do not retain their values from one call to next,
// and mut be explicitly set upon each entry. if they are not set, they will contain garbage.

#define MAXLINE 1000	// maximum input line length

int getline(void);	// to fetch the next line of input
void copy(void);	// save longest line when found it

// print the longest input line
int main() {
	int len;		// current line length
	extern int max;		// maximum length seen so far
	extern char longest[];	// longest line saved here

	max = 0;
	while((len = getline()) > 0)
		if(len > max) {
			max = len;
			copy();
		}
	if(max > 0)	// there was a line
		printf("%s", longest);
	return 0;
}

// getline: read a line into s, return length
int getline(void) {
	int c, i;
	extern char line[];

	for(i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if(c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

// copy: copy 'from' into 'to'; assume to is big enough
void copy(void) {
	int i;
	extern char line[], longest[];

	i = 0;
	while((longest[i] = line[i]) != '\0')
		++i;
}
