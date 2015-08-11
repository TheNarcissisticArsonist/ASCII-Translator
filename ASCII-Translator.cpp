#include <iostream>

int main() {
	using std::cin;
	using std::cout;
	using std::endl;

	cout << "ASCII Translator" << endl;
	cout << "Input text, and I'll convert it to numbers!" << endl;
	std::string wrongTypeUserInput;
	cin >> wrongTypeUserInput;
	const char* userInput = wrongTypeUserInput.c_str();
	cout << userInput << endl;

	return 0;
}
