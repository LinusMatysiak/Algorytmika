#include <iostream>
int Fibonnaci(int n);
int  Fibonnaci2(int n);
int GetInput();
int main()
{
    // fibonacci iteracyjnie
    Fibonnaci(GetInput());
    //fibbonaci rekurencyjnie
    std::cout << Fibonnaci2(GetInput());
    return EXIT_SUCCESS;
}
int Fibonnaci(int n) {
    int f[3];
    f[0] = 0;
    f[1] = 1;
    for (int i = 0; i < n; i++) {
        if (i > 1) {
            f[2] = f[0] + f[1];
            f[0] = f[1];
            f[1] = f[2];
        }
        else {
            f[2] = i;
            i - 1;
        }
        std::cout << f[2] << " ";
    }
    return 0;
}
int Fibonnaci2(int n) {
    if (n <= 1)
        return n;
    return Fibonnaci2(n - 1) + Fibonnaci2(n - 2);
}
int GetInput() {
    std::cout << "Wpisz liczbê n: ";
    int n;
    std::cin >> n;
    return n;
}