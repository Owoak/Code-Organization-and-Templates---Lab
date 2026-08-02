#ifndef _PrintUtils_h_
#define _PrintUtils_h_

#include <set>
#include <iostream>

template <typename T>
void printContainer(typename T::iterator begin, typename T::iterator end) {
	for (; begin != end; begin++) {
		std::cout << *begin << ' ';
	}
}

#endif // !_PrintUtils_h_
