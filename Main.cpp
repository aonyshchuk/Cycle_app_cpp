/* Завдання 7. Користувач вводить два цілих числа. Необхідно вивести всі цілі числа, на які обидва введені числа 
діляться без залишку.
*/

#include <iostream>
using namespace std;
int main()
{ 
	int a, b;
	int	i = 1; {};
	
	cout << "Enter a -> ";
	cin >> a; 

	cout << "Enter b -> ";
	cin >> b; 

	while (a % i == 0 && b % i == 0) 
	{
		cout << i << endl;
		break;
	}

	return 0;
}