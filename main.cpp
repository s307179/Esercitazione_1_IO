#include <iostream> 
#include <fstream> 
#include <iomanip> 
#include "funzioni.cpp"
using namespace std; 


int main()
{	
	ifstream file_da_leggere("data.txt");
	if(file_da_leggere.fail())
	{
		cerr<<"Non ho trovato il file"<<endl;
		return 1;
	}
	const double a =3.0/4; 
	const double b =-7.0/4; 
	ofstream file_da_scrivere("result.txt"); 
	file_da_scrivere << "# " << "N " << "Media" <<endl; 
	int n = 0; 
	double m = 0 ;
	double x;
		while (file_da_leggere>>x)
		{ n += 1;
		double y =  mappa_in_nuovo_intervallo(a,b,x);
		double m= calcola_media(n,m,y);
		file_da_scrivere<<n<<" "<<setprecision(16) <<scientific<< m<<endl;
		}
	
	file_da_leggere.close();
	file_da_scrivere.close();
    return 0;
}

