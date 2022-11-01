#ifndef KRUH_H
#define KRUH_H
class Kruh
{
public:
double r; double x; double y;
Kruh(double rr, double xx, double yy);

void vypisInfo();
double obsah() const;
double obvod() const;
bool leziUvnitr(double xb, double yb);
};
#endif
