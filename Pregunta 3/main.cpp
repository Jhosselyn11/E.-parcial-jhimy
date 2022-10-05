#include <iostream>
#include <conio.h>

using namespace std;

int Ingresaraño() {
	int a;
	do {
		cout << "Ingrese el año de inicio (entre 2014 y 2020): ";
		cin >> a;
	} while (a < 2014 || a>2020);
	return a;
}
void graficar(int usuariocr1, int usuarioca1, int usuariocr2, int usuarioca2, int usuariocr3, int usuarioca3,int año,char corredorrojo,char corredorazul) {
	//grafico año 1
	for (int i = 0; i <= usuariocr1 / 10; i++) {
		cout <<año<<" corredor rojo "<< corredorrojo << "(" << usuariocr1 / 10 << ")" << endl;
	}
	for (int i = 0; i <= usuarioca1 / 10; i++) {
		cout <<año<< " corredor azul "<< corredorazul  << "(" << usuarioca1 / 10 << ")" << endl;
	}
	cout << endl << endl;
	//grafico año 2
	for (int i = 0; i <= usuariocr2 / 10; i++) {
		cout <<año<<" corredor rojo "<<corredorrojo  << "(" << usuariocr2 / 10 << ")" << endl;
	}
	for (int i = 0; i <= usuarioca2 / 10; i++) {
		cout <<año <<" corredor azul "<< corredorazul << "(" << usuarioca2 / 10 << ")" << endl;
	}
	//grafico año 3
	for (int i = 0; i <= usuariocr3 / 10; i++) {
		cout << año << " corredor rojo "<< corredorrojo << "(" << usuariocr3 / 10 << ")" << endl;
	}
	for (int i = 0; i <= usuarioca3 / 10; i++) {
		cout << año << " corredor azul " << corredorazul  << "(" << usuarioca3 / 10 << ")" << endl;
	}
	

}

int main() {
	int año;
	int usuariocr1, usuarioca1;//año1
	int usuariocr2, usuarioca2; //año2
	int usuariocr3, usuarioca3; //año2
	char corredorrojo;
	char corredorazul;
	setlocale(LC_ALL, "spanish");
	año = Ingresaraño();
	//año 1
	cout << "Cantidad de usuarios (en miles) de corredor rojo en el " << año << endl;
	cin >> usuariocr1;
	cout << "Cantidad de usuarios (en miles) de corredor azul en el " << año << endl;
	cin >> usuarioca1;
	//año2
	cout << "Cantidad de usuarios (en miles) de corredor rojo en el " << año + 1 << endl;
	cin >> usuariocr2;
	cout << "Cantidad de usuarios (en miles) de corredor azul en el " << año + 1 << endl;
	cin >> usuarioca2;
	//año 3
	cout << "Cantidad de usuarios (en miles) de corredor rojo en el " << año + 2 << endl;
	cin >> usuariocr3;
	cout << "Cantidad de usuarios (en miles) de corredor azul en el " << año + 2 << endl;
	cin >> usuarioca3;
	//carateres
	cout << "Ingrese caracter para corredor rojo: ";
	cin >> corredorrojo;
	cout << "Ingrese caracter para corredor azul: ";
	cin>> corredorazul;
	//garfico
	graficar(usuariocr1, usuarioca1, usuariocr2, usuarioca2, usuariocr3, usuarioca3, año, corredorrojo, corredorazul);
	
	//leyenda
	cout << "Leyenda: Cada " << corredorrojo << " o " << corredorazul << " equivale a 10";

	

	getch();
	return 0;
}