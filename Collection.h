#ifndef COLLECTION_H
#define COLLECTION_H

template <typename T>
class Collection {
	T *contents;		// Array holding current contents
	int size;			// Current capacity of Collection
	int length;			// Number of elements
public:
	Collection(int initialSize = 10);
	~Collection();
	bool isEmpty() const;
	void makeEmpty();
	void insert(T x);
	void remove(T x);
	void removeRandom();
	bool notContained(T x) const;
	void printDetails() const;		// For debugging
};

#include "Collection.cc"	// Template class, cannot compile directly

#endif //COLLECTION_H
