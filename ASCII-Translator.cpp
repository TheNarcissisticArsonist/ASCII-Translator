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

	for(int i=0; i<wrongTypeUserInput.size(); ++i) {
		cout << static_cast<int>(userInput[i]) << endl;
	}
	cout << userInput << endl;

	return 0;
}
