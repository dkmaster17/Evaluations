#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//	Using Only K&R
using namespace std;

void Problema01_Parentesis_Balanceados() {

int Casos_de_Prueba=0,ContadorLineasReales,i;
char* Mensaje_por_lineas;
char  Confirmacion_Emoti[2]="";
int band;
string Mensaje_por_lineas2;
ifstream Ejemplo01;

Ejemplo01.open("Ejemplo01.txt");

	if ( Ejemplo01.fail() ) {

		cout<<"error al abrir el archivo";

	} else
     
	Ejemplo01>>Casos_de_Prueba;
	while( !Ejemplo01.eof() )  {
         
		
		Ejemplo01.getline(Mensaje_por_lineas,100,'\n');
		Mensaje_por_lineas2=Mensaje_por_lineas;
		
		
	    for	(int i=0;i<Mensaje_por_lineas2.length();i++)
	    {
	    	
	    	cout<<Mensaje_por_lineas2[i]<<" ";
	    		    	
						if ( i-1>-1 )
						{
							
							if( ( Mensaje_por_lineas2[i]==':' && Mensaje_por_lineas2[i-1]=='(' ) || ( Mensaje_por_lineas2[i]==':' && Mensaje_por_lineas2[i-1]==')' ) )
							{
								
								band=1;
								
							}
							
							if ( ( ) ) 
							{
							
							
							
							}
							
						}
								}
								
		cout<<"Caso # "<<ContadorLineasReales;
		if ( band==1  ) 
		{
			cout<<"Parentesis Balanceados"<<endl;
		}
		else
		{
			cout<<" Parentesis No Balanceados"<<endl;
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


