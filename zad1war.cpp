#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std; 


int rozmiar;
char symbolO, symbolW;
int proby = 0;

char obramowanie[] = { '#', '@', '|', '>', '*' };
char wypelnienie[] = { '.', ':', '~', '+' };

srand(time(0)); 
symbolO = obramowanie[rand() % 5];
symbolW = wypelnienie[rand() % 4];


while (true) 
{
    cout << "Podaj nieparzysta liczbe wierszy dla rombu (minimum 3): ";
    cin >> rozmiar;

    if (rozmiar >= 3 && rozmiar % 2 != 0) 
    {
        break; 
    }
    else {
        cout << "Bledna wartosc"<<endl;
        proby++;
        if (proby >= 3) 
        {
            cout << "Za duzo blednych prob"<<endl;
            return 1;
        }
    }
}


int polowa = rozmiar / 2;

   
for (int i = 0; i <= polowa; i++) 
{
    for (int j = 0; j < polowa - i; j++)
    {
        cout << " ";
    }
    for (int k = 0; k < 2 * i + 1; k++) 
    {
        if (k == 0 || k == 2 * i) 
        {
            cout << symbolO; 
        }
        else 
        {
            cout << symbolW; 
        }
    }
    cout << endl;
}

  
for (int i = polowa - 1; i >= 0; i--) 
{
    for (int j = 0; j < polowa - i; j++)
    {
        cout << " ";
    }
    for (int k = 0; k < 2 * i + 1; k++) 
    {
        if (k == 0 || k == 2 * i) 
        {
            cout << symbolO; 
        }
        else 
        {
            cout << symbolW; 
        }
    }
    cout << endl;
}
