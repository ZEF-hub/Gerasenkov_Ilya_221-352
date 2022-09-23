#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void task1() {
	int n = 0;
	cout << "\nEnter number: ";
	cin >> n;
	cout << endl;
	string num = "";
	for (int i = 0; i <= n; i++) {
		num += std::to_string(i);
		cout << num << endl;
	}
	cout << endl;
}

void task2() {
	int n = 0;
	cout << "\nEnter n: ";
	cin >> n;
	cout << endl;
	long double fact[200] = { 1 }; // counts to 170 then overflow long double
	for (int i = 0; i < n; i++) {
		fact[i + 1] = fact[i] * (i + 1);
	}

	for (int k = 0; k <= n; k++) {
		cout << fact[n] / (fact[n - k] * fact[k]) << " ";
	}
	cout << "\n\n";
}

void task3() {
	int sum = 0, count = 0;
	bool flag = true;
	cout << "\nEnter numbers (0 to exit): \n\n";
	while (flag) {
		int num = 0;
		cin >> num;
		switch (num) {
		case 0:
			if (count == 0) {
				cout << "\nAverage is 0" << endl;
				flag = false;
				break;
			}
			else {
				cout << "\nAverage is " << double(sum) / count << endl;
				flag = false;
				break;
			}

		default:
			sum += num;
			count += 1;
			break;
		}
	}
	cout << endl;
}

void task4() {
	exit(0);
}

int main() {
	int choise = 0;
	while (true) {
		cout << "1. Numerical triangle\n2. Binomial coefficient\n3. Arithmetic mean\n4. Exit\n\nEnter the action number: ";
		cin >> choise;

		switch (choise)
		{
		case 1: {
			task1();
			break;
		}
		case 2: {
			task2();
			break;
		}
		case 3: {
			task3();
			break;
		}
		case 4: {
			task4();
			break;
		}
		default:
			cout << "No function with entered identifier, try again" << endl;
			break;
		}
	};
}