//Archivo de prueba
#include<iostream>
#include<conio.h>
#ifdef _WIN32
  #include<windows.h>
#endif 
#include<cstdlib>
using namespace std;

void limpiar_pantalla()
{
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

int FN_Prueba(){
	int salir;
	do{
	limpiar_pantalla();	
	cout<<"\t\t\t\tHola, que tal?";
	cout<<"\n\t\t\t\tEsto es un archivo de prueba";
	cout << "\n \n" << "\t\tPara repetir presione cualquier tecla, para regresar al MENU principal presione '0'";
        cin >> salir;
        
    }while(salir != 0);
}

int main(){
	int opc = 0;
	
    do{
        limpiar_pantalla();
        cout << "*********************** MENU PRINCIPAL *****************************\n\n\n\n\n";
        cout << "\t\t\t1 Prueba\n";
        cout << "\t\t\t0 Salir\n";
        cout << "\n\n\n\t\t\t Option: ";
        cin >> opc;
        switch(opc){
            case 1:
                FN_Prueba();
                break;
        }
    }while(opc != 0);

	system("cls");
	gotoxy(40,9); cout<<"--------------------------------------"; gotoxy(40,11); cout<<"--------------------------------------"; 
		gotoxy(40,10); cout<<"Gracias por utilizar nuestro programa";
		getch();
    return 0;
}
