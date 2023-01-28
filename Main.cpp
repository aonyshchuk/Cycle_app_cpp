/* Завдання 3. Знайти середнє арифметичне всіх цілих чисел 
від 1 до 1000.
*/

#include <iostream>
using namespace std;
int main()
{
	int i = 1; 
	int n = 1000; 
	int sum = 0; 
	int average = 0; 
	
	for (int i = 1; i < n; i++)
	{
		sum += i; 
		
	}
	average = sum / n; 

	cout << "The average = " << average << endl; 


	return 0;
}