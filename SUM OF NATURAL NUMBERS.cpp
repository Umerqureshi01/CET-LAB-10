#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int sum = 0;

    while (i <= 5)
	{
        sum = sum + i;
        i++;
    }

    cout << "Sum of the first five natural numbers is: " << sum << endl;

    return 0;
}

