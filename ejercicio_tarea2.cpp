//Renzo Julian Vicente Ticona
//2024-119053
#define _USE_MATH_DEFINES

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

int main(){
	srand(time(0));
	int n;
	int gen;
	int salida;
	cout<<"Ingrese el limite de los numeros generados: ";
	cin>>n;
	cout<<"Ingrese la cantidad de numeros generados: ";
	cin>>gen;
	for(int i=1; i<=gen; i++){
		salida = rand() % n;
		cout<<salida<<endl;
	}
	return 0;
}
