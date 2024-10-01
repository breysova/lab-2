#include <iostream>
#include <clocale>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	double a, b, S, P;

	cout << "Введите сторону a: ";
	cin >> a;
	cout << "Введите сторону b: ";
	cin >> b;

	// Расчет площади
	S = a * b;
	// Расчет периметра
	P = 2 * (a + b);


	cout << "Площадь прямоугольника: " << S << endl;
	cout << "Периметр прямоугольника: " << P << endl;

}