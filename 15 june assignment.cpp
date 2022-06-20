#include <iostream>
#include <string>
using namespace std;


int main()
{
	int x;
	cout << "Check Digit Calculator " << endl;
	cout << "--------------------" << endl;
	cout << "1.EAN-8" << endl;
	cout << "2.UPC-A" << endl;
	cout << "3.EAN-13" << endl;
	cout << "4.EAN-14" << endl;
	cout << "5.SSCC" << endl;
	cout << "--------------------" << endl;
	cout << "Choose your product code type: ";
	cin >> x;

	long long digitsOfPKey;

	if (x == 1) {
		cout << "Enter first 7 digits of your product key: ";
		cin >> digitsOfPKey;
		int length = to_string(digitsOfPKey).length();
		if (length!= 7) {
			cout << "Error: You should have entered 7 digits, but you entered ";
			cout << length;
			cout <<" digits." <<endl;

		}
		else {
			cout << "--------------------" << endl;
			cout << "The check digit is";
			cout << x << endl;
			cout << "The product code is ";
			cout << digitsOfPKey;
		}

	}
	else if (x == 2) {
		cout << "Enter first 11 digits of your product key: ";
		cin >> digitsOfPKey;
		int length = to_string(digitsOfPKey).length();
		if (length != 11) {
			cout << "Error: You should have entered 11 digits, but you entered ";
			cout << length;
			cout << " digits." << endl;

		}
		else {
			cout << "--------------------" << endl;
			cout << "The check digit is";
			cout << x << endl;
			cout << "The product code is ";
			cout << digitsOfPKey;
		}
	}
	else if (x == 3) {
		cout << "Enter first 12 digits of your product key: ";
		cin >> digitsOfPKey;
		int length = to_string(digitsOfPKey).length();
		if (length != 12) {
			cout << "Error: You should have entered 12 digits, but you entered ";
			cout << length;
			cout << " digits." << endl;

		}
		else {
			cout << "--------------------" << endl;
			cout << "The check digit is";
			cout << x << endl;
			cout << "The product code is ";
			cout << digitsOfPKey;
		}
	}
	else if (x == 4) {
		cout << "Enter first 13 digits of your product key: ";
		cin >> digitsOfPKey;
		int length = to_string(digitsOfPKey).length();
		if (length != 13) {
			cout << "Error: You should have entered 13 digits, but you entered ";
			cout << length;
			cout << " digits." << endl;

		}
		else {
			cout << "--------------------" << endl;
			cout << "The check digit is";
			cout << x << endl;
			cout << "The product code is ";
			cout << digitsOfPKey;
		}
	}
	else if (x == 5) {
		cout << "Enter first 17 digits of your product key: ";
		cin >> digitsOfPKey;
		int length = to_string(digitsOfPKey).length();
		if (length != 17) {
			cout << "Error: You should have entered 17 digits, but you entered ";
			cout << length;
			cout << " digits." << endl;

		}
		else {
			cout << "--------------------" << endl;
			cout << "The check digit is";
			cout << x << endl;
			cout << "The product code is ";
			cout << digitsOfPKey;
		}
	}
	else {
		cout << "Error: ";
		cout << x;
		cout << " is an invalid menu choice.";
		cin >> digitsOfPKey;
	}
	
	
	return 0;
}