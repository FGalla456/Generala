#ifndef JUEGO_H_INCLUDED
#define JUEGO_H_INCLUDED
#include "Grafica.h"

void CantidadDeJugadores(int *Cant,bool *flag,int *C)
{
    int CJ,A;

        if(*C==1){
        while (*C==1){
        system("cls");
        recuadro(28, 6, 63, 9, cROJO_CLARO, cAZUL);
        textcolor(cROJO_CLARO, cAZUL);
        gotoxy(30,8);
        cout << "\250""Esta Seguro de que Quiere Cambiar la Cantidad de Jugadores?" << endl;
        gotoxy(55,11);
        cout << "1) Si" << endl;
        gotoxy(55,13);
        cout << "2) No" << endl;

        recuadro(40, 16, 32, 4, cROJO_CLARO, cAZUL);
        textcolor(cROJO_CLARO, cAZUL);
        gotoxy(45,18);
        cout <<"Ingrese una Opcion: ";
        cin >> A;


         if(A==1){
            *flag=false;
            *C=2;
         }
         else{
            if(A==2){
             *C=2;

            }
            else{
                system("cls");
                recuadro(42, 11, 33, 4, cROJO_CLARO, cAZUL);
                textcolor(cROJO_CLARO, cAZUL);
                gotoxy(45,13);
                cout << "Ingrese una Opcion Correcta" << endl;
                system("pause");
            }
         }
        }
        *C=1;
        }

        while(*flag==false)
        {
            system("cls");

            recuadro(40, 4, 22, 6, cROJO_CLARO, cAZUL);
            textcolor(cROJO_CLARO, cAZUL);

            gotoxy(45,6);
            cout << " 1 Jugador" << endl;
            gotoxy(45,8);
            cout << " 2 Jugadores" << endl;

            recuadro(35, 16, 32, 4, cROJO_CLARO, cAZUL);
            textcolor(cROJO_CLARO, cAZUL);

            gotoxy(40,18);
            cout << "Ingrese la Cantidad: " << endl;
            gotoxy(63,18);
            cin >>CJ;

            if(CJ==1 || CJ==2)
            {
                *flag=true;
                *Cant=CJ;
                *C=1;
            }
            else
            {
                system("cls");
                recuadro(42, 11, 19, 4, cROJO_CLARO, cAZUL);
                textcolor(cROJO_CLARO, cAZUL);
                gotoxy(45,13);
                cout << "Ingrese 1 o 2" << endl << endl << endl << endl;
                getch();
            }
        }
        }

