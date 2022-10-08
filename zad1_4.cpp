#include <iostream>
using namespace std;

int main() 
{
    int liczba1, liczba2, liczba3, wynik;
    
    cout << "Podaj 3 liczby: ";
    cin >> liczba1 >> liczba2 >> liczba3;

    //1
    cout << "Największa liczba to: ";
    if (liczba1 > liczba2 && liczba1 > liczba3)
    {
        cout << liczba1;
    } else if (liczba2 > liczba3)
    {
        cout << liczba2;
    } else 
    {
        cout << liczba3;
    }
    
    //2
    cout << endl << "Najwieksza liczba to: ";
    if (liczba1 > liczba2)
    {
        if (liczba1 > liczba3)
        {
            cout << liczba1;
        }
        else if (liczba2 > liczba3)
        {
            cout << liczba2;
        }
        else
        {
            cout << liczba3;
        }
        
    } 
    else if (liczba2 > liczba3)
    {
        cout << liczba2;
    }
    else
    {
        cout << liczba3;
    }
    //3
}