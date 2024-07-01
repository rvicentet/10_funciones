//Renzo Julian Vicente Ticona
//2024-119053
#define _USE_MATH_DEFINES

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int ca;
	int cb;
	float hipo;
	int powcat;
	cout<<"Ingrese el primer cateto: ";
	cin>>ca;
	cout<<"Ingrese el segundo cateto: ";
	cin>>cb;
	powcat=pow(ca, 2) + pow(cb, 2);
	hipo=sqrt(powcat);
	cout<<"La hipotenusa es igual a "<<hipo;
	return 0;
}
