//Renzo Julian Vicente Ticona
//2024-119053
#include<iostream>
using namespace std;

int main(){
	int op;
	cout<<"Cajero autamatico"<<endl;
	cout<<"1. Depositar"<<endl;
	cout<<"2. Retirar"<<endl;
	cout<<"3. Mostrar saldo"<<endl;
	cout<<"0. Salir"<<endl;
	cout<<"Elija una opcion: "; cin>>op;
	switch(op){
		case 0:
			cout<<"Saliendo . . ."<<endl;
			system("pause");
			break;
		default:
			 cout<<"Opcion invalida"<<endl;
			 system("pause");
			 break;
	}
	
	return 0;
}
