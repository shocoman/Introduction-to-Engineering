#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Russian");
	double a = 0.0, b = 0.0, s = 0.0, p = 0.0;

	cout << "Введите длину и ширину треугольника: ";
	cin >> a >> b;

	s = a * b;
	p = 2 * (a + b);

	cout << "Площадь треугольника: " << s << endl;
	cout << "Периметер треугольника: " << p << endl;

	cin.get(); cin.get();
	return 0;
}
