#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a positive number: ";
    cin >> num;

    while (num <= 0)
	{
        cout << "Error! Please enter a positive number: ";
        cin >> num;
    }

    cout << "You entered a valid positive number: " << num << endl;

    return 0;
}

