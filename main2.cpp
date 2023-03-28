#include <iostream>
#include <string>
#include <stdio.h>



using namespace std;

struct info
{
string nombre;
};

int main()
{
    int i;
    int opcion;
    info citas [1];
    int op=1;

   while (op==1)
   {
        cout << "Bienvenido al odontologo Caloch UwU" << endl;
        cout << "presione 1 si quiere agendar una cita" << endl;
        cout << "presione 2 para mostrar la lista de citas vigentes" << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
        for(i=0;i<1;i++)
        {
                system("CLS");//limpiar pantalla
                cout << "ingrese nombre del paciente" << endl;
                cin.ignore();
                getline(cin, citas[i].nombre);
                 
            } 
            
                    break;
    case 2:
    
  system("cls");
            for(i=0;i<1;i++)
            {
                cout << " " << endl;
                cout << "cita N." << i+1 << endl;
                cout << "nombre del paciente: " << citas[i].nombre << endl;
                cout << " " << endl;
            }
            break;
    case 3:
    op=2;
    break;
    
        }
        }
}
                    
                    
                    
                    
                    