#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//	Using Only K&R
int main(int argc, char** argv) {

	Problema01_Parentesis_Balanceados();
	return 0;
	
}

void Problema01_Parentesis_Balanceados() {

int Casos_de_Prueba=0,ContadorLineasReales;
char Mensaje_por_lineas[100];
ifstream Ejemplo01;

Ejemplo01.open("Ejemplo01");

	if ( Ejemplo01.fail() ) {

		cout<<"error al abrir el archivo";

	} else

	Ejemplo01>>Casos_de_Prueba;
	while( !Ejemplo01.eof() )  {

		ContadorLineasReales++;
		Ejemplo01.getline(Mensaje_por_lineas,100,"\n");
		cout<<
		cout<<"Caso # "<<ContadorLineasReales<<endl;

	}

	}
