#ifndef _PrintUtils_h_
#define _PrintUtils_h_

#include <vector>
#include <iostream>

template <typename T>
void printVector(const std::vector<T>& numbers) {
	for (const T& element : numbers) {
		std::cout << element << ' ';
	}
}

#endif // !_PrintUtils_h_
