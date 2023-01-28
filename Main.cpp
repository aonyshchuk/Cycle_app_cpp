/* Завдання 5. Користувач вводить ціле число А. Програма 
має визначити, що куб суми цифр цього числа дорівнює 
А*А
*/

#include <iostream>
using namespace std;
int main()
{
	int a, c;
	int sum = 0; 

	cout << "Enter a -> ";
	cin >> a; 
	for (int i = a; i > 0; i /= 10)
		sum += i%10;   
		
	if (sum * sum * sum == a * a) {
		cout << "True" << endl;
	}
	else
		cout << "False" << endl;

	return 0;
}