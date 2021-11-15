#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Uczen
{
public:
string imie, nazwisko;
float srednia;	
void WyswietlDane();

};

void Uczen::WyswietlDane()
{
cout<<"Podaj imie: "<<endl;
cin>> imie;
cout<<"Podaj nazwisko: "<<endl;
cin>> nazwisko;
cout<<"Podaj srednia ocen: "<<endl;
cin>> srednia;	
}



void porownaj(Uczen u1, Uczen u2)
{
if(u1.srednia < u2.srednia)	
{
cout<<"Srednia ucznia "<<u2.imie<<" jest wieksza."<<endl;
}
else if(u1.srednia > u2.srednia)
{
cout<<"Srednia ucznia "<<u1.imie<<" jest wieksza."<<endl;	
}
else
{
cout<<"Srednia uczniow "<<u1.imie<<" i "<<u2.imie<<" jest taka sama.";	
}
}



int main()
{
fstream plik;	

plik.open("uczniowie.txt", ios::out);

Uczen uczen1;
cout<<"Uczen 1"<<endl;

uczen1.WyswietlDane();

cout<<endl;

Uczen uczen2;
cout<<"Uczen 2"<<endl;

uczen2.WyswietlDane();

cout<<endl;
porownaj(uczen1, uczen2);






plik<<"Uczen 1:"<<endl;
plik << uczen1.imie<<endl;
plik << uczen1.nazwisko<<endl;
plik << uczen1.srednia<<endl;

plik<<endl;

plik<<"Uczen 2:"<<endl;
plik << uczen2.imie<<endl;
plik << uczen2.nazwisko<<endl;
plik << uczen2.srednia<<endl;


plik.close();


return 0;	
}