void NombreDeLosJugadores(char *Nomb,char *Nomb2,bool *flag,int Cant)
    {
        if (Cant==1){
        recuadro(20, 10, 70, 4, cBLANCO, cAZUL_CLARO);
        textcolor(cBLANCO, cAZUL_CLARO);
        gotoxy(25,12);
        cout << "Ingrese el Nombre del Jugador : ";
        fflush(stdin);
        cin.getline(Nomb,49);



        *flag=true;
        gotoxy(16,35);
       system("pause");
        }
    else{
        if (Cant==2){
        recuadro(20, 6, 70, 4, cBLANCO, cAZUL_CLARO);
        textcolor(cBLANCO, cAZUL_CLARO);
        gotoxy(25,8);
        cout << "Ingrese el Nombre del Jugador 1: ";
        fflush(stdin);
        cin.getline(Nomb,49);

        cout << endl;

        recuadro(20, 16,70, 4, cAZUL, cAMARILLO);
        textcolor(cAZUL, cAMARILLO);
        gotoxy(25,18);
        cout << "Ingrese el Nombre del Jugador 2: ";
        fflush(stdin);
        cin.getline(Nomb2,49);
        *flag=true;
        }
    }
    }

    void TirarDados1(int *Dad,int Tam, bool *flag,char *Nombre,int Ronda,int Puntos){
        system("color 21");
        int Corte=0,i,CD,e,Vec[5],T;

        ///X= Maneja la Posicion Cuadrado del Dado
        ///Y= Maneja la Posicion del Contenido del Dado

        while(Corte!=3){
               system("cls");
            system("color 21");
            Corte++;
            recuadro(10, 0, 100, 4, cBLANCO, cAZUL_CLARO);
            textcolor(cBLANCO, cAZUL_CLARO);
            gotoxy(11,2);
            cout << "Jugador: " << Nombre;
            gotoxy(45,2);
            cout << "Ronda: " << Ronda;
            gotoxy(70,2);
            cout << "Tiro: " << Corte;
            gotoxy(90,2);
            cout << "Puntos: " << Puntos;


               int x=10,y=15;

            if(Corte==1){ ///Primera Tirada. Todos los Dados se Tiran
                for(i=0; i<Tam; i++){
                    Dad[i] = (rand()%6)+1;
                }
            }
            else{ ///2º y 3º Tirada. Solo se Vuelven a Tirar los Dados que se Ingresan
                    *flag=false;
                for(T=0;T<CD;T++){
                    Dad[Vec[T]-1]=(rand()%6)+1;
                }
            }

       for(i=0; i<Tam; i++){///Acomoda Los Dados en Pantalla

            recuadro(x, 6, 10, 4, cNEGRO, cBLANCO);
            textcolor(cNEGRO, cBLANCO);

            gotoxy(x,12);
            cout << "Dado " << i+1 << endl<< endl << endl;

switch(Dad[i]){ ///Pone el Contenido Adentro del Dado
case 1:
gotoxy(y,8);
 cout <<  "\376" << endl;

    break;

    case 2:

y-=4;
gotoxy(y,7);
 cout <<     " \376       " << endl;

gotoxy(y,9);
 cout <<     "       \376 " << endl;
y+=4;
    break;

    case 3:
y-=4;

gotoxy(y,7);
 cout <<     " \376       " << endl;
gotoxy(y,8);
 cout <<     "    \376    " << endl;
gotoxy(y,9);
 cout <<     "       \376 " << endl;
y+=4;
    break;

    case 4:
y-=4;
gotoxy(y,7);
 cout <<     " \376     \376 " << endl;

gotoxy(y,9);
 cout <<     " \376     \376 " << endl;
y+=4;
    break;

    case 5:

y-=4;
gotoxy(y,7);
 cout <<     " \376     \376 " << endl;
gotoxy(y,8);
 cout <<     "    \376    " << endl;
gotoxy(y,9);
 cout <<     " \376     \376 " << endl;
y+=4;
    break;

    case 6:

y-=4;
gotoxy(y,7);
 cout <<     " \376     \376 " << endl;
gotoxy(y,8);
 cout <<     " \376     \376 " << endl;
gotoxy(y,9);
 cout <<     " \376     \376 " << endl;
y+=4;
    break;

}
y+=20;
x+=20;


        getch();
       }
       cout << endl << endl << endl << endl << endl << endl;
       if(Corte<=2){
       cout << "\250" "Cuantos Dados Quiere Cambiar?: ";
       cin  >> CD;
       if(CD==0){
        Corte=3;
       }
       else{
            for(e=0;e<CD;e++){ ///Guarda el\los Dados que se Vuelven a Tirar
                cout << "Ingrese el Dado que Se Volvera a Tirar: ";
                cin >> Vec[e];

            }
            }
       }

       getch();
    }
    cout << "Termino La Ronda" << endl;
    system ("pause");
    }

    void TirarDados2(int *Dad,int Tam, bool *flag,char *Nombre,int Ronda,int Puntos){

        int Corte=0,i,CD,e,Vec[5],T;

        ///X= Maneja la Posicion Cuadrado del Dado
        ///Y= Maneja la Posicion del Contenido del Dado

        while(Corte!=3){
            system("cls");
            system("color 49");
            Corte++;
            recuadro(10, 0, 100, 4, cAZUL, cAMARILLO);
            textcolor(cAZUL, cAMARILLO);
            gotoxy(11,2);
            cout << "Jugador: " << Nombre;
            gotoxy(45,2);
            cout << "Ronda: " << Ronda;
            gotoxy(70,2);
            cout << "Tiro: " << Corte;
            gotoxy(90,2);
            cout << "Puntos: " << Puntos;

               int x=10,y=15;

            if(Corte==1){ ///Primera Tirada. Todos los Dados se Tiran
                for(i=0; i<Tam; i++){
                    Dad[i] = (rand()%6)+1;
                }
            }
            else{ ///2º y 3º Tirada. Solo se Vuelven a Tirar los Dados que se Ingresan
                    *flag=false;
                for(T=0;T<CD;T++){
                    Dad[Vec[T]-1]=(rand()%6)+1;
                }
            }

            for(i=0; i<Tam; i++){///Acomoda Los Dados en Pantalla

            recuadro(x, 6, 10, 4, cNEGRO, cBLANCO);
            textcolor(cNEGRO, cBLANCO);

            gotoxy(x,12);
            cout << "Dado " << i+1 << endl<< endl << endl;

switch(Dad[i]){ ///Pone el Contenido Adentro del Dado
case 1:
gotoxy(y,8);
 cout <<  "\376" << endl;

    break;

    case 2:

y-=4;
gotoxy(y,7);
 cout <<     " \376       " << endl;

gotoxy(y,9);
 cout <<     "       \376 " << endl;
y+=4;
    break;

    case 3:
y-=4;

gotoxy(y,7);
 cout <<     " \376       " << endl;
gotoxy(y,8);
 cout <<     "    \376    " << endl;
gotoxy(y,9);
 cout <<     "       \376 " << endl;
y+=4;
    break;

    case 4:
y-=4;
gotoxy(y,7);
 cout <<     " \376     \376 " << endl;

gotoxy(y,9);
 cout <<     " \376     \376 " << endl;
y+=4;
    break;

    case 5:

y-=4;
gotoxy(y,7);
 cout <<     " \376     \376 " << endl;
gotoxy(y,8);
 cout <<     "    \376    " << endl;
gotoxy(y,9);
 cout <<     " \376     \376 " << endl;
y+=4;
    break;

    case 6:

y-=4;
gotoxy(y,7);
 cout <<     " \376     \376 " << endl;
gotoxy(y,8);
 cout <<     " \376     \376 " << endl;
gotoxy(y,9);
 cout <<     " \376     \376 " << endl;
y+=4;
    break;


}
y+=20;
x+=20;


        getch();
       }
       cout << endl << endl << endl << endl << endl << endl;
       if(Corte<=2){
       cout << "\250" "Cuantos Dados Quiere Cambiar?: ";
       cin  >> CD;
       if(CD==0){
        Corte=3;
       }
       else{
            for(e=0;e<CD;e++){ ///Guarda el\los Dados que se Vuelven a Tirar
                cout << "Ingrese el Dado que Se Volvera a Tirar: ";
                cin >> Vec[e];

            }
            }
       }

       getch();
    }
    cout << "Termino La Ronda" << endl;
    system ("pause");
    }

void Ganador(int Puntos1,int Puntos2,char *Nombre1,char *Nombre2){
    system("cls");
    if(Puntos1>Puntos2){
            system("color 21");
        recuadro(35, 14, 50, 4, cBLANCO, cAZUL_CLARO);
        textcolor(cBLANCO, cAZUL_CLARO);
        gotoxy(40,16);
        cout << "Gano el Jugador: " << Nombre1;
        gotoxy(45,18);
        cout << "Obtuvo: " << Puntos1 << " Puntos" << endl;
    }
    if(Puntos2>Puntos1){
        system("color 49");
        recuadro(35, 14,50, 4, cAZUL, cAMARILLO);
        textcolor(cAZUL, cAMARILLO);
        gotoxy(40,16);
        cout << "Gano el Jugador: " << Nombre2;
        gotoxy(45,18);
        cout << "Obtuvo: " << Puntos2 << " Puntos" << endl;
    }
gotoxy(40,22);
system("pause");


}


#endif // JUEGO_H_INCLUDED
