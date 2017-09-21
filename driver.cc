#include "Collection.h"

int main(int argc, char *argv[]) {
	
	// Testing Collection with doubles
	Collection<double> c1;
	c1.printDetails();
	c1.makeEmpty();	// Making sure we can call makeEmpty on empty Collection
	c1.printDetails();
	c1.insert(0.0);
	c1.insert(1.1);
	c1.insert(2.2);
	c1.insert(3.3);
	c1.insert(4.4);
	c1.insert(5.5);
	c1.printDetails();
	c1.removeRandom();	// Prints random index for debug
	c1.printDetails();
	if (c1.notContained(0.0)) c1.insert(0.0);
	if (!c1.notContained(4.4)) c1.remove(4.4);
	c1.printDetails();	// All elements should have stayed in the order of placement,
						// there should be 0.0 somewhere and there should be no 4.4 anywhere
	
	// Another test with another datatype and more functions
	Collection<const char *> c2(5);
	c2.insert("Hello world!");
	c2.insert("How ya doing today?");
	c2.insert("Lovely day isn't it?");
	c2.printDetails();
	if (!c2.isEmpty()) c2.makeEmpty();
	c2.printDetails();
	c2.insert("Yet another string here...");
	c2.insert("Howdy world!");
	if (c2.notContained("Howdy world!")) c2.insert("Howdy world!");	// We only want one
	c2.printDetails();
	c2.remove("Yet another string here...");	// This should disappear
	c2.printDetails();
	c2.makeEmpty();
	c2.insert("ZERO!");
	c2.insert("ONE!");
	c2.insert("TWO!");
	c2.insert("THREE!");
	c2.insert("FOUR!");
	c2.insert("FIVE!");	// This one should not be added
	c2.printDetails();
	c2.removeRandom();
	c2.printDetails();
	
	return 0;
}
