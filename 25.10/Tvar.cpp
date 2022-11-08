#include "Tvar.h"
#include <fstream>
#include <cmath>

double Tvar::obsah() const {
	std::ofstream soubor("body.txt");
	const int N=1000;
	const double xl=x_min();
	const double xr=x_max();
	const double yl=y_min();
	const double yr=y_max();
	int n=0;

	const double dx= (xr-xl)/double(N);
	const double dy= (yr-yl)/double(N);

	for (int i=0; i<N; ++i){
		for(int j=0;j<N;++j){
			double a = xl+i*dx;
			double b = yl+j*dy;
			soubor<<a<<" "<<b<<"\n";
			if (leziUvnitr(a,b)){
			++n;
}}}
return n*dx*dy;}
