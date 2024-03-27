// Single line comments start with // - only available in C99 and later.

/**
 * multi-line comments look like this.
 * They work in c89 as well
 */

/*
 * Multi-line comments don't nest /* Be careful */ // comment ends on this line...
*/ // not this one!

// Constants: #define <keyword>
// Constants are written in all caps out of convention, not requirement
#define DAYS_IN_YEAR 365

// Enumeration constants are also ways to declare constants.
// All statements must end with a semicolon
enum days {SUN, MON, TUE, WED, THU, FRI, SAT};
// SUN gets 0, MON gets 1, TUE gets 2, etc.

// Enumeration values can also be specified
enum days {SUN = 1, MON, TUE, WED = 99, THU, FRI, SAT};
// MON gets 2 automatically, TUE gets 3.
// WED gets 99, THU gets 100, FRI gets 101, etc.

// Import headers with #include
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// File names between <angle brackets> tell the compiler to look in your system
// libraries for the headers.
// For your own headers, use double quotes instead of angle brackets, and provide the
// path.
#include "my_header.h" // local file in the same directory
# include "../my_lib_header.h" // relative path

// Declare function signatures in advance in a .h file, or at the top of of your .c
// file. (Function Prototypes)
void function_1();
int function_2(void);

// At a minimum, you must declare a 'function prototype' before its use in any function.
// Normally, prototypes are placed at the top of a file before any function definition.
int add_two_ints(int x1, int x2); // function prototype
// although `int add_two_ints(int, int);` is also valid (non need to name the args),
// it is recommended to name arguments in the prototype as well for easier inspection
// Function prototypes are not necessary if the function definition comes before any
// other function that calls that function. However, it's standard proctice to always
// add the function prototype to a header file (*.h) and then #include that file at the
// top. This prevents any issues where function might be called before the compiler
// knows its existence, while also giving the developer a clean header file to share
// with the rest of the project.
// Your program's entry point is a function called "main". The return type can be
// anything, however most operating systems expect a return type of `int` for error code
// processing.
int main(void) {
	// your program
}

// The command line arguments used to run your program are also passed to the main
// function. argc (argument count) being the number of arguments - your program's name
// counts as 1 and argv (argument vector) is an array of character arrays - containing
// the arguments themselves.
// argv[0] = name of your program, argv[1] = first argument, etc.
int main(int argc, char **argv)
{
	// print output using printf, for "print formatted"
	// %d is an integer, \n is a newline
	printf("%d\n", 0); // => prints 0

	// take input using scanf
	// '&' is used to define the location
	// where we want to store the input value
	int input;
	scanf("%d", &input);

	////////////////////////////////////
	///Types
	////////////////////////////////////

	// Compilers that are not c99-compliant require that variables MUST be declared
	// at the top of the current block scope.
	// Compilers that ARE c99-compliant allow declarations near the point where the
	// value is used.
	// For the sake of the tutorial, variables are declared dynamically under
	// c99-compliant standards.

	// ints are usually 4 bytes (use the `sizeof` operator to check)
	int x_int = 0;

	// shorts are defined as the smallest addressable unit for a processor
	// This is usually 1 byte, but for some systems it can be more (ex. for TMS320
	// from TI it's 2 bytes).
	char x_char = 0;
	char y_char = 'y'; // Char literals are quoted with ''

	// longs are often 4 to 8 bytes; long longs are guaranteed to ba at least 8
	// bytes
	long x_long = 0;
	long long x_long_long = 0;

	// floats are usually 32-bit floating point numbers
	float x_float = 0.0f; // 'f' suffix here denotes floating point literal
	// doubles are usually 64-bit floating point numbers
	double x_double = 0.0; // real numbers without any suffix are doubles

	// integer types may be unsigned (greater than or equal to zero)
	unsigned short ux_short;
	unsigned int ux_int;
	unsigned long long ux_long_long;

	// Chars inside sigle quotes are integers in machine's character set.
	// '0'; // => 48 in the ASCII character set.
	// 'A'; // => 65 in the ASCII character set.

	// sizeof(T) gives you the size of a variable with type T in bytes
	// sizeof(obj) yields the size of the expression (variable, literal, etc)
	// If the argument of the `sizeof` operator is an expression, then its argument
	// is not evaluated (except VLAs (see below)).
	// The value it yields in this case is a compile-time constant.
	int a = 1;
	// size_t is an unsigned integer type of at least 2 bytes used to represent the
	// size of an object.
	size_t size = sizeof(a++); // a++ is not evaluated
	printf("sizeof(a++) = %zu where a = %d\n", size, a);
	// prints "sizeof(a++) = 4 where a = 1" (on a 32-bit architecture)

	// Arrays must be initialized with a concrete size.
	char my_char_array[20]; // This array occupies 1 ? 20 = 20 bytes
	int my_int_array[20]; // This array occupies 4 * 20 = 80 bytes
			      // (assuming 4-byte words)

	// You can initialize an array of twenty ints that all equal 0 thusly
	// All elements (if any) past the ones in the initializer are initialized to 0:
	int my_array[5] = {1, 2};
	// So my_array now has five elements, all but the first two which are 0:
	// [1, 2, 0, 0, 0]
	// NOTE that you get away without explicitly declaring the size of the array IF
	// you initialize the array on the same line:
	int my_array[] = {0};
	// NOTE that, when not declaring the size, the size of the array is the number
	// of elements in the initializer. With "{0}", my_array is now of size one: [0]
	// To evaluate the size of the array at run-time, divide its byte size by the
	// byte size of its element type:
	size_t my_array_size = sizeof(my_array) / sizeof/my_array[0]);
	// WARNING You should evaluate the size *before* you begin passing the array to
	// functions (see later discussion) because arrays get "downgraded" to raw
	// pointers when they are passed to functions (so the statement above will
	// produce the wrong result inside the function).

	// Indexing an array is like other languages -- or,
	// rather, other languages like C
	my_array[0]; // => 0

	// Arrays are mutable; it's just memory!
	my_array[1] = 2;
	printf("%d\n", my_array[1]); // => 2

	// In c99 (and as an optional feature in c11), variable-length arrays (VLAs) can
	// be declared as well. The size of such an array need not be a comile-time
	// constant
	printf("Enter the array size: "); // ask the user for an array size
	int array_size;
	fscanf(stdin, "%d", &array_size);
	int var_length_array[array_size]; // declare the VLA
	printf("sizeof array = %zu\n", sizeof var_length_array);

	return (0);

}
