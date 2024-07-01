//Renzo Julian Vicente Ticona
//2024-119053
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	srand(time(0));
	int jug, comp, dif, victorias=0, perdidas=0;
	do{
	cout<<"Ingrese su jugada"<<endl;
	cout<<"1- Piedra"<<endl;
	cout<<"2- Papel"<<endl;
	cout<<"3- Tijera"<<endl;
	cin>>jug;
	comp = (rand() % 3) + 1;
	dif=jug-comp;
	if(dif==-2||dif==2){
		dif=dif*-1;
	}
	switch(dif){
		case 0:
			cout<<"Hubo un empate"<<endl;
			break;
		case 1:
		case 2:
			victorias++;
			cout<<"Ganaste, has ganado "<<victorias<<" rondas"<<endl;
			break;
		case -1:
		case -2:
			perdidas++;
			cout<<"Perdiste, has perdido "<<perdidas<<" rondas"<<endl;
			break;
	}
	}
	while(victorias<3&&perdidas<3);
	if(victorias==3){
		cout<<"Has ganado el set de 5 con 3 rondas"<<endl;
	}
	else{
		cout<<"Has perdido el set de 5 con 3 rondas ganadas por la computadora;"<<endl;
	}
	return 0;
}
