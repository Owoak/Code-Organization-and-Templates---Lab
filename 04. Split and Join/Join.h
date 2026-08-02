#ifndef _Join_h_
#define _Join_h_

#include <sstream>
#include <vector>

template <typename T>
std::string join(const std::vector<T>& vector, const std::string& joinStr) {
	std::ostringstream output;

	bool FirstPrint = true;
	for (const T& element : vector) {
		if (FirstPrint) {
			FirstPrint = false;
		}
		else {
			output << joinStr;
		}
		output << element;
	}

	return output.str();
}

#endif // !_Join_h_
