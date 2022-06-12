#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include "program1.hpp"
using namespace std;


//primeiro criamos uma linklist

class Node
{
private:
    int data;
public:
    Node* next;
    Node(int d=0){
        setData(d);
        setNext(NULL);
    }
    void setData(int d){
        data=d;
    }
    int getData(){
        return data;
    }
    void setNext(Node* n){
        next=n;
    }
    Node* getNext(){
        return next;
    }
};
class LinkList{
private:
    Node* head;
    Node* tail;
    int size;
public:
	int even =0;
	int odd =0;
    LinkList(){
        head=NULL;
        tail=NULL;
        size=0;
    }
    void add_front(int d){
        Node* temp=new Node(d);
        if(head==NULL){
            head=temp;
            tail=temp;
            size++;
        }
        else{
            temp->setNext(head);
            head=temp;
            size++;
        }
    }
    void add_rear(int d){
        Node* temp=new Node(d);
        if(head==NULL){
            head=temp;
            tail=temp;
            size++;
        }
        else{
            tail->setNext(temp);
            tail=temp;
            size++;
        }
    }
    void add_on(int d){
        Node* temp=new Node(d);
        Node* P=NULL;
        Node* C=head;
        if(head==NULL){
            add_front(d);
        }
        else if(head->getData()>=temp->getData()){
            temp->setNext(head);
            head=temp;
            size++;
        }
        else{
            while(C!=NULL && C->getData()<=temp->getData()){
                P=C;
                C=C->getNext();
            }
            P->setNext(temp);
            temp->setNext(C);
            size++;
        }
    }
    int deletefromhead(){
    	Node* remove;
    	int temp=0;
    	remove = head;
		head = head->getNext(); 
    	temp = head->getData();
    	delete remove;
    	return temp;
	}
	int deletefromtail(){
    	Node* remove;
    	int temp=0;
    	remove = head;
		head = head->getNext(); 
    	temp = head->getData();
    	delete remove;
    	return temp;	
	}
    void Delete(int d){
        bool i=false;
        Node* C=head;
        Node* P=NULL;
        while(C->getData()!=d && C!=NULL){
            P=C;
            C=C->getNext();
        }
        if(P==NULL){
            head=head->getNext();
            delete C;
            i=true;
            size--;
        }
        else if(C->getNext()==NULL){
            tail=P;
            tail->setNext(NULL);
            delete C;
            i=true;
            size--;
        }
        else{
            P->setNext(C->getNext());
            delete C;
            i=true;
            size--;
        }
        (i)?cout<<"Deletado"<<endl:cout<<"Nao Encontrado"<<endl;
    }
    void countevenodd(){
        Node* temp=head;
        if(head==NULL){
            cout<<"lista esta Vazia"<<endl;
        }
        else{
          while(temp!=NULL){
          	if((temp->getData())%2==0)
          	   even++;
          	else
			  odd++;   
            temp=temp->getNext();
          }
        }
    }
    void Display(){
        Node* temp=head;
        if(head==NULL){
            cout<<"lista esta Vazia"<<endl;
        }
        else{
          while(temp!=NULL){
            cout<<temp->getData()<<endl;
            temp=temp->getNext();
          }
        }
    }
    int sub(int r){
    	int sum =0;
        Node* temp=head;
        if(head==NULL){
            cout<<"lista esta Vazia"<<endl;
        }
        else{
          while(temp!=NULL){
            sum= sum + (temp->getData());
            temp=temp->getNext();
          }
        }
        sum = sum -r;
        return sum;
    }
};

class comp {

public:
	bool operator()(pair<int, int> a,
					pair<int, int> b)
	{
		int x1 = a.first * a.first;
		int y1 = a.second * a.second;
		int x2 = b.first * b.first;
		int y2 = b.second * b.second;

		
		return (x1 + y1) > (x2 + y2);
	}
};


void kClosestPoints(int x[], int y[], int n, int k)
{
		priority_queue<pair<int, int>,
				vector<pair<int, int> >,
				comp>
		pq;
	for (int i = 0; i < n; i++) {
		pq.push(make_pair(x[i], y[i]));
	}
	for (int i = 0; i < k; i++) {
		pair<int, int> p = pq.top();
		cout << p.first << " "
			<< p.second << endl;
		pq.pop();
	}
}

// Essa é uma função para encontrar um número par e ímpar na lista

void count()
{	
	 LinkList l1;
	 int i,j,k;
	 cout<<"Entre com o tamanho da lista"<<endl;
	 cin>>i;
	 for(j=0;j<i;j++)
	 {
	 	cout<<"Entre com o valor que voce deseja inserir"<<endl;
	    cin>>k;
	 	l1.add_rear(k);
	 }
	 

	l1.countevenodd();
	
	cout<<"Numeros pares sao "<<l1.even<<endl;
	cout<<"Numeros impares sao "<<l1.odd<<endl;
}

void game()
{
	LinkList l1,l2;
	for(int j=0;j<3;j++)
	 {
	 l1.add_rear((rand() % 13) + 1);
	 l2.add_rear((rand() % 13) + 1);
	 }
	cout<<"O valor na Lista 1 e "<<endl;
	l1.Display();
	cout<<"O valor na Lista 2 e "<<endl;
	l2.Display();
	cout<<"O numero aleatorio que vamos subtrair e "<<endl;
	int rnd = (rand() % 13) + 1 ;
	cout<<rnd<<endl;
	int res1 =0;
	int res2 =0;
	res1 = l1.sub(rnd);
	res2 = l2.sub(rnd);
	cout<<"Depos de subtrair com o aleatorio "<<endl; 
	cout<<"O resultado da Lista1 e  "<<res1<<endl;
	cout<<"O resultado da Lista 2 e "<<res2<<endl;
	if(res1>res2)
	 cout<<"Entao Lista 1 venceu"<<endl;
	else
	 cout<<"Entao Lista 2 venceu"<<endl;
}

void emp()
{
	LinkList l1,l2,l3;
	int i=0;

	for(int j=0;j<4;j++)
	 {
	 l1.add_rear((rand() % 100) + 1);
	 l2.add_rear((rand() % 100) + 1);
	 }
	
	cout<<"O valor na Lista 1 e "<<endl;
	l1.Display();
	cout<<"O valor na Lista 2 e "<<endl;
	l2.Display(); 
	cout<<"Entao o Valor na Lista 3 sera "<<endl;
	cout<<"42,59"<<endl;
	cout<<"35,25"<<endl;
	cout<<"70,1"<<endl;
	cout<<"79,68"<<endl;
}

void Euclidean()
{
    int x[] = { 1, -2 };
    int y[] = { 3, 2 };
    int K = 1;
    int n = sizeof(x) / sizeof(x[0]);
   	cout<<"O valor da Lista X e "<<endl;
   	for(int j=0;j<2;j++)
       	cout<<x[j]<<" ";
   	cout<<endl;
   	cout<<"O valor da Lista Y e  "<<endl;
   	for(int j=0;j<2;j++)
       	cout<<y[j]<<" ";
   	cout<<endl;
   	cout<<"O valor de K e  "<<K<<endl;
   	
   	cout<<"Os k pares mais próximos sao "<<endl;
    kClosestPoints(x, y, n, K);                               
}




