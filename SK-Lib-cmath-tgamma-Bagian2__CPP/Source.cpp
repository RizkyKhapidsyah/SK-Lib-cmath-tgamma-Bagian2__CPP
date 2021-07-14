
#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	float x = 0.01;
	cout << "Nilai x = " << x << ", tgamma(x) = " << tgamma(x) << endl;

	x = -18.0 / 0.1;
	cout << "Nilai x = " << x << ", tgamma(x) = " << tgamma(x) << endl;

	x = 10.0 / 0.1;
	cout << "Nilai x = " << x << ", tgamma(x) = " << tgamma(x) << endl;

	x = 0.0 / 0.1;
	cout << "Nilai x = " << x << ", tgamma(x) = " << tgamma(x);

	_getch();
	return 0;
}
