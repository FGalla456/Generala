#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <pthread.h>
#include "FuncionesGraficas.h"
#include "Juego.h"
#include "Jugadas.h"
#include "Grafica.h"
#include "Inicio.h"

int main()
{
    int X;///Caratula
    int Opcion,Izquierda,Derecha,Reloj;                                                                    /// Menu General
    int CJ,XD=0,Das;                                                                                           /// Case 1: Cantidad de Jugadores
    char Nombre[50],Nombre2[50];                                                                           /// Case 2: Nombre de los jugadores
    int R,Dados1[5],Cod,Gano2;                                                                             /// Case 3: Entrar al Juego (1 Jugador)
    bool Servido=true,Gano=false,CW=false;                                                                 /// Case 3: Entrar al Juego (1 Jugador)
    int Dados2[5];                                                                                         /// Case 3: Entrar al Juego (2 Jugadores)

    int Opcion2;                                                                                           /// Case 4: Reglas
    int Inservible;                                                                                        /// Case 5: Valoracion de las Jugadas
    bool Ver=false,NJ=false,Jugado=false;                                                                  /// Comprobacion De Arranque del Juego
    int  U=0,D=0,T=0,Cu=0,Ci=0,S=0,E=0,F=0,P=0,G=0;                                                        /// Acumulador de Puntos (Se Reinicia)
    int  U1=0,D1=0,T1=0,Cu1=0,Ci1=0,S1=0,E1=0,F1=0,P1=0,G1=0;                                              /// Acumulador de Puntos J1(No Se Reinicia)
    bool u=false,d=false,t=false,cu=false,ci=false,s=false,e=false,f=false,p=false,g=false;                /// Verificador de Uso J1

    int  U2=0,D2=0,T2=0,Cu2=0,Ci2=0,S2=0,E2=0,F2=0,P2=0,G2=0;                                              /// Acumulador de Puntos J2(No Se Reinicia)
    bool V2[10];
///    bool u1=false,d1=false,t1=false,cu1=false,ci1=false,s1=false,e1=false,f1=false,p1=false,g1=false;   /// Verificador de Uso J2
    int PuntosTotales=0, PuntosTotales2=0;



    ///caratula(X);

    srand(time(NULL));
    while(true)
    {


for (Das=0;Das<=10;Das++){
    V2[Das]=false;
}
        system("color 34");
        system ("cls");

       //pthread_create() //Menu(Opcion);

   ///  TiempoAbierto(Reloj);


        DadoIzquierda(Izquierda);

        DadoDerecha(Derecha);

        Opcion=Menu(Opcion);


        system ("cls");

        switch(Opcion)
        {
        case 1:


           CantidadDeJugadores(&CJ,&Ver,&XD);
            break;

        case 2:
            if(Ver==true)
            {
                NombreDeLosJugadores(&Nombre[50],&Nombre2[50],&NJ,CJ);
            }
            else
            {
                cout << "No se Ingreso Cantidad De Jugadores" << endl;
                system("pause");
            }
            break;
        case 3:


             if(Ver==true && NJ==true)
             {
              Jugado=true;
                 if(CJ==1){
                     for(R=1;R<=10;R++){
                            if(Gano==false){

                     TirarDados1(Dados1,5,&Servido,&Nombre[50],R,PuntosTotales);
                     Uno(Dados1,&U);
                     Dos(Dados1,&D);
                     Tres(Dados1,&T);
                     Cuatro(Dados1,&Cu);
                     Cinco(Dados1,&Ci);
                     Seis(Dados1,&S);
                     Escalera(Dados1,&E,&Servido);
                     Full(Dados1,&F,&Servido);
                     Poker(Dados1,&P,&Servido);
                     Generala(Dados1,&G,&Servido,&Gano);
                     system("cls");

                    while(CW==false){
                    Cod=PosiblesPuntos(&U,&D,&T,&Cu,&Ci,&S,&E,&F,&P,&G,Cod,&u,&d,&t,&cu,&ci,&s,&e,&f,&p,&g);
                    switch(Cod){

                    case 1: ///Uno
                        if(u==false){
                            PuntosTotales+=U;
                            u=true;
                            CW=true;
                            U1=U;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 2: ///Dos
                        if(d==false){
                            PuntosTotales+=D;
                            CW=true;
                             d=true;
                             D1=D;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 3: ///Tres
                        if(t==false){
                            PuntosTotales+=T;
                        CW=true;
                         t=true;
                         T1=T;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 4: ///Cuatro
                        if(cu==false){
                            PuntosTotales+=Cu;
                        CW=true;
                         cu=true;
                        Cu1=Cu;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 5: ///Cinco
                        if(ci==false){
                            PuntosTotales+=Ci;
                        CW=true;
                        ci=true;
                        Ci1=Ci;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 6: ///Seis
                        if(s==false){
                            PuntosTotales+=S;
                        CW=true;
                         s=true;
                         S1=S;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 7: ///Escalera
                        if(e==false){
                            PuntosTotales+=E;
                        CW=true;
                         e=true;
                         E1=E;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 8: ///Full
                        if(f==false){
                            PuntosTotales+=F;
                        CW=true;
                         f=true;
                         F1=F;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 9: ///Poker
                        if(p==false){
                            PuntosTotales+=P;
                        CW=true;
                         p=true;
                         P1=P;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 10: ///Generala
                        if(g==false){
                        PuntosTotales+=G;
                        CW=true;
                         g=true;
                        G1=G;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    default:
                        cout << "Ingrese un Codigo Correcto" << endl;
                        break;

                    }
                    }


                            }
                    U=0,D=0,T=0,Cu=0,Ci=0,S=0,E=0,F=0,P=0,G=0;
                    CW=false;
                     }
                    Ganador(PuntosTotales,PuntosTotales2,&Nombre[50],&Nombre2[50]);
                 }
                 if(CJ==2){
                    for(R=1;R<=10;R++){
                    if(Gano==false){
                    ///Jugador 1
                     TirarDados1(Dados1,5,&Servido,&Nombre[50],R,PuntosTotales);
                     Uno(Dados1,&U);
                     Dos(Dados1,&D);
                     Tres(Dados1,&T);
                     Cuatro(Dados1,&Cu);
                     Cinco(Dados1,&Ci);
                     Seis(Dados1,&S);
                     Escalera(Dados1,&E,&Servido);
                     Full(Dados1,&F,&Servido);
                     Poker(Dados1,&P,&Servido);
                     Generala(Dados1,&G,&Servido,&Gano);
                     if(Gano==true){
                        Gano2=1;
                     }
                     system("cls");

                    while(CW==false){
                    Cod=PosiblesPuntos(&U,&D,&T,&Cu,&Ci,&S,&E,&F,&P,&G,Cod,&u,&d,&t,&cu,&ci,&s,&e,&f,&p,&g);
                    switch(Cod){

                    case 1: ///Uno
                        if(u==false){
                            PuntosTotales+=U;
                            u=true;
                            CW=true;
                            U1=U;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 2: ///Dos
                        if(d==false){
                            PuntosTotales+=D;
                            CW=true;
                             d=true;
                             D1=D;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 3: ///Tres
                        if(t==false){
                            PuntosTotales+=T;
                        CW=true;
                         t=true;
                         T1=T;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 4: ///Cuatro
                        if(cu==false){
                            PuntosTotales+=Cu;
                        CW=true;
                         cu=true;
                        Cu1=Cu;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 5: ///Cinco
                        if(ci==false){
                            PuntosTotales+=Ci;
                        CW=true;
                        ci=true;
                        Ci1=Ci;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 6: ///Seis
                        if(s==false){
                            PuntosTotales+=S;
                        CW=true;
                         s=true;
                         S1=S;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 7: ///Escalera
                        if(e==false){
                            PuntosTotales+=E;
                        CW=true;
                         e=true;
                         E1=E;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 8: ///Full
                        if(f==false){
                            PuntosTotales+=F;
                        CW=true;
                         f=true;
                         F1=F;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 9: ///Poker
                        if(p==false){
                            PuntosTotales+=P;
                        CW=true;
                         p=true;
                         P1=P;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 10: ///Generala
                        if(g==false){
                        PuntosTotales+=G;
                        CW=true;
                         g=true;
                        G1=G;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    default:
                        cout << "Ingrese un Codigo Correcto" << endl;
                        break;

                    }
                    }

                    U=0,D=0,T=0,Cu=0,Ci=0,S=0,E=0,F=0,P=0,G=0;
                    CW=false;

                    ///Jugador 2
                     TirarDados2(Dados2,5,&Servido,&Nombre2[50],R,PuntosTotales2);
                     Uno(Dados2,&U);
                     Dos(Dados2,&D);
                     Tres(Dados2,&T);
                     Cuatro(Dados2,&Cu);
                     Cinco(Dados2,&Ci);
                     Seis(Dados2,&S);
                     Escalera(Dados2,&E,&Servido);
                     Full(Dados2,&F,&Servido);
                     Poker(Dados2,&P,&Servido);
                     Generala(Dados2,&G,&Servido,&Gano);
                     if(Gano==true){
                        Gano2=2;
                     }
                     system("cls");
                    while(CW==false){
                    Cod=PosiblesPuntos2(&U,&D,&T,&Cu,&Ci,&S,&E,&F,&P,&G,Cod,V2/*&u1,&d1,&t1,&cu1,&ci1,&s1,&e1,&f1,&p1,&g1*/);
                    switch(Cod){

                    case 1: ///Uno
                        if(V2[0]==false){
                            PuntosTotales2+=U;
                            V2[0]=true;
                            CW=true;
                            U2=U;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 2: ///Dos
                        if(V2[1]==false){
                            PuntosTotales2+=D;
                            CW=true;
                             V2[1]=true;
                             D2=D;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 3: ///Tres
                        if(V2[2]==false){
                            PuntosTotales2+=T;
                        CW=true;
                         V2[2]=true;
                         T2=T;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 4: ///Cuatro
                        if(V2[3]==false){
                            PuntosTotales2+=Cu;
                        CW=true;
                        V2[3]=true;
                        Cu2=Cu;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 5: ///Cinco
                        if(V2[4]==false){
                            PuntosTotales2+=Ci;
                        CW=true;
                        V2[4]=true;
                        Ci2=Ci;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 6: ///Seis
                        if(V2[5]==false){
                            PuntosTotales2+=S;
                        CW=true;
                         V2[5]=true;
                         S2=S;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 7: ///Escalera
                        if(V2[6]==false){
                            PuntosTotales2+=E;
                        CW=true;
                         V2[6]=true;
                         E2=E;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 8: ///Full
                        if(V2[7]==false){
                            PuntosTotales2+=F;
                        CW=true;
                         V2[7]=true;
                         F2=F;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 9: ///Poker
                        if(V2[8]==false){
                            PuntosTotales2+=P;
                        CW=true;
                         V2[8]=true;
                         P2=P;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    case 10: ///Generala
                        if(V2[9]==false){
                        PuntosTotales2+=G;
                        CW=true;
                        V2[9]=true;
                        G2=G;
                        }
                        else{
                            cout << "Este Codigo Ya Fue Usado " << endl;
                            system("pause");
                        }
                        break;

                    default:
                        cout << "Ingrese un Codigo Correcto" << endl;
                        break;

                    }
                    }
                    }

                U=0,D=0,T=0,Cu=0,Ci=0,S=0,E=0,F=0,P=0,G=0;
                    CW=false;

                            }

                    Ganador(PuntosTotales,PuntosTotales2,&Nombre[50],&Nombre2[50]);
                    }


             else
             {
                 system("color 34");
                 if(Ver==false)
                 {
                recuadro(32, 6, 40, 4, cROJO_CLARO, cAZUL);
                textcolor(cROJO_CLARO, cAZUL);
                gotoxy(35,8);
                     cout << "No se Ingreso Cantidad De Jugadores" << endl << endl << endl;
                 }
                 else
                 {
                     if(Ver==true && NJ==false){
                recuadro(32, 6, 45, 4, cROJO_CLARO, cAZUL);
                textcolor(cROJO_CLARO, cAZUL);
                gotoxy(35,8);
                     cout << "No se Ingreso el Nombre de los Jugadores" << endl;
                 }
             }
             }
             gotoxy(33,15);
             system("pause");
             }
            break;

        case 4:

            Reglas(Opcion2);

            system("pause");
            break;

        case 5:
            ValorDeLasJugadas();
            break;

        case 6:
            if(Ver==true && NJ==true && Jugado==true)
             {
            if(CJ==1){
            TotaldePuntos(&U1,&D1,&T1,&Cu1,&Ci1,&S1,&E1,&F1,&P1,&G1,PuntosTotales,&Nombre[50]);

            }
            if(CJ==2){
                if(PuntosTotales<PuntosTotales2){
                TotaldePuntos(&U2,&D2,&T2,&Cu2,&Ci2,&S2,&E2,&F2,&P2,&G2,PuntosTotales2,&Nombre2[50]);
                }
                else{
                  TotaldePuntos(&U1,&D1,&T1,&Cu1,&Ci1,&S1,&E1,&F1,&P1,&G1,PuntosTotales,&Nombre[50]);

                }

            }
            }
            else {
                system("color 34");
            recuadro(35, 6, 40, 4, cROJO_CLARO, cAZUL);
            textcolor(cROJO_CLARO, cAZUL);
            gotoxy(40,8);
            cout << "Todavia no se Jugo una Partida" << endl;
            gotoxy(35,13);
            system("pause");
            }
            break;

        case 8:
    XD=0;                                                                                   /// Case 1: Cantidad de Jugador
    Servido=true,Gano=false,CW=false;                                                       /// Case 3: Entrar al Juego (1 Jugador)
    Ver=false,NJ=false;                                                                     /// Comprobacion De Arranque del Juego
    U=0,D=0,T=0,Cu=0,Ci=0,S=0,E=0,F=0,P=0,G=0;                                              /// Acumulador de Puntos
    u=false,d=false,t=false,cu=false,ci=false,s=false,e=false,f=false,p=false,g=false;      /// Verificador de Uso
    U2=0,D2=0,T2=0,Cu2=0,Ci2=0,S2=0,E2=0,F2=0,P2=0,G2=0;                                    /// Acumulador de Puntos J2(No Se Reinicia)
//    u1=false,d1=false,t1=false,cu1=false,ci1=false,s1=false,e1=false,f1=false,p1=false,g1=false;
    PuntosTotales=0,PuntosTotales2=0;

            break;

        case 0:
            system("PAUSE > NULL");
            return 0;

            break;

        default:
            system("color 34");
            recuadro(3, 6, 110, 4, cROJO_CLARO, cAZUL);
            textcolor(cROJO_CLARO, cAZUL);
            gotoxy(6,8);
            cout << "Telecom Informa que la Siguiente Caracteristica es Inexistente Consulte Llamando al *110, Muchas Gracias." << endl;
            gotoxy(35,13);
            system("pause");
            break;
        }
    }


}

