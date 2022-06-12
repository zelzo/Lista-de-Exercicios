#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include "program2.hpp"
using namespace std;

/* rode esse programa usando o console pauser ou adicione seu proprio getch, system("pause") ou input loop */

int main(int argc, char** argv) {
    int i=0;
    cout<<"Se quiser digitar uma formula e separar seus operadores e operandos digite 1"<<endl;
    cout<<"Se quiser converter uma operacao matematica em notacao prefixa e posfixa digite 2"<<endl;
    cout<<"Se quiser encontrar a funcao Totiente de Euler digite 3"<<endl;
    cout<<"Se quiser encontrar o calculo de fibonacci digite 4"<<endl;
        cin>>i;
    if(i==1){
	    operatar();
    }
	else if(i==2){
	    infix();
     }  
    else if(i==3){
	    totient();
    } 
    else if(i==4){
	  fib();
     } 
}
