#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;

#include "funciones.h"

int main ()
{
    setlocale(LC_ALL, "Spanish");

char Menu='S',Confirmacion;
int Seleccion;
bool estadisticas=false;
string Nombre1,Nombre2,Ganador;



 while (Menu=='S'){
         system("cls");
            cout<<"                                                GRAN CERDO"<<endl;
            cout << " -------------------------------------------------------------------------------------------------------" <<endl;
            cout <<"\t1- JUGAR"<<endl;
            cout <<"\t2- ESTADISTICAS"<<endl;
            cout <<"\t3- CREDITOS"<<endl;
            cout <<"\t4- COMO JUGAR"<<endl;
            cout << " -------------------------------------------------------------------------------------------------------"<<endl;
            cout << "0-SALIR"<<endl;
        cin>>Seleccion;
        while (Seleccion>4 || Seleccion<0){
            cout << "Este número es inválido, por favor seleccione otro." << endl;
            cin >> Seleccion;
        }


        switch (Seleccion){
        case 0:
            cout << "¿Cerrar el juego?" << endl;
            cin >> Confirmacion;
            if (Confirmacion == 'n' || Confirmacion=='N')
                break;
            else{
                return 0;
            }
            break;

        case 1:

            system("cls");
        cout<<"                                                GRAN CERDO"<<endl;
        cout << " -------------------------------------------------------------------------------------------------------" <<endl;
        cout << " Antes de comenzar a jugar debe registar los nombres de los jugadores: "<< endl<<endl;
        cout<<" Ingrese el nombre del jugador 1:    ";
        cin.ignore();
        getline(cin,Nombre1);
        cout<<" Ingrese el nombre del jugador 2:    ";
        getline(cin,Nombre2);
        cout<<"¿Empezar la partida(S/N)?"<<endl;
        cin>>Confirmacion;
            if(Confirmacion=='S'||Confirmacion=='s'){
                       //ACA VA TODO EL JUEGO
                       }
                       else{
                            break;
                       }

            break;

        case 2:
            if (estadisticas==false){
                system("cls");
                cout<<"                                                GRAN CERDO"<<endl;
                cout << " -------------------------------------------------------------------------------------------------------" <<endl;
                cout << "Todavia no se ha jugado ninguna partida " << endl;
                cout << "Presione cualquier tecla para volver al menu..";
                system("pause>nul");
                break;
            }
            break;

        case 3:
            system("cls");
        cout<<"                                                GRAN CERDO"<<endl;
        cout << " -------------------------------------------------------------------------------------------------------" <<endl;
            cout <<"TOMAS ZORIA - Legajo: 29944"<<endl;
            cout << "Presione cualquier tecla para volver al menu..";
            system("pause>nul");

                break;
        case 4:
            system("cls");
        cout<<"                                                GRAN CERDO"<<endl;
        cout << " -------------------------------------------------------------------------------------------------------" <<endl;
        cout << " - Si las caras son distintas entre sí y ninguna de ellas es un as: El cerdo acumula trufas al puntaje de la ronda por un valor equivalente a la suma de las caras." << endl;
        cout << " - Si las caras son iguales entre sí y no son ases: Entonces el cerdo hizo un Oink y  acumula trufas por el doble de la suma de las caras al total de la ronda." << endl;
        cout << " - Si las caras son distintas entre sí y hay un as entre ellas: Pierde todas las trufas que venía acumulando en la ronda actual y automáticamente le cede el turno al otro cerdo." << endl;
        cout << " - Si dos de las caras son iguales entre sí y son ases: El cerdo se hunde en el barro y pierde todas las trufas que venía acumulando en las rondas anteriores y la actual; y automáticamente le cede el turno al otro cerdo." << endl;
        cout << " - Si se está lanzando con tres dados y tres de las caras son iguales entre sí y son ases: Aplica la misma quita de puntos que en el caso anterior pero dichos puntos se acumulan al otro cerdo en dicha ronda." << endl<<endl;
            cout << "Presione cualquier tecla para volver al menu..";
        system("pause>nul");
        }
 }

return 0;
}
