#include <iostream>
#include <bitset>
#include <limits>	

<<<<<<< HEAD

using std::cout;
using std::cin;
using std::endl;
using std::hex;
using std::numeric_limits;
using std::string;
using std::bitset;

=======
using namespace std;
>>>>>>> parent of ba35b20 (update using)

int main() {
											//Lab1_DataTypes by Gerasenkov Ilya zzz
	cout << "``````````````````````````````````````````````TASK 1``````````````````````````````````````````````" << endl << endl;
	cout << "\t\t\t\t Gerasenkov Ilya, group 221-352" << endl << endl;

	cout << "``````````````````````````````````````````````TASK 2``````````````````````````````````````````````" << endl << endl;
	cout << "+---------------------------------------+---------------------------------------+-------------------------------+" << endl;
	cout << "|min int = " << numeric_limits<int>::min() << "\t\t\t| max int = " << numeric_limits<int>::max() << "\t\t\t| size of int = " << sizeof(int) << "\t\t|" << endl;
	cout << "|min unsigned int = " << numeric_limits<unsigned int>::min() << "\t\t\t| max unsigned int = " << numeric_limits<unsigned int>::max() << "\t\t| size of unsigned int = " << sizeof(unsigned int) << "\t|" << endl;
	cout << "|min short = " << numeric_limits<short>::min() << "\t\t\t| max short = " << numeric_limits<short>::max() << "\t\t\t| size of short = " << sizeof(short) << "\t\t|" << endl;
	cout << "|min unsigned short = " << numeric_limits<unsigned short>::min() << "\t\t\t| max unsigned short = " << numeric_limits<unsigned short>::max() << "\t\t| size of unsigned short = " << sizeof(unsigned short) << "\t|" << endl;
	cout << "|min long = " << numeric_limits<long>::min() << "\t\t\t| max long = " << numeric_limits<long>::max() << "\t\t\t| size of long = " << sizeof(long) << "\t\t|" << endl;
	cout << "|min long long = " << numeric_limits<long long>::min() << "\t| max long long = " << numeric_limits<long long>::max() << "\t| size of long long = " << sizeof(long long) << "\t\t|" << endl;
	cout << "|min double = " << numeric_limits<double>::min() << "\t\t| max double = " << numeric_limits<double>::max() << "\t\t| size of double = " << sizeof(double) << "\t\t|" << endl;
	cout << "|min char = " << int(numeric_limits<char>::min()) << "\t\t\t| max char = " << int(numeric_limits<char>::max()) << "\t\t\t| size of char = " << sizeof(char) << "\t\t|" << endl;
	cout << "|min bool = " << numeric_limits<bool>::min() << "\t\t\t\t| max bool = " << numeric_limits<bool>::max() << "\t\t\t\t| size of bool = " << sizeof(bool) << "\t\t|" << endl;
	cout << "+---------------------------------------+---------------------------------------+-------------------------------+" << endl << endl;

	cout << "``````````````````````````````````````````````TASK 3``````````````````````````````````````````````" << endl << endl;
	int num;
	cout << "Enter your number: ";
	cin >> num;
	string bin_num = bitset<32>(num).to_string();
	cout << "Binary num: " << bin_num << endl;
	cout << "Hex num: " << hex << num << endl;
	cout << "Bool: " << bool(num) << endl;
	cout << "Double: " << double(num) << endl;
	cout << "Char: " << char(num) << endl << endl;

	cout << "``````````````````````````````````````````````TASK 4``````````````````````````````````````````````" << endl << endl;
	int a, b;
	cout << "Enter a and b (a * x = b): ";
	cin >> a >> b;
	cout << double(a) << " * x = " << double(b) << endl;
	cout << "x = " << double(b) << " / " << double(a) << endl;
	double res = double(b) / a;
	cout << "x = " << res << endl;
	cout << "Result: " << res << endl << endl;

	cout << "``````````````````````````````````````````````TASK 5``````````````````````````````````````````````" << endl << endl;
	cout << "Enter the coordinates of the ends of the line segment: ";
	int ls, rs;
	cin >> ls >> rs;
	double mid = (ls + rs) / 2;
	cout << "The middle of the segment is at the point: " << mid << endl << endl;
}
