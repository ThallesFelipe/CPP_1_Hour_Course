#include <iostream>

using namespace std;

double convert_fahrenheit_to_celsius(double fahrenheit)
{
    double celsius = (5.0/9.0) * (fahrenheit - 32);
    return celsius;
}

int main()
{
    double fahrenheit;
    cout << "Fahrenheit: Fº ";
    cin >> fahrenheit;

    double celsius = convert_fahrenheit_to_celsius(fahrenheit);

    printf("Celsius: Cº %.1f\n", celsius);

    return 0;
}