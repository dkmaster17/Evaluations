#include <iostream>
#include <fstream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//	Using Only K&R
using namespace std;

void Problema01_Parentesis_Balanceados() {

int Casos_de_Prueba=0,ContadorLineasReales,i;
char  Mensaje_por_lineas;
string Mensaje_por_lineas2;
bool band;

ifstream Ejemplo01;

Ejemplo01.open("Ejemplo01.txt");

	if ( Ejemplo01.fail() ) {

		cout<<"error al abrir el archivo";

	} else
     
	Ejemplo01>>Casos_de_Prueba;
	while( !Ejemplo01.eof() )  {
         
		
		getline ( Ejemplo01, Mensaje_por_lineas2 );
		char* Caracter_a_Caracter = new char[ Mensaje_por_lineas2.length() + 1 ];
		strcpy(Caracter_a_Caracter,Mensaje_por_lineas2.c_str());
		cout<<Caracter_a_Caracter;
		cout<<" Caso # "<<ContadorLineasReales;
		
		
		
		
		if ( band )
		{
			
			cout<<"Parentesis Balanceados"<<endl;
			
		}
		
		ContadorLineasReales++;
		cin.get();
	//	cout<<Mensaje_por_lineas;
	//	cout<<" Caso # "<<ContadorLineasReales<<endl;

	}

	}

int main(int argc, char** argv) {

	Problema01_Parentesis_Balanceados();
	return 0;
	
}


