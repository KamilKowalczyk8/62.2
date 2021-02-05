#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class moj{
	

public:
	int start;
	int liczba=0;
void pobierz(const char *nazwa)
{

    fstream plik;
         if(plik.good())  
		int maks=1000000;
		int cyk = start;
		int dlug=1;
		int max_dlug=dlug;
		int max_start=start;
        plik.open(nazwa,ios::in);  
{
while(plik >> liczba) {
	if(liczba < cyk){
		if( dlug > max_dlug){
			max_dlug = dlug;
			max_start = start;
		}
		start = liczba;
		cyk = start;
		dlug = 1;
	}else {
		dlug++;
		cyk = liczba;
	}
}
cout << max_start<<" "<<max_dlug<<"\n";
}
            plik.close();  
cout<<endl;
}
};
 
 
int main(int argc, char** argv) {
    moj ti;
    ti.pobierz("liczby2.txt");
}
