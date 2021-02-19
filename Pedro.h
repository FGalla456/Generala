#ifndef TIRADA_H_INCLUDED
#define TIRADA_H_INCLUDED

///declaro 5 acumuladores para la suma de los dados normales
///seguramente habra que hacer lo mismo para el del puntaje total

void()
if (flag == true) ///Este if lo uso para saber si la jugada fue armada o servida.
{
/// La parte verdadera es todo lo que seria servido
if(dado1<dado2 && dado2<dado3 && dado3<dado4 && dado4<dado5){ ///escalera
    escaleraservida+=25;
}
 /// Poker
 for(i=0;i<4;i++){
    if(dado[i]== dado[i+1])///Si el dado en la posicion i es igual al dado en la posicion i+1
        {
            cpoker++; /// igualar en algun lado a 0.
        }
 }
 if (cpoker == 4){
    pokerservido+=45;

 }
///full
for(i=0;i<4;i++){
    if (dado[i]== dado[i+1]){
        cfull++;
    }
    if(dado[i] %2 == 0){
        flagdado= true;
    }
}
if (cfull == 3 && flagdado == true){
    fullservido+=35;
}

if (dado[0]== dado[5]){///Si el primer dado es igual al ultimo, generala
    generalaservida=true;
}

}





#endif // TIRADA_H_INCLUDED
