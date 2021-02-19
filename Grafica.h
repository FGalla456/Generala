#ifndef GRAFICA_H_INCLUDED
#define GRAFICA_H_INCLUDED
#include <windows.h>


void DadoIzquierda(int Izquierda){

    Izquierda=(rand()%6)+1;

switch(Izquierda){

    case 1:
 recuadro(14, 12, 10, 4, cNEGRO, cBLANCO);
textcolor(cNEGRO, cBLANCO);

gotoxy(15,14);
 cout <<     "    \376  " << endl;

    break;

    case 2:
 recuadro(14, 12, 10, 4, cNEGRO, cBLANCO);
textcolor(cNEGRO, cBLANCO);

gotoxy(15,13);
 cout <<     " \376       " << endl;

gotoxy(15,15);
 cout <<     "       \376 " << endl;

    break;

    case 3:
 recuadro(14, 12, 10, 4, cNEGRO, cBLANCO);
textcolor(cNEGRO, cBLANCO);

gotoxy(15,13);
 cout <<     " \376       " << endl;
gotoxy(15,14);
 cout <<     "    \376    " << endl;
gotoxy(15,15);
 cout <<     "       \376 " << endl;

    break;

    case 4:
 recuadro(14, 12, 10, 4, cNEGRO, cBLANCO);
textcolor(cNEGRO, cBLANCO);

gotoxy(15,13);
 cout <<     " \376     \376 " << endl;

gotoxy(15,15);
 cout <<     " \376     \376 " << endl;

    break;

    case 5:
 recuadro(14, 12, 10, 4, cNEGRO, cBLANCO);
textcolor(cNEGRO, cBLANCO);

gotoxy(15,13);
 cout <<     " \376     \376 " << endl;
gotoxy(15,14);
 cout <<     "    \376    " << endl;
gotoxy(15,15);
 cout <<     " \376     \376 " << endl;

    break;

    case 6:
recuadro(14, 12, 10, 4, cNEGRO, cBLANCO);
textcolor(cNEGRO, cBLANCO);

gotoxy(15,13);
 cout <<     " \376     \376 " << endl;
gotoxy(15,14);
 cout <<     " \376     \376 " << endl;
gotoxy(15,15);
 cout <<     " \376     \376 " << endl;

    break;
}
}
void DadoDerecha(int Derecha){

       Derecha=(rand()%6)+1;

switch(Derecha){

    case 1:
 recuadro(84, 12, 10, 4, cNEGRO, cBLANCO);
textcolor(cNEGRO, cBLANCO);

gotoxy(85,14);
 cout <<     "    \376   " << endl;

    break;

    case 2:
 recuadro(84, 12, 10, 4, cNEGRO, cBLANCO);
textcolor(cNEGRO, cBLANCO);


gotoxy(85,13);
 cout <<     " \376       " << endl;

gotoxy(85,15);
 cout <<     "       \376 " << endl;

    break;

    case 3:
 recuadro(84, 12, 10, 4, cNEGRO, cBLANCO);
textcolor(cNEGRO, cBLANCO);

gotoxy(85,13);
 cout <<     " \376       " << endl;
gotoxy(85,14);
 cout <<     "    \376    " << endl;
gotoxy(85,15);
 cout <<     "       \376 " << endl;

    break;

    case 4:
 recuadro(84, 12, 10, 4, cNEGRO, cBLANCO);
textcolor(cNEGRO, cBLANCO);

gotoxy(85,13);
 cout <<     " \376     \376 " << endl;

gotoxy(85,15);
 cout <<     " \376     \376 " << endl;

    break;

    case 5:
 recuadro(84, 12, 10, 4, cNEGRO, cBLANCO);
textcolor(cNEGRO, cBLANCO);

gotoxy(85,13);
 cout <<     " \376     \376 " << endl;
gotoxy(85,14);
 cout <<     "    \376    " << endl;
gotoxy(85,15);
 cout <<     " \376     \376 " << endl;

   break;

    case 6:
 recuadro(84, 12, 10, 4, cNEGRO, cBLANCO);
textcolor(cNEGRO, cBLANCO);

gotoxy(85,13);
 cout <<     " \376     \376 " << endl;
gotoxy(85,14);
 cout <<     " \376     \376 " << endl;
gotoxy(85,15);
 cout <<     " \376     \376 " << endl;

    break;

    }
}

int Menu(int Opcion){
int x;
        recuadro(34, 1, 40, 28, cROJO_CLARO, cAZUL);
        textcolor(cROJO_CLARO, cAZUL);

        gotoxy(35,1);
        gotoxy(35,2);
        cout<<"                 MENU                  "<<endl;
        gotoxy(35,3);
        cout<<"---------------------------------------"<<endl;
        gotoxy(35,4);
        cout<<"               GENERALA                "<<endl;
        gotoxy(35,6);
        cout<<" 1) Cantidad de Jugadores             "<<endl;
        gotoxy(35,8);
        cout<<" 2) Nombre de los Jugadores           "<<endl;
        gotoxy(35,10);
        cout<<" 3) Entrar al Juego                   "<<endl;
        gotoxy(35,12);
        cout<<" 4) Reglas del Juego                  "<<endl;
        gotoxy(35,14);
        cout<<" 5) Valoraciones de las Jugadas       "<<endl;
        gotoxy(35,16);
        cout<<" 6) Puntaje Mas Alto                 "<<endl;
        gotoxy(35,18);
        cout<<"                             "<<endl;
        gotoxy(35,20);
        cout<<" 8) REINICIAR TODO                  "<<endl;
        gotoxy(35,22);
        cout<<"                            "<<endl;
        gotoxy(35,24);
        cout<<" 0)       CIERRE DE PROGRAMA          "<<endl;
        gotoxy(35,28);
        cout << "Ingresar opcion: ";

        cin >> x;

        return x;
}

int PosiblesPuntos(int *U,int *D,int *T,int *Cu,int *Ci,int *S,int *E,int *F,int *P,int *G,int Cod,bool *u,bool *d,bool *t,bool *cu,bool *ci,bool *s,bool *e,bool *f,bool *p,bool *g){
system("color 9A");
    recuadro(34, 11, 43, 27, cAMARILLO, cGRIS);
        textcolor(cAMARILLO, cGRIS);

 gotoxy(35,12);
 cout << "COD |  NOMBRE   |      Posibles Puntos    " << endl;
 gotoxy(35,14);
 cout << "----|-----------|-------------------------" << endl;
 gotoxy(35,16);
 cout << " 1  |  Uno      |            " << *U << endl;
 if(*u==true){
gotoxy(80,16);
cout << " Ya usado " << endl;
 }

 gotoxy(35,18);
 cout << " 2  |  Dos      |            " << *D << endl;
if(*d==true){
gotoxy(80,18);
cout << " Ya usado " << endl;
 }

 gotoxy(35,20);
 cout << " 3  |  Tres     |            " << *T << endl;
if(*t==true){
gotoxy(80,20);
cout << " Ya usado " << endl;
 }
 gotoxy(35,22);
 cout << " 4  |  Cuatro   |            " << *Cu << endl;

if(*cu==true){
gotoxy(80,22);
cout << " Ya usado " << endl;
 }

 gotoxy(35,24);
 cout << " 5  |  Cinco    |            " << *Ci << endl;
if(*ci==true){
gotoxy(80,24);
cout << " Ya usado " << endl;
 }

 gotoxy(35,26);
 cout << " 6  |  Seis     |            " << *S << endl;

if(*s==true){
gotoxy(80,26);
cout << " Ya usado " << endl;
 }

 gotoxy(35,28);
 cout << " 7  |  Escalera |            " << *E << endl;

if(*e==true){
gotoxy(80,28);
cout << " Ya usado " << endl;
 }

 gotoxy(35,30);
 cout << " 8  |  Full     |            " << *F << endl;

if(*f==true){
gotoxy(80,30);
cout << " Ya usado " << endl;
 }

 gotoxy(35,32);
 cout << " 9  |  Poker    |            " << *P << endl;

if(*p==true){
gotoxy(80,32);
cout << " Ya usado " << endl;
 }

 gotoxy(35,34);
 cout << " 10 |  Generala |            " << *G << endl;

if(*g==true){
gotoxy(80,34);
cout << " Ya usado " << endl;
 }

 gotoxy(35,37);
 cout << "Ingrese el Codigo que va a Elegir: ";
 gotoxy(70,37);
 cin >> Cod;
 return Cod;
system("pause");
}

int PosiblesPuntos2(int *U,int *D,int *T,int *Cu,int *Ci,int *S,int *E,int *F,int *P,int *G,int Cod,bool *X/*bool *u1,bool *d1,bool *t1,bool *cu1,bool *ci1,bool *s1,bool *e1,bool *f1,bool *p1,bool *g1*/){
system("color 9A");
    recuadro(34, 11, 43, 27, cAMARILLO, cGRIS);
        textcolor(cAMARILLO, cGRIS);

 gotoxy(35,12);
 cout << "COD |  NOMBRE   |      Posibles Puntos    " << endl;
 gotoxy(35,14);
 cout << "----|-----------|-------------------------" << endl;
 gotoxy(35,16);
 cout << " 1  |  Uno      |            " << *U << endl;
 if(X[0]==true){
gotoxy(80,16);
cout << " Ya usado " << endl;
 }

 gotoxy(35,18);
 cout << " 2  |  Dos      |            " << *D << endl;
if(X[1]==true){
gotoxy(80,18);
cout << " Ya usado " << endl;
 }

 gotoxy(35,20);
 cout << " 3  |  Tres     |            " << *T << endl;
if(X[2]==true){
gotoxy(80,20);
cout << " Ya usado " << endl;
 }
 gotoxy(35,22);
 cout << " 4  |  Cuatro   |            " << *Cu << endl;

if(X[3]==true){
gotoxy(80,22);
cout << " Ya usado " << endl;
 }

 gotoxy(35,24);
 cout << " 5  |  Cinco    |            " << *Ci << endl;
if(X[4]==true){
gotoxy(80,24);
cout << " Ya usado " << endl;
 }

 gotoxy(35,26);
 cout << " 6  |  Seis     |            " << *S << endl;

if(X[5]==true){
gotoxy(80,26);
cout << " Ya usado " << endl;
 }

 gotoxy(35,28);
 cout << " 7  |  Escalera |            " << *E << endl;

if(X[6]==true){
gotoxy(80,28);
cout << " Ya usado " << endl;
 }

 gotoxy(35,30);
 cout << " 8  |  Full     |            " << *F << endl;

if(X[7]==true){
gotoxy(80,30);
cout << " Ya usado " << endl;
 }

 gotoxy(35,32);
 cout << " 9  |  Poker    |            " << *P << endl;

if(X[8]==true){
gotoxy(80,32);
cout << " Ya usado " << endl;
 }

 gotoxy(35,34);
 cout << " 10 |  Generala |            " << *G << endl;

if(X[9]==true){
gotoxy(80,34);
cout << " Ya usado " << endl;
 }

 gotoxy(35,37);
 cout << "Ingrese el Codigo que va a Elegir: ";
 gotoxy(70,37);
 cin >> Cod;
 return Cod;
system("pause");
}

int Reglas(int opcion2){
int opcion,Derecha,Izquierda;
while(true){

        system ("cls");
            system("color 24");
            DadoIzquierda(Izquierda);

            DadoDerecha(Derecha);

        recuadro(34, 3, 35, 16, cAMARILLO, cGRIS);
        textcolor(cAMARILLO, cGRIS);

    gotoxy(35,4);
    cout<<"              Reglas              "<<endl;
    gotoxy(35,5);
    cout<<"----------------------------------"<<endl;
    gotoxy(35,7);
    cout<<" 1) Introduccion                  "<<endl;
    gotoxy(35,9);
    cout<<" 2) Objetivo                      "<<endl;
    gotoxy(35,11);
    cout<<" 3) Comienzo                      "<<endl;
    gotoxy(35,13);
    cout<<" 4) Desarrollo                    "<<endl;
    gotoxy(35,16);
    cout<<" 0)      VOLVER AL MENU           "<<endl;
    gotoxy(35,18);
    cout << "Ingresar opcion: ";
    cin >> opcion;
    system("cls");
    switch(opcion){
    case 1:
        recuadro(19, 3, 87, 8, cROJO_CLARO, cBLANCO);
        textcolor(cROJO_CLARO, cBLANCO);

        gotoxy(20,4);
        cout << "                                    Introduccion:" << endl << endl;
        gotoxy(20,5);
        cout << "--------------------------------------------------------------------------------------"<<endl;
        gotoxy(20,7);
        cout << "La Generala es un juego de categorias interesante, en el que se utilizan cinco dados." << endl;
        gotoxy(20,8);
        cout << "Cada jugador tiene la posibilidad de tirar hasta 3 veces por ronda. " << endl;
        gotoxy(20,9);
        cout << "Luego de lo cual debe anotar el puntaje obtenido en alguna de las categorias o juegos." << endl << endl << endl << endl << endl;
         gotoxy(35,15);
         cout << "Pulse Cualquier Tecla Para Volver al Menu" << endl;
             system("PAUSE > NULL");
        break;

    case 2:
        recuadro(34, 3, 35, 5, cBLANCO, cROJO_CLARO);
        textcolor(cBLANCO, cROJO_CLARO);
        gotoxy(35,4);
        cout << "       Objetivo:" << endl << endl;
        gotoxy(35,5);
        cout<<"----------------------------------"<<endl;
        gotoxy(35,7);
        cout << "Lograr el maximo de puntaje." << endl << endl << endl << endl << endl;
         gotoxy(31,12);
         cout << "Pulse Cualquier Tecla Para Volver al Menu" << endl;
             system("PAUSE > NULL");
        break;

    case 3:
        recuadro(19, 3, 87, 8, cAMARILLO, cGRIS);
        textcolor(cAMARILLO, cGRIS);

        gotoxy(20,4);
        cout << "                                   Comienzo: " << endl << endl;
        gotoxy(20,5);
        cout << "--------------------------------------------------------------------------------------"<<endl;
        gotoxy(20,7);
        cout << "Cada jugador tira los cinco dados para determinar el orden del juego." << endl;
        gotoxy(20,8);
        cout << "Sale primero el que saca la suma mas baja, " << endl;
        gotoxy(20,9);
        cout << "El que obtiene la suma inmediatamente superior sigue asi sucesivamente." << endl;
        gotoxy(20,10);
        cout << "El orden sigue la direccion de las agujas del reloj." << endl << endl << endl << endl << endl;
        gotoxy(35,14);
        cout << "Pulse Cualquier Tecla Para Volver al Menu" << endl;
        system("PAUSE > NULL");
        break;

    case 4:
         recuadro(4, 3, 114, 21, cAMARILLO, cGRIS);
         textcolor(cAMARILLO, cGRIS);

         gotoxy(55,4);
         cout << "Desarrollo: " << endl << endl;
         gotoxy(5,5);
         cout << "-----------------------------------------------------------------------------------------------------------------"<<endl;
         gotoxy(5,7);
         cout << "Cada jugador puede hacer hasta tres tiros por turno." << endl;
         gotoxy(5,8);
         cout << "Hay diez vueltas por juego, excepto cuando un jugador hace generala servida." << endl;
         gotoxy(5,9);
         cout << "El participante debe hacer una categoria por vuelta." << endl;
         gotoxy(5,10);
         cout << "Por lo cual, al final del juego cada jugador tendra puntaje en cada una de las diez categorias." << endl;
         gotoxy(5,11);
         cout << "Aun cuando se trate de un numero en el cual ya haya hecho puntaje, se computara como generala servida." << endl;
         gotoxy(5,12);
         cout << "Si en su primer tiro el jugador hace un juego mayor, " << endl;
         gotoxy(5,13);
         cout << "Apartara el o los dados que desee conservar y hara su segundo tiro con los restantes." << endl;
         gotoxy(5,14);
         cout << "Si asi lo quiere, puede arrojar nuevamente los cinco dados, pues no esta obligado todavia a elegir una categoria" << endl;
         gotoxy(5,15);
         cout << "Del mismo modo, en su segundo tiro apartara los dados que le resulten mas convenientes" << endl;
         gotoxy(5,16);
         cout << "y tirara con los restantes por tercera y ultima vez." << endl;
         gotoxy(5,17);
         cout << "Luego que un dado ha sido apartado no se lo puede volver a usar." << endl;
         gotoxy(5,18);
         cout << "Si el jugador hace un juego mayor dentro de sus tres tiros, siempre que la categoria" << endl;
         gotoxy(5,19);
         cout << "Elegida este abierta, se anotara el puntaje en la casilla correspondiente." << endl;
         gotoxy(5,20);
         cout << "Si no hace un juego mayor en sus tres tiros, " << endl;
         gotoxy(5,21);
         cout << "Debe elegir una categoria de numeros (1 a 6) y anotar el puntaje en la casilla correspondiente." << endl;
         gotoxy(5,22);
         cout << "Despues que el jugador haya completado su vuelta y anotado su puntaje, " << endl;
         gotoxy(5,23);
         cout << "Pasa los dados al participante de su izquierda y el juego continua." << endl << endl << endl << endl << endl;
         gotoxy(35,27);
         cout << "Pulse Cualquier Tecla Para Volver al Menu" << endl;
        system("PAUSE > NULL");
        break;

    case 0:
    gotoxy(35,12);
    cout << "Pulse Cualquier Tecla Para Volver al Menu Principal" << endl;
       system("PAUSE > NULL");
       return 0;
        break;

    default:
        cout << "Telecom Informa que la Siguiente Caracteristica es Inexistente Consulte Llamando al *110, Gracias." << endl << endl << endl << endl << endl;
        system("PAUSE > NULL");
        break;
        system ("pause");

    }
}
}

void TiempoAbierto(int Reloj){
int H,M,S,MS,Derecha,Izquierda;
   /* gotoxy(35,2);
    ///cout << "Reloj";

   recuadro(5, 4, 30, 5, cAMARILLO, cGRIS);
        textcolor(cAMARILLO, cGRIS);

        gotoxy(7,6);
    cout << "Horas   Minutos   Segundos" << endl;*/

  /*  for(H=0;H<24;H++){

       for(M=0;M<60;M++){

            for(S=0;S<60;S++){*/

                while(true){


                DadoDerecha(Derecha);
                DadoIzquierda(Izquierda);
                Sleep(500);

                }

               /* for(MS=0;MS<600;MS++){





                    gotoxy(9,7);

                cout << H << "   :    " << M << "    :    " << S << endl << endl << endl;
   }
    }
    }
    }*/
}

void ValorDeLasJugadas(void){
system("color 5E");
    recuadro(34, 3, 43, 24, cAMARILLO, cGRIS);
        textcolor(cAMARILLO, cGRIS);

 gotoxy(35,4);
 cout << "NOMBRE   |      ARMADA    |    SERVIDA    " << endl;
 gotoxy(35,6);
 cout << "---------|----------------|---------------" << endl;
 gotoxy(35,8);
 cout << "Uno      |  Suma de los 1 sobre la Mesa  " << endl;
 gotoxy(35,10);
 cout << "Dos      |  Suma de los 2 sobre la Mesa  " << endl;
 gotoxy(35,12);
 cout << "Tres     |  Suma de los 3 sobre la Mesa  " << endl;
 gotoxy(35,14);
 cout << "Cuatro   |  Suma de los 4 sobre la Mesa  " << endl;
 gotoxy(35,16);
 cout << "Cinco    |  Suma de los 5 sobre la Mesa  " << endl;
 gotoxy(35,18);
 cout << "Seis     |  Suma de los 6 sobre la Mesa  " << endl;
 gotoxy(35,20);
 cout << "Escalera |      20        |       25     " << endl;
 gotoxy(35,22);
 cout << "Full     |      30        |       35     " << endl;
 gotoxy(35,24);
 cout << "Poker    |      40        |       45     " << endl;
 gotoxy(35,26);
 cout << "Generala |      60        |      GANA    " << endl;
gotoxy(35,29);
system("pause");

}

void TotaldePuntos(int *U1,int *D1,int *T1,int *Cu1,int *Ci1,int *S1,int *E1,int *F1,int *P1,int *G1,int Puntos,char *Nombre){
system("color 9A");
    recuadro(34, 1, 43, 30, cAMARILLO, cGRIS);
        textcolor(cAMARILLO, cGRIS);
 gotoxy(35,2);
 cout << "Jugador:                     " << Nombre;
 gotoxy(35,3);
cout << "------------------------------------------"<<endl;
 gotoxy(35,4);
 cout << "COD |  NOMBRE   |      Total de Puntos    " << endl;
 gotoxy(35,6);
 cout << "----|-----------|-------------------------" << endl;
 gotoxy(35,8);
 cout << " 1  |  Uno      |            " << *U1 << endl;
 gotoxy(35,10);
 cout << " 2  |  Dos      |            " << *D1 << endl;
 gotoxy(35,12);
 cout << " 3  |  Tres     |            " << *T1 << endl;
 gotoxy(35,14);
 cout << " 4  |  Cuatro   |            " << *Cu1 << endl;
 gotoxy(35,16);
 cout << " 5  |  Cinco    |            " << *Ci1 << endl;
 gotoxy(35,18);
 cout << " 6  |  Seis     |            " << *S1 << endl;
 gotoxy(35,20);
 cout << " 7  |  Escalera |            " << *E1 << endl;
 gotoxy(35,22);
 cout << " 8  |  Full     |            " << *F1 << endl;
 gotoxy(35,24);
 cout << " 9  |  Poker    |            " << *P1 << endl;
 gotoxy(35,26);
 cout << " 10 |  Generala |            " << *G1 << endl;
 gotoxy(35,27);
 cout << "------------------------------------------"<<endl;
 gotoxy(35,29);
 cout << "  X | Total:                 " << Puntos << endl;
 gotoxy(35,35);
system("pause");
}
#endif // GRAFICA_H_INCLUDED
