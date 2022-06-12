#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include "program2.hpp"
using namespace std;

bool isOperator(char c){
	return (!isalpha(c) && !isdigit(c));
}

int getPriority(char C){
	if (C == '-' || C == '+')
		return 1;
	else if (C == '*' || C == '/')
		return 2;
	else if (C == '^')
		return 3;
	return 0;
}

string infixToPostfix(string infix){
	infix = '(' + infix + ')';
	int l = infix.size();
	stack<char> char_stack;
	string output;

	for (int i = 0; i < l; i++) {
		if (isalpha(infix[i]) || isdigit(infix[i]))
			output += infix[i];

		else if (infix[i] == '(')
			char_stack.push('(');

		else if (infix[i] == ')') {
			while (char_stack.top() != '(') {
				output += char_stack.top();
				char_stack.pop();
			}
			char_stack.pop();
		}

		else{
			if (isOperator(char_stack.top())){
				if(infix[i] == '^'){
					while (getPriority(infix[i]) <= getPriority(char_stack.top())){
						output += char_stack.top();
						char_stack.pop();
					}	
				}
				else{
					while (getPriority(infix[i]) < getPriority(char_stack.top())){
						output += char_stack.top();
						char_stack.pop();
					}	
				}
				char_stack.push(infix[i]);
			}
		}
	}
	while(!char_stack.empty()){
		output += char_stack.top();
		char_stack.pop();
	}
	return output;
}

string infixToPrefix(string infix){
	int l = infix.size();
	reverse(infix.begin(), infix.end());
	for (int i = 0; i < l; i++) {
		if (infix[i] == '(') {
			infix[i] = ')';
			i++;
		}
		else if (infix[i] == ')') {
			infix[i] = '(';
			i++;
		}
	}
	string prefix = infixToPostfix(infix);
	reverse(prefix.begin(), prefix.end());
	return prefix;
}

void operatar(){
	string str;
	cout<<"Entre com a formula"<<endl;
	cin>>str;
	stack<char> st1; 
	stack<char> st2;
	 for (int i = 0; i < str.length(); i++) {
		if(str[i]=='*'||str[i]=='+'||str[i]=='-'||str[i]=='/'||str[i]=='%'){
			st1.push(str[i]);
		}
		else{
			st2.push(str[i]);
		}   
	}

	cout<<"Na Pilha 1 apenas operadores"<<endl;
		int n = st1.size();
	for(int i=0; i<n;i++){
      cout<<st1.top()<<" ";
      st1.pop();
    }
    cout<<"\n";
    cout<<"Na Pilha 2 apenas operandos"<<endl;
	 n = st2.size();
	for(int i=0; i<n;i++){
      cout<<st2.top()<<" ";
      st2.pop();
    }
    cout<<"\n";
}

void infix(){	
  cout<<"Digite a string que voce deseja converter"<<endl;
  string st;
  cin>>st;
  cout<<"O prefixo e "<<endl;
  cout << infixToPrefix(st) <<endl;	
  cout<<"O posfixo e "<<endl;
  cout << infixToPostfix(st) <<endl;			
}


void totient(){
	cout<<"Digite quantos totiente voce deseja encontrar"<<endl;
     int n = 0;
     cin>>n;
    long long phi[n+1];
	for (int i=1; i<=n; i++)
		phi[i] = i; 

	for (int p=2; p<=n; p++){
		if (phi[p] == p){
			phi[p] = p-1;
			for (int i = 2*p; i<=n; i += p){
			phi[i] = (phi[i]/p) * (p-1);
			}
		}
	}

	for (int i=1; i<=n; i++)
	cout << "Totiente de " << i << " e "
		<< phi[i] << endl;
}

void fib(){
	cout<<"Insira o valor de n para o calculo de fibonacci que voce deseja encontrar"<<endl;
     int n = 0;
     cin>>n;

	int f[n+1];
	int i;

	f[0] = 0;
	f[1] = 1;

	for (i = 2; i <= n; i++){
		f[i] = f[i-1] + f[i-2];
	}

	for (i = 0; i < n; i++){
			cout<<f[i]<<"  ";	
	}
}



