#ifndef _Split_h_
#define _Split_h_

#include <vector>
#include <sstream>

template <typename T>
std::vector<T> split(const std::string& line, char separator) {
	std::vector<T> vector;
	std::istringstream buffer(line);

	std::string token;
	while (getline(buffer, token, separator)) {
		std::istringstream tokenManager(token);
		T element;
		tokenManager >> element;
		vector.push_back(element);
	}
	return vector;
}

#endif // !_Split_h_
