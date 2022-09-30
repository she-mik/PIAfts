#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
int main () {
int h=0;
int vek=0;
double vyska=0;
bool i=false;
std::string jmeno;
std::string prijmeni;
std::string vzdelani;
std::string skola;

while (i==false) {
std::cout << "Zadej krestni jmeno:";
std::cin >> jmeno;
std::cout << "Zadej prijemni:";
std::cin >> prijmeni;
std::cout << "Cele jmeno je: " << jmeno << " " << prijmeni << "\n";
std::cout <<"Souhlasi vase udaje? pokud chcete upravit zadejte 0, jinak jine cislo: ";
std::cin >> h;
if (h==0){
i=false;
}
else {
i=true;
}
}

while (vek<10 || vek>100) {
std::cout <<"Zadej vek: ";
std::cin >> vek;
std::cout << "Vek = " << vek << "\n";
if (vek<10 || vek>100){
std::cout <<"A ja ti neverim, zkus to znovu.\n";
}
}

while (vyska<120 || vek>220) {
std::cout <<"Zadej vysku: ";
std::cin >> vyska;
std::cout << "Vyska = " << vyska << "\n";
if (vyska<120 || vyska>220){
std::cout <<"A v klidu 18 co?\n";
}
}

while (skola!="zs" && skola!="ss" && skola!="vs"){
std::cout << "Vase vzdelani je? Zadejte (zs,ss,vs): ";
std::cin >> skola;
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
std::cout << "Jste snad orangutan?\n";
}
}
std::cout << "Vase vzdelani je: " <<vzdelani<< "\n";

std::string file=jmeno + "_"+prijmeni+".txt";

std::ofstream vystupni_soubor (file);
vystupni_soubor << "Cele jmeno: " << jmeno <<" " << prijmeni << "\n"
                << "Vek: " << vek <<"\n"
		<< "Vyska: " << vyska << "\n"
		<< "Vzdelani: " << vzdelani << "\n";
return 0;
}
