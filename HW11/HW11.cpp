#include <iostream>
using namespace std;

int main()
{
	int larger;
	int num1;
	cout << "Enter the first number: ";
	cin >> num1;

	int num2;
	cout << "Enter the second number: ";
	cin >> num2;

	if (num1 >= num2) {
		larger = num1;
	}
	else {
		larger = num2;
	}
	cout << "The larger number is: " << larger;
	
	return 0;
}

