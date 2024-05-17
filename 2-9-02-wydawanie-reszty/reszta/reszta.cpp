#include <iostream>
#include <string>
void reszta(int kwota);
int input(std::string wypisz);
int main()
{
	reszta(input("podaj kwote"));
}
void reszta(int kwota) {
	int nominaly[9]{ 500,200,100,50,20,10,5,2,1 };
	int i = 0;
	while (kwota > 0) {
		if (kwota >= nominaly[i]) {
			int ile = kwota / nominaly[i];
			kwota -= (nominaly[i] * ile);
			std::cout << nominaly[i] << " x " << ile << std::endl;
		}
		i++;
	}
	return;
}
int input(std::string wypisz) {
	std::cout << wypisz + ": ";
	int wynik;
	std::cin >> wynik;
	return wynik;
}