#ifndef JUGADAS_H_INCLUDED
#define JUGADAS_H_INCLUDED

void Uno(int *Dad,int *U){
    int i;
    for(i=0;i<5;i++){
        if(Dad[i]==1){
            *U+=1;
        }
    }
}

void Dos(int *Dad,int *D){
     int i;
    for(i=0;i<5;i++){
        if(Dad[i]==2){
            *D+=2;
        }
    }
}

void Tres(int *Dad,int *T){
     int i;
    for(i=0;i<5;i++){
        if(Dad[i]==3){
            *T+=3;
        }
    }
}

void Cuatro(int *Dad,int *Cu){
     int i;
    for(i=0;i<5;i++){
        if(Dad[i]==4){
            *Cu+=4;
        }
    }
}

void Cinco(int *Dad,int*Ci){
     int i;
    for(i=0;i<5;i++){
        if(Dad[i]==5){
            *Ci+=5;
        }
    }
}

void Seis(int *Dad,int *S){
     int i;
    for(i=0;i<5;i++){
        if(Dad[i]==6){
            *S+=6;
        }
    }
}

void Escalera(int *Dad,int *E,bool *flag){

if(Dad[0]<Dad[1] && Dad[1]<Dad[2] && Dad[2]<Dad[3] && Dad[3]<Dad[4]){
    if(*flag==true){
    *E=25;
    }
    else{
        *E=20;
    }
}
}

void Poker(int *Dad,int *P,bool *flag){
 int Po,c=0,i;
 for(i=0;i<5;i++){
    if(i==0){
        Po=Dad[i];
    }
    else{
        if(Po==Dad[i]){
            c++;
        }
    }
 }
 if (c == 3){
        if(*flag==true){
            *P=45;
        }
        else{
        *P=40;
        }
 }
}

void Full(int *Dad,int *F,bool *flag){
int i,F1,F2,c1=0,c2=0;
bool V=false;
for(i=0;i<5;i++){
    if(i==0){
        F1=Dad[i];
        c1++;
    }
    else{
        if(F1==Dad[i]){
            c1++;
        }
        else{
            if(V==false){
                V=true;
                F2=Dad[i];
                c2++;
            }
            else{
                if(F2==Dad[i]){
                    c2++;
                }
            }
        }
    }
}
if (c1 == 3 && c2 == 2){
        if(*flag==true){
            *F=35;
        }
        else{
            *F=30;
        }
}
else{
    if (c1 == 2 && c2 == 3){
        if(*flag==true){
            *F=35;
        }
        else{
            *F=30;
        }
}
}
}


void Generala(int *Dad,int *G,bool *flag,bool *Gano){
int i,Ge,c=0;
for(i=0;i<5;i++){
    if(i==0){
        Ge=Dad[i];
    }
    else{
        if(Ge==Dad[i]){
            c++;
        }
    }
}
if(c==4){
    if(*flag==true){
        *Gano=true;
        *G=500000000000000000000000000000000000000000000;
    }
    else{
        *G=60;
    }
}

}



#endif // JUGADAS_H_INCLUDED
