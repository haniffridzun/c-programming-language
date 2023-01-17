#include <stdio.h>

// function provides a convenient way to encapsulate some computation,
// which can be used without worrying about its implementation.
// so far we have used only functions like `printf`, `getchar` and `putchar`

// illustrate the mechanics of function definition by writing a function `power(m, n)`

// function prototype - before `main` says that `power` is a function that expects two `int` arguments and returns an `int`.
// it has to agree with the defintion and uses of `power`. it is an error if the definition of function or any uses of it
// do not agree with its prototype.
int power(int m, int n);
// parameter names are optional in a function prototype. we could have written `int power(int, int);`

// test power function
int main() {
	int i;
	for(i = 0; i < 10; ++i)
		printf("%d %3d %6d\n", i, power(2,i), power(-3, i));
	return 0;
	// return value of 0 implies a normal termination
	// non-zero values signal unusual/erroneous termination condition.
	// in the interests of simplicity, we have omitted `return` statements from our `main` functions up to this point,
	// but we will include them hereafter
}

// function definition has this form:
// `return-type` `function-name(parameter declarations, ...)`
// declares the parameter types and names, and the type of the result that the function returns
// the names used by `power` for its parameters are local to `power`,
// and are not visible to any other function: other routines can use the same names without conflict.
// this is also true of the variabels `i` and `p`: the `i` in `power` is unrelated to the `i` in `main`
int power(int base, int n) {
	int i, p;

	p = 1;
	for(i = 1; i <= n; ++i)
		p = p * base;
	return p;
	// the value that `power` computes is returned to `main` by the `return`
}


// function definitions can appear in any order, and in one source file or several,
// although no function can be split between files.
