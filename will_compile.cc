#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	
	int rval;
	int lval;
	
	// Even though rval is uninitialized, it is still an rvalue so
	// this will compile.
	lval = rval;
	cout << lval << endl;
	
	// Here, rval is assigned using a constant rvalue (ironically, as
	// as an lvalue), and then acts as an rvalue again.
	rval = 6;
	lval = rval;
	cout << lval << endl;
	
	// Functions that return the same type as the lvalue are valid rvalues.
	lval = atoi("5");
	cout << lval << endl;
	
	// The principles of lvalues and rvalues don't change with pointers.
	int *lval_ptr = &rval;
	cout << lval_ptr << endl;
	
	return 0;
}
