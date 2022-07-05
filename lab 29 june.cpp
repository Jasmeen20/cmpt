#include <iostream>
#include <fstream>
using nampespace std;
int main() {
	ifstream newStream;
	newStream.open("answer.txt");

	if (newStream.fail()) {
		cout << "Error: Not found" << endl;
	}
	else {
		cout << "Everything Fine!" << endl;
	}
	while (true) {
		cout << "Enter the next question" << endl;
		string s;

		cin >> s;
		char answer[100];

		int count = 0;
		newStream.get(answer[count++]);
		while (newStream.eof()) {
			  
			if (answer[count - 1] == '\a') {
				cout << answer << endl;
				count = 0;
			}

			newStream.get(answer[count++]);
		}
	}
	return 0;
}

 

