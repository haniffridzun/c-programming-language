#include <stdio.h>

/* 	while (there's another line)
 * 		if (it's longer than the previous longest)
 * 			save it
 * 			save its length
 * 	print longest line
 */

#define MAXLINE 1000	// maximum input line length

int getline(char line[], int maxline);	// to fetch the next line of input
void copy(char to[], char from[]);	// save longest line when found it

// print the longest input line
int main() {
	int len;		// current line length
	int max;		// maximum length seen so far
	char line[MAXLINE];	// current input line
	char longest[MAXLINE];	// longest line saved here

	max = 0;
	while((len = getline(line, MAXLINE)) > 0)
		if(len > max) {
			max = len;
			copy(longest, line);
		}
	if(max > 0)	// there was a line
		printf("%s", longest);
	return 0;
}

// the functions `getline` and `copy` are declared at the beginning of the program,
// which we assume is contained in one file.
// `main` and `getline` communicate through a pair of arguments and a returned value.

// getline: read a line into s, return length
int getline(char s[], int lim) {
	int c, i;
	
	for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if(c == '\n') {
		s[i] = c;
		++i;
	}
	// puts null character `'\0'` at the end of the array it is creating,
	// to mark the end of the string of characters
	// E.g., character arrays: [h], [e], [l], [l], [o], [\n], [\0]
	s[i] = '\0';
	return i;
}

// some functions return a useful value; others, like `copy`, are used only for their effect and return no value.
// the return type of `copy` is `void`, which states explicitly that no value is returned.

// copy: copy 'from' into 'to'; assume to is big enough
void copy(char to[], char from[]) {
	int i;

	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
