#include <cmath>
#include "Kruh.h"
#include <iostream>
using namespace std;

Kruh::Kruh(double rr, double xx, double yy){
	r=rr;
	x=xx;
	y=yy;
}

void Kruh::vypisInfo(){
cout <<"Polomer: "<<r<<" ,Souradnice stredu (x,y): "<<x<<", "<<y<<"\n";
}

//double Kruh::obsah() const {
//	return (3.14159*r*r);
//}

double Kruh::obvod() const {
	return (3.14159*r*2);
}

bool Kruh::leziUvnitr(double xb, double yb)const {
	return (sqrt((x-xb)*(x-xb)+(y-yb)*(y-yb))<=r);
}

