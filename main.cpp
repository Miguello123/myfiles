#include <iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
    int imie;
    int nazwisko;
    int numer;

fstream plik;
    plik.open("wizytowka.txt",ios::in);
    if(plik.good()==false)
    {
        cout<<"PLIK NIE ISTNIEJE!"<<endl;
        exit(0);
    }
    string linia;
    int nrl=1;
    while(getline(plik,linia))
    {
        switch(nrl)
        {
            case 1: linia=imie; break;
            case 2: linia=nazwisko; break;
            case 3: linia=numer; break;
        }
        nrl++;
    }


    plik.close();

cout<<imie<<endl;
cout<<nazwisko<<endl;
    return 0;
}
