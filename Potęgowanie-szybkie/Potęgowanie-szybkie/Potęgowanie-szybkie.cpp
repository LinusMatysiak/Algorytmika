#include <iostream>
using namespace std;
int potegowanie(int a, int n);
int main()
{
	int a;
	int n;
	cout << "Podaj podstawe";
	cin >> a;
	cout << "Podaj wykładnik";
	cin >> n;

	cout << a << " do potęgi " << n << " wynosi: " << potegowanie(a, n);
}

int potegowanie(int a, int n) {
	int w = 1;
	while (n > 0) {
		if (n % 2 == 1) {
			w = w * a;
		}
		a = a * a;
		n = n / 2;
	}
	return w;
}