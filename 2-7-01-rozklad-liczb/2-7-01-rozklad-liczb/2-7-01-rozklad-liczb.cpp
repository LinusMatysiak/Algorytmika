#include <iostream>
using namespace std;
void rozklad(int n, int k);
int main()
{
    int k = 2;
    cout << "Wpisz liczby naturalne: ";
    int n; cin >> n;
    rozklad(n, k);
}
void rozklad(int n, int k) {
    while (n > 1) {
        while (n % k == 0) {
            cout << k << " ";
            n /= k;
        }
        k = k++;
    }
}