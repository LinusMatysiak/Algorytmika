#include <iostream>
using namespace std;
float rekurencja(int n);
int main()
{
	cout << "Podaj nr wyrazu ci¹gu, ktorego wartosc chcesz policzyc:";
	int n; cin >> n;
	rekurencja(n);
	cout << n << "wyraz ci¹gu ma wartoœæ " << rekurencja(n);
}
float rekurencja(int n) {

	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 0.5;
	}
	return - rekurencja(n - 1) * rekurencja(n - 2);
}