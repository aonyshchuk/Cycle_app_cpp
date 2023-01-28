/* Завдання 6. Користувач вводить ціле число. Необхідно 
вивести всі цілі числа, на які задане число ділиться без 
залишку. 
*/

#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Enter a -> ";
	cin >> a;

	for (int i = 1; i < a; i++)
	{
		if (a % i == 0) {
			cout << i << endl;
		}
	}
	return 0;
}