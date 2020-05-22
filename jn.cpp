#include <iostream>
#include <fstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	ofstream wyjscie;
	wyjscie.open("out.json");
	int liczba;
	for(int i=1; i<5; i++)
	{
		cout<<"Podaj liczbe od 0 do 5:";
		cin>>liczba;
		if (liczba%2==1) 
		cout<<"nieparzysta";
		plik<< "{\"nieparzysta\": " << liczba << " },";
	}

	plik.close();
	system("PAUSE");
	
	return 0;
}
