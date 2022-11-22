#include <iostream>
#include <fstream>
#include <vector>
#include "Uzivatel.h"
#include <algorithm>

using namespace std;

vector<Uzivatel> nacti(vector<Uzivatel> uzivatele)  //nerozumim
{
int h=0;
int vek=0;
double vyska=0;
bool i=false;
std::string jmeno;
std::string prijmeni;
std::string vzdelani;
std::string skola;

while (i==false) {
cout << "Zadej krestni jmeno:";
cin >> jmeno;
cout << "Zadej prijemni:";
cin >> prijmeni;
cout << "Cele jmeno je: " << jmeno << " " << prijmeni << "\n";

cout <<"Souhlasi vase udaje? pokud chcete upravit zadejte 0, jinak jine cislo: ";
cin >> h;

if (h==0){
i=false;
}
else {
i=true;
}
}

while (vek<10 || vek>100) {
cout <<"Zadej vek: ";
cin >> vek;
cout << "Vek = " << vek << "\n";
if (vek<10 || vek>100){
cout <<"A ja ti neverim, zkus to znovu.\n";
}
}

while (vyska<120 || vek>220) {
cout <<"Zadej vysku: ";
cin >> vyska;
cout << "Vyska = " << vyska << "\n";
if (vyska<120 || vyska>220){
cout <<"A v klidu 18 co?\n";
}
}

while (skola!="zs" && skola!="ss" && skola!="vs"){
cout << "Vase vzdelani je? Zadejte (zs,ss,vs): ";
cin >> skola;
if (skola=="zs"){
vzdelani = "zakladoskolak";
}
else if (skola=="ss") {
vzdelani = "stredoskolak";
}
else if (skola=="vs") {
vzdelani = "vysokoskolak";
}
else {
vzdelani = "orangutan";
cout << "Jste snad orangutan?\n";
}
}

uzivatele.push_back(Uzivatel(prijmeni,jmeno,vek,vyska,vzdelani));

    return uzivatele;

}

void ukladani(vector<Uzivatel> uzivatele)
{
    ofstream ulozTo ("users.txt");

    for(Uzivatel k : uzivatele)
    {
        ulozTo << k.prijm();
        ulozTo << " ";
        ulozTo << k.jme();
        ulozTo << " ";
        ulozTo << k.ve();
        ulozTo << " ";
        ulozTo << k.vysk();
        ulozTo << " ";
        ulozTo << k.vzde();
        ulozTo << "\n";
    }
    return;
}

struct Trideni
{
    bool operator()(class Uzivatel& a1 , class Uzivatel& a2) const
    {
        return a1.prijm() < a2.prijm();
    }

};

vector<Uzivatel> serazeno(vector<Uzivatel> a)
{
    sort(a.begin(),a.end(), Trideni());
    return a;
}

int main()
{
    int u;
    vector<Uzivatel> uzivatele;

    do
    {
        u = 0;
        uzivatele = nacti(uzivatele);
        cout << "Pokud chcete nacist dalsiho uzivatele napiste 1: ";
        cin >> u;
    }while(u==1);

    vector<Uzivatel> uzivatele2;
    uzivatele2 = serazeno(uzivatele);

    ukladani(uzivatele2);

return 0;
}
