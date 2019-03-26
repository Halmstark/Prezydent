#include <iostream>

using namespace std;

    int wiek;

    int main()
    {
        cout << "Podaj swoj wiek.\n";
        cin >> wiek;

        if (wiek<18)
        {
            cout << "Nie jestes pelnoletni.\n";
        }

        if ((wiek>=18)&&(wiek<35))
        {
            cout << "Jestes pelnoletni, ale nie mozesz kandydowac na prezydeanta\n";
        }


        if (wiek>=35)
        {
            cout << "Jestes pelnoletni i mozesz kandydowac na prezydenta!!!\n";
        }

        return 0;
    }
