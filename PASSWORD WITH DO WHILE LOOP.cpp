#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password;
    string correctPassword = "admin123";

    do
	{
        cout << "Enter password: ";
        cin >> password;

        if (password != correctPassword)
		{
            cout << "Incorrect password! Try again.\n";
        }

    }
	while (password != correctPassword);

    cout << "Access granted. Welcome!\n";

    return 0;
}

