/* Завдання 4. Користувач вводить будь-яке ціле число А. 
Необхідно вивести всі цілі числа В, для яких А ділиться 
без залишку на В*В і не ділиться без залишку на В*В*В.
*/

#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "Enter x -> ";
	cin >> x; 

	for (int y = 1; y <=x; y++)
		if (x % (y * y) == 0 && x % (y * y * y) != 0) 
		{
			cout << y << endl;
		}
	return 0;
}