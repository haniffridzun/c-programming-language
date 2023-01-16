#include <stdio.h>

int main() {
	long nc;
	// character counting program accumulates its count in `long` variable instead of an `int`
	// `long` integers are at least 32 bits. it will take more input to overflow an `long` counter.
	// it may be possible to cope with bigger numbers by using a `double`

	nc = 0;
	while(getchar() != EOF)
		++nc;
		// ++ means increment by 1, -- means decrement by 1
		// we could write `nc = nc + 1`
	printf("%ld\n", nc);
	// `%ld` tells `printf` that the corresponding argument is a `long` integer
}


// using `for` loop with `double` variable
//
// double nc;
// for(nc = 0; getchar() != EOF; ++nc)
// 	;
// printf("%.0f\n", nc);
//
// `printf` uses `%f` for both `float` and `double`
// `%.0f` suppresses the printing of the decimal point and the fraction part, which is zero.
// the body of this `for` loop is empty, because all the work is done in the test and increment parts.
// but the grammatical rules of C require that a `for` statement have a body.
// the isolated semicolon, called a `nulled statement`, to satisfy that requirement.
// we put it on a separate line to make it visible.
