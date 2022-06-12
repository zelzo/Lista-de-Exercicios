#include <iostream>
#include <bits/stdc++.h>
#include "program1.hpp"
using namespace std;

int main(int argc, char** argv) {

    char i;
    cout<<"Se quiser contar o número de elementos pares e impares digite A"<<endl;
    cout<<"Se quiser jogar um jogo digite B"<<endl;
    cout<<"Se quiser entrar com valores de 2 listas em uma 3a lista aperte C"<<endl;
    cout<<"Se quiser encontrar os k pares de listas aperta D"<<endl;
    cin>>i;
    if(i=='A')
    {
	     count(); 
    }
	else if(i=='B')     
     {
	    game();
     }  
     else if(i=='C')     
     {
	    emp();
     } 
     else if(i=='D')     
     {
	    Euclidean();
     } 
     
     
}
