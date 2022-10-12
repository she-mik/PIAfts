#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
//input vektor
std::vector <int> cn(std::string data)
	{
std::ifstream soubor(data);
std::vector <int> vektor;
int cislo=0;
soubor >> cislo;
while(!soubor.eof())
{
vektor.push_back(cislo);
soubor>>cislo;
}
return vektor;
}

int main () {
//vektory
std::vector<int> muj_vektor=cn("data.txt");
std::cout << "nacteno" << muj_vektor.size() << "cisel" <<std::endl;
int i=0;
int j=10000;
int a=0;
std::ofstream soubor ("seznam.txt");

//insert
for (int q=0; q< muj_vektor.size();){
//hledam nejmensi
for (int p=0; p< muj_vektor.size(); ++p){
if (i<muj_vektor[p] && j>muj_vektor[p]){
j=muj_vektor[p];
}}
//hledam duplikaty a tisknu
for (int k=0; k< muj_vektor.size(); ++k){
if (j==muj_vektor[k]){
std::cout<<j<<"\n";
soubor <<j<<"\n";
q+=1;
}}
i=j;
j=10000;
}

return 0;
}
