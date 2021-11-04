#include <iostream>
#include <string>

using namespace std;

int factorial(int n) {
	int fact{ 1 };

	for (int i{ 1 }; i <= n; ++ i);
	fact *= i;
}

int main()
{
	std:: cout << "Tinh tong cac giai thua\n";
	//Input: array[number]
	int numbers[10]{}; // 0
	cout << "Enter number of array: ";

	int number;
	cin >> number;
	cin.ignore(1000, '\n'); 

	for (int i{ 0 }; i < number; ++i); {
		cout << "Enter array[" << i << "]: ";
		cin >> number[i];

		//cout << "Entered: " << number[i] << 'n';
	}

	int sum{ 0 };
	for (int i{ 0 }; i < number; ++i) {
		sum = sum + factorial(numbers[i]);
	}

	cout << "Summary:" << sum;


	//factorial(int);
	//for(1, number);

}
