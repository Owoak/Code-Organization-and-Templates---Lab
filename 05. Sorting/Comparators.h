#ifndef _Comparators_h_
#define _Comparators_h_

template <typename T>
class LessThan {
public:
	bool operator()(const T& a, const T& b) const {
		return a < b;
	}
};

template <typename T, typename Compare>
struct Reverse {
	bool operator()(const T& a, const T& b) const {
		Compare comp;          // <-- constructs a LessThan<int> object right here
		return !comp(a, b);     // flips the argument order
	}
};

#endif 