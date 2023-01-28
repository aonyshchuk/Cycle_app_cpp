/* Завдання 1. Підрахувати кількість цілих чисел у діапазоні 
від 100 до 999, які мають дві однакові цифри
*/

#include <iostream>
using namespace std;
int main()
{
	int i;
	int j = 0; {};

	for (int i = 100; i <=1000; i++)
	{
		if (i / 100 == i / 10 % 10 || i / 100 == i % 10 || i / 10 % 10 == i % 10) {
			j++;
		}
	}
	cout << j; 
	return 0;
}