#include <iostream>
#include <conio.h>

using namespace std;
int Ingresarnivel() {
	int n;
	do {
		cout << "Nivel de satisfacción (valor entre 1 y 5): ";
		cin >> n;
	} while ((n < 1 || n>5) && n!=-1);
	return n;
}
char Ingresarsexo() {
	char s;
	do {
		cout << "Sexo (M: Masculino; F: Femenino): ";
		cin >> s;
		s = toupper(s);
	} while (s != 'M' && s != 'F');
	return s;
}
int Ingresaredad() {
	int e;
	do {
		cout << "Edad: ";
		cin >> e;
	} while (e < 17);
	return e;
}
char Ingresarmedio() {
	char m;
	do {
		cout << "Cómo se enteró del seminario (C: Correo; L: Llamada; O: Otros): ";
		cin >> m;
		m = toupper(m);
	} while (m != 'C' && m != 'L' && m != 'O');
	return m;
}

int main() {
	int nivel;
	char sexo;
	int edad;
	char medio;
	float porcentajen3;
	int contn3 = 0;
	int conttotal=0;
	setlocale(LC_ALL, "spanish");
	do {
		nivel = Ingresarnivel();
		if (nivel != -1) {
			if (nivel >= 3) {
				contn3++;//contador del nivel 3
			}
			sexo = Ingresarsexo();
			edad = Ingresaredad();
			medio = Ingresarmedio();
			conttotal++;//contador de total
		}
		cout << endl << endl;
		
	} while (nivel != -1);
	cout << endl;
	cout << "RESULTADOS";
	cout << endl;
	//porcentajen3
	porcentajen3 = (contn3*1.0 / conttotal) * 100;
	cout << "% de asistentes que calificaron el seminario con un nivel de satisfacción superior a 3: " << porcentajen3 << "%";
