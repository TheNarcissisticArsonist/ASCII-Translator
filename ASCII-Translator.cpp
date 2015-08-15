#include <iostream>

int main() {
	using std::cin;
	using std::cout;
	using std::endl;

	cout << "ASCII Translator" << endl;
	cout << "Input a character, and I'll print out its ASCII value!" << endl;

	char input;
	cin >> input;

	cout << static_cast<int>(input) << endl;

	return 0;
}
