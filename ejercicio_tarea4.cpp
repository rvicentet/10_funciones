//Renzo Julian Vicente Ticona
//2024-119053
#define _USE_MATH_DEFINES

#include<iostream>
#include<cmath>
#include<complex>
using namespace std;

int main(){
	float a;
	float b;
	float c;
	complex<double>x1a;
	complex<double>x1b;
	cout<<"ax^2 + bx + c = 0"<<endl;
	cout<<"Para la ecuacion cuadratica"<<endl;
	cout<<"Ingrese a: ";
	cin>>a;
	cout<<"Ingrese b: ";
	cin>>b;
	cout<<"Ingrese c: ";
	cin>>c;
	x1a=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
	x1b=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
	cout<<"Las raices son "<<real(x1a)<<" y "<<real(x1b)<<endl;
	if(imag(x1a)!=0||imag(x1b)!=0){
		cout<<"Las raices son complejas y sus partes imaginarias son :"<<endl;
		cout<<imag(x1a)<<" y "<<imag(x1b)<<" respectivamente"<<endl;
	}
	return 0;
}
