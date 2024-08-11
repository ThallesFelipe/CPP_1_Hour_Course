#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const short min_value{1}, max_value{6};

    srand(time(nullptr));
    short first{(rand() % (max_value - min_value + 1)) + min_value};
    short second{(rand() % (max_value - min_value + 1)) + min_value};

    cout << first << ", " << second << '\n';

    return 0;
}