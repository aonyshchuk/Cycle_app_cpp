/* Завдання 5. Написати програму, яка виводить на екран 
таблицю множення на k, де k — номер варіанта. Наприклад, для 7-го варіанта:
7 x 2 = 14;
7 x 3 = 21.
*/

#include <iostream>
using namespace std;
int main()
{
	int k; 
	int i;

	cout << "Enter k -> ";
	cin >> k; 

	for (int i = 2; i < 9; i++)
	{
		cout << k << " * " << i << " = " << k * i << endl;
	}
	

	return 0;
}