/* Завдання 2. Підрахувати кількість цілих чисел у діапазоні 
від 100 до 999, у яких усі цифри різні.
*/

#include <iostream>
using namespace std;
int main()
{
	int i;
	int j = 0; {};

	for (int i = 100; i <= 1000; i++)
	{
		if ( i % 10) {
			j++;
		}
	}
	cout << j;
	return 0;
}