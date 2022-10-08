#include <iostream>
using namespace std;

int main() 
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    if (liczba > 0)
    {
        cout << "liczba jest dodatnia";
    } 
    else if (liczba < 0)
    {
        cout << "liczba jest ujemna";
    }
    else
    {
        cout << "liczba jest zerem";
    }
}