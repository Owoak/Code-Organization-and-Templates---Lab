#ifndef _Parser_h_
#define _Parser_h_

#include <iostream>
#include <sstream>
#include <string>

template<typename T>
class Parser {
private:
	std::istream& is;
	std::string StopLine;
public:
	Parser(std::istream& is, const std::string& StopLine) :is(is), StopLine(StopLine) {}
	bool readNext(T& data) {
		std::string line;
		getline(std::cin, line);
		if (line == StopLine) {
			return false;
		}
		std::istringstream buffer(line);
		buffer >> data;
		return true;
	}
};

#endif // !_Parser_h_
