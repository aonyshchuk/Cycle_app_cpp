/*Завдання 1. Напишіть програму, яка обчислює суму цілих 
чисел від а до 500 (значення a вводиться з клавіатури).
*/

#include <iostream>
using namespace std;
int main()
{
	int start;
	int end = 500; 
	int sum = 0; 

	cout << "Start =";
	cin >> start;

	for (int i = start; i <= end; ++i)
		sum += i; 

	cout << "Sum = " << sum << endl; 
	
	
	return 0;
}