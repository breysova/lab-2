#include <iostream>
#include <clocale>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	double a, b, S, P;

	cout << "������� ������� a: ";
	cin >> a;
	cout << "������� ������� b: ";
	cin >> b;

	// ������ �������
	S = a * b;
	// ������ ���������
	P = 2 * (a + b);


	cout << "������� ��������������: " << S << endl;
	cout << "�������� ��������������: " << P << endl;

}