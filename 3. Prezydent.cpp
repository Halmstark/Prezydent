#include <iostream>

using namespace std;

    int wiek;

    int main()
    {
        cout << "Podaj swoj wiek.\n";
        cin >> wiek;

        if (wiek>=18)
        {
            cout << "Jestes pelnoletni!!!\n";
        }

        else
        {
            cout << "Nie jestes pelnoletni.\n";
        }

        if (wiek>=35)
        {
            cout << "Mozesz kandydowac na prezydenta!!!\n";
        }

        else
        {
            cout << "Nie mozesz kandydowac na prezydenta.\n";
        }
        return 0;
    }
