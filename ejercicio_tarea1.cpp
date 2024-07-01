//Renzo Julian Vicente Ticona
//2024-119053
#define _USE_MATH_DEFINES

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int r;
	float a;
	cout<<"Ingrese el radio del circulo: ";
	cin>>r;
	a= M_PI * pow(r, 2);
	cout<<"El area del circulo es "<<a<<endl;
	
	return 0;
}
