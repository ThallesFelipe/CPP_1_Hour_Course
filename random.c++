#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(nullptr));
    int number = rand() % 10;
    cout << number << '\n';
    return 0;
}