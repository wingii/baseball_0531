#include <stdexcept>
#include <string>

using namespace std;

class Baseball {
public:
	void guess(const std::string& string) {
		throw std::length_error("Input must be exactly 3 characters long.");
	}

};