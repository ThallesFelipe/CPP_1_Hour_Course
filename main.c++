#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int a = 1;
    int b = 2;

    swap(&a, &b);

    cout << a << "\n";
    cout << b << "\n";

    return 0;
}