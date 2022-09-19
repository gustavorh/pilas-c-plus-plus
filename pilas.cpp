#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std; 

struct pilas {
	int d;
	pilas *a;
}*c,*e;
 
void ingresar(void);
void sacar (void);
void actualizar_pila(void);
 
int main() {
	
	ingresar();
	ingresar();
	ingresar();
	sacar ();
	actualizar_pila();
	
	return 0;
}

 
void ingresar (void) {
	if(!c) {
		c=new(pilas);
		cout<<"Ingrese elemento: ";
		cin>>c->d;
		c->a=NULL;
		return;
	}
	
	e=new(pilas);
	cout<<"\nIngrese elemento: ";
	cin>>e->d;
	e->a=c;
	c=e;
}
 
void sacar(void) {
	if(!c) {
		cout<<"\n\nNo hay elementos!!";
		return;
	}
 
	e=new(pilas);
	e=c;
	cout<<"\n\nElemento eliminado: " <<e->d;
	c=e->a;
	delete(e);
}

void actualizar_pila(void) {
	int y=2,i,ca=0;
	e=c;
	
	while(e) {
		ca++;
		e=e->a;
	}

	for(i=0;i<=ca;i++) {
		cout<<" ";
	}
	//muestro lo que tiene la pila!!
	i=0;
	e=c;
	
	while(e) {
		cout<<"\n";
		cout<<++i<<" - "<<e->d;
		e=e->a;
	}
}
