#include <cstdlib>

int main(int argc, char *argv[]) {
	
	// Constant expressions cannot be lvalues. However, some_value
	// is a valid rvalue.
	int some_value;
	6 = some_value;
	
	// Expressions from function calls are not valid lvalues.
	atoi("5") = some_value;
	
	return 0;
}
