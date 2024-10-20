#include <iostream>
#include <cmath> // підключення мат.бібліотеки

using namespace std;

int main()
{
	// Integer8. Дано двозначне число. Вивести число, отримане при перестановці цифр вихідного числа.
	int a; // оголошую змінну 
	cout << "Any double digit number: ";
	cin >> a; // отримуємо число 

	int dozens = a / 10; // виділяю десятки 
	int units = a % 10; // виділяю одиниці

	int newNumber = units * 10 + dozens; // нове число з перестановкою

	cout << "Number with rearranged digits: " << newNumber << endl;

	
	// Boolean10. Дано два цілих числа : A, B.Перевірити істинність висловлювання : «Рівне одне з чисел A і B непарне».
	int A, B; // оголошую змінну
	cout << "Any two number: "; 
	cin >> A >> B;

	bool exactlyOneIsNotPaired = (A % 2 != 0) ^ (B % 2 != 0); // перевірка чисел на парність (рівно одне число непарне - true;) 

	cout << "Pair number: " << exactlyOneIsNotPaired << endl;
	
	// 22. Обчислення мат.дробі
	
	double x; // змінна дійсного типу
	
	cout << "The value of x: ";
	cin >> x;
	
	double numerator = (1.0 / 4) * log(abs(x)) * sqrt(pow(x, 2)) * pow(abs(sin(x)), 3) * sqrt(abs(cos(x))); // обчислюємо чисельник
	double denominator = cos(x) + 1.0 / 5 * sqrt((2 * x) + sqrt(5 * x)); // обчислюємо знаменник
	double y = numerator / denominator;

	cout << "Result: " << y << endl;

   
	
	return 0;

}