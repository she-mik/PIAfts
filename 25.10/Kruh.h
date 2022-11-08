#ifndef KRUH_H
#define KRUH_H
#include "Tvar.h"
class Kruh : public Tvar
{
public:
double r; double x; double y;
Kruh(double rr, double xx, double yy);

void vypisInfo();
//double obsah() const;
double obvod() const;
virtual bool leziUvnitr(double xb, double yb)const;
virtual double x_min() const{return x-r;};
virtual double x_max() const{return x+r;};
virtual double y_min() const{return y-r;};
virtual double y_max() const{return y+r;};
};
#endif
