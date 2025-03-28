#include "funzioni.hpp"

double mappa_in_nuovo_intervallo(double a,double b,double x)
{
	return a*x+b;
}


double calcola_media(unsigned int n, double m, double y)
{
	return ((n-1)*m+ y)/n;
}