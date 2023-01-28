/* Завдання 3. Користувач вводить будь-яке ціле число. 
Необхідно з цього цілого числа видалити всі цифри 3 і 6 
і вивести назад на екран.
*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter number -> ";
	cin >> n;

    while (n > 0 && (n % 10 == 3 || n % 10 == 6))
        n /= 10;

    int deln36 = n % 10;
    int i = 10;
    while (n > 0) {
        
        n /= 10;
        if (n % 10 != 3 && n % 10 != 6) {
      
            deln36 += (n % 10) * i;
            i *= 10;
        }
    }

    cout << deln36 << endl;
	return 0;
}