#include <stdio.h>

int power(int m, int n);

int main() {
	int i;
	for(i = 0; i < 10; ++i)
		printf("%d %3d %6d\n", i, power(2,i), power(-3, i));
	return 0;
}

// in C, all function arguments are passed by value.
// this means that the called function is given the values of its arguemnts in temporary variables rather than the originals.
// the parameter `n` is used as a temporary variables; there is no longer a need for the variable `i`.
// whatever is done to `n` inside `power` has no effect on the argument that `power` was originally called with.
int power(int base, int n) {
	int p;

	for(p = 1; n  > 0; --n)
		p = p * base;
	return p;
}


// the story is different for arrays
// when the name of an array is used as an argument, the value passed to the function is the location or address
// of the array - there is no copying of array elements.
