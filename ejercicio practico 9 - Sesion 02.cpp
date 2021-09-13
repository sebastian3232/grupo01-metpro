#include <iostream>
using namespace std;
int main(){
	//mi crush es una abogada linda <3
	int edad;
	cout<<"Digite su edad [0-99]: "; cin>>edad;
	while(edad<0 || edad>99){
		cout<<"Esta edad no pertenece a ningun rango generacional.\nDigite nuevamente su edad [0-99]: "; cin>>edad;	
	}
	
	if (edad>=0 && edad<7){
		cout<<"Usted nacio entre el 2011 - 2017";
		cout<<"\nUsted pertenece a la Generacion Alfa";
	}  
	else if(edad>=7 && edad<17){
		cout<<"Usted nacio entre el 2001 - 2010";
		cout<<"\nUsted pertenece a la Generacion Z";
	}
	else if(edad>=17 && edad<34){
		cout<<"Usted nacio entre el 1984 - 2000";
		cout<<"\nUsted pertenece a la Generacion Y - Milenials";
	}
	else if(edad>=34 && edad<41){
		cout<<"Usted nacio entre el 1977 - 1983";
		cout<<"\nUsted pertenece a la Generacion Xennials";
	}
	else if(edad>=41 && edad<53){
		cout<<"Usted nacio entre el 1965 - 1976";
		cout<<"\nUsted pertenece a la Generacion X";
	}
	else if(edad>=53 && edad<72){
		cout<<"Usted nacio entre el 1945 - 1964";
		cout<<"\nUsted pertenece a la Generacion Baby Boomers";
	}
	else if(edad>=72 && edad<100){
		cout<<"Usted nacio antes de 1945";
		cout<<"\nUsted pertenece a la Generacion Silenciosa";
	}
	
	return 0;
}
