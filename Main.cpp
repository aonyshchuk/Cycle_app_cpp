/* Завдання 4. Знайти здобуток усіх цілих чисел від a до 20
(значення a вводиться з клавіатури: 1 <= a <= 20).
*/

#include <iostream>
using namespace std;
int main()
{
	int i; 
	int a; 
	int p = 0;
	
	cout << "Enter a -> ";
	cin >> a;

	if (a <= 1 || a > 20) 
	{
		cout << "Error!" << endl;
	}
	for (i = a; i <= 20; i++)
		p *= i;

	cout << "Result -> " << p << endl;
	return 0;
}