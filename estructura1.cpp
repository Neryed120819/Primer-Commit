#include <iostream>
#include <conio.h>
using namespace std;
struct dueno{
	char nombred[20];
};

struct mascota{
	char nombre[20];
	int edad;
	struct dueno due;
};

int main(int argc, char** argv) {
	struct mascota M1[5];
	struct mascota*apuntador;
	
	apuntador=&M1[0];
	
	for (int i=0; i<1; i++){
	cout<<"Nombre: ";
	cin.getline(M1[i].nombre, 20, '\n' );
	cout<<"Edad: ";
	cin>>M1[i].edad;
	cout<<"Nombre del duenio: ";
	fflush(stdin);
	cin.getline(M1[i].due.nombred, 20, '\n' );
	}
	//Mostrar lo guardado
	cout<<"Nombre guardado: "<< apuntador->nombre<<endl;
	cout<<"Edad guardada: "<< apuntador->edad<<endl;
	cout<<"Nombre de duenio guardado: "<< apuntador->due.nombred<<endl;
	getch();
	return 0;
}
