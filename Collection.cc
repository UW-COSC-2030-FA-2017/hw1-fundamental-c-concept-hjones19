#ifndef COLLECTION_CC
#define COLLECTION_CC

#include <cstdlib>	// for rand and srand
#include <ctime>	// for time
#include <iostream>

template <typename T>
Collection<T>::Collection(int initialSize) : size(initialSize), length(0) {
	contents = new T[size];
}

template <typename T>
Collection<T>::~Collection() {
	delete[] contents;
}

template <typename T>
bool Collection<T>::isEmpty() const {
	return length == 0;
}

template <typename T>
void Collection<T>::makeEmpty() {
	length = 0;
}

template <typename T>
void Collection<T>::insert(T x) {
	if (length < size) {
		contents[length] = x;
		length++;
	}
}

template <typename T>
void Collection<T>::remove(T x) {
	// Check each index of the array for x
	for (auto i = 0; i < length; i++) {
		if (contents[i] == x) {
			// Iteratively shift elements of contents to close gaps
			for (auto j = i + 1; j < length; j++) {
				contents[j - 1] = contents[j];
			}
			length--;
			//break;	// Uncomment if only one instance of x is to be removed.
		}
	}
}

template <typename T>
void Collection<T>::removeRandom() {
	// Seed and generate a random number
	srand(time(nullptr));
	auto idx = rand() % length;
	// Iteratively push back elements of contents to close gaps
	std::cout << "Random value: " << idx << std::endl;	// For debugging
	for (auto i = idx + 1; i < length; i++) {
		contents[i - 1] = contents[i];
	}
	length--;
}

template <typename T>
bool Collection<T>::notContained(T x) const {
	// Check each index of the array for x
	for (auto i = 0; i < length; i++) {
		if (contents[i] == x) return false;
	}
	return true;
}

template <typename T>
void Collection<T>::printDetails() const {
	std::cout << "***\nLENGTH: " << length << "\nSIZE: " << size
			<< "\nCONTENTS:\n";
	for (auto i = 0; i < length; i++) {
		std::cout << i << ": " << contents[i] << "\n";
	}
	std::cout << "***" << std::endl;
}

#endif //COLLECTION_CC
