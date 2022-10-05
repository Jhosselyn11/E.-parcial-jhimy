#include <iostream>
#include <conio.h>

using namespace std;

char Ingresareps() {
	char e;
	do {
		cout << "EPS elegida (R: Rímac; M: Mapfre; P: Pacífico): ";
		cin >> e;
		e = toupper(e);
	} while ((e != 'R' && e != 'M') && e != 'P');
	return e;
}
char Ingresarplan() {
	char p;
	do {
		cout << "Tipo de plan (F: Full; P: Preferencial): ";
		cin >> p;
		p = toupper(p);
	} while ((p != 'F') && (p != 'P'));
	return p;
}
char Ingresarcond() {
	char c;
	do {
		cout << "Condición (N: Nuevo; O: Otro): ";
		cin >> c;
		c = toupper(c);
	} while ((c != 'N') && (c != 'O'));
	return c;
}
int Ingresaredad() {
	int ed;
	do {
		cout << "Ingrese edad: ";
		cin >> ed;
	} while (ed < 0);
	return ed;
}
int main() {
	float pagom;
	char eps, plan, condicion;
	int edad;
	setlocale(LC_ALL, "spanish");
	eps = Ingresareps();
	plan = Ingresarplan();
	condicion = Ingresarcond();
	edad = Ingresaredad();
	
	switch (eps) {
	case 'R': 
		if (plan == 'F') {
			switch (condicion) {
			case 'N': 
				if (edad <= 25) {
					cout << "Pago mensual: 436";
				}
				if (edad > 25 && edad <= 40) {
					cout << "Pago mensual: " << 436 + (0.05 * 436);

				}
				if (edad > 40 && edad <= 65) {
					cout<<"Pago mensual: "<< 436 + (0.08 * 436);
				}
				if (edad > 65) {
					cout << "Pago mensual: " << 436 + (0.10 * 436);
				}
					break;
			case 'O': 
				if (edad <= 25) {
					cout << "Pago mensual: 550";
				}
				if (edad > 25 && edad <= 40) {
					cout << "Pago mensual: " << 550 + (0.05 * 550);

				}
				if (edad > 40 && edad <= 65) {
					cout << "Pago mensual: " << 550 + (0.08 * 550);
				}
				if (edad > 65) {
					cout << "Pago mensual: " << 550 + (0.10 * 550);
				}
				break;
			}
		} 
		if (plan == 'P') {
			switch (condicion) {
			case 'N':
				if (edad <= 25) {
					cout << "Pago mensual: 885";
				}
				if (edad > 25 && edad <= 40) {
					cout << "Pago mensual: " << 885 + (0.05 * 885);

				}
				if (edad > 40 && edad <= 65) {
					cout << "Pago mensual: " << 885 + (0.08 * 885);
				}
				if (edad > 65) {
					cout << "Pago mensual: " << 885 + (0.10 * 885);
				}
				break;
			case 'O': 
				if (edad <= 25) {
					cout << "Pago mensual: 990";
				}
				if (edad > 25 && edad <= 40) {
					cout << "Pago mensual: " << 990 + (0.05 * 990);

				}
				if (edad > 40 && edad <= 65) {
					cout << "Pago mensual: " << 990 + (0.08 * 990);
				}
				if (edad > 65) {
					cout << "Pago mensual: " << 990 + (0.10 * 990);
				}
				break;
			}
		}
			break;
	case 'M': 
		if (plan == 'F') {
			switch (condicion) {
			case 'N':
				if (edad <= 25) {
					cout << "Pago mensual: 359";
				}
				if (edad > 25 && edad <= 40) {
					cout << "Pago mensual: " << 359 + (0.05 * 359);

				}
				if (edad > 40 && edad <= 65) {
					cout << "Pago mensual: " << 359 + (0.08 * 359);
				}
				if (edad > 65) {
					cout << "Pago mensual: " << 359 + (0.10 * 359);
				}
				break;
			case 'O':
				if (edad <= 25) {
					cout << "Pago mensual: 465";
				}
				if (edad > 25 && edad <= 40) {
					cout << "Pago mensual: " << 465 + (0.05 * 465);

				}
				if (edad > 40 && edad <= 65) {
					cout << "Pago mensual: " << 465 + (0.08 * 465);
				}
				if (edad > 65) {
					cout << "Pago mensual: " << 465 + (0.10 * 465);
				}
				break;
			}
		}
		if (plan == 'P') {
			switch (condicion) {
			case 'N':
				if (edad <= 25) {
					cout << "Pago mensual: 475";
				}
				if (edad > 25 && edad <= 40) {
					cout << "Pago mensual: " << 475 + (0.05 * 475);

				}
				if (edad > 40 && edad <= 65) {
					cout << "Pago mensual: " << 475 + (0.08 * 475);
				}
				if (edad > 65) {
					cout << "Pago mensual: " << 475 + (0.10 * 475);
				}
				break;
			case 'O':
				if (edad <= 25) {
					cout << "Pago mensual: 810";
				}
				if (edad > 25 && edad <= 40) {
					cout << "Pago mensual: " << 810 + (0.05 * 810);

				}
				if (edad > 40 && edad <= 65) {
					cout << "Pago mensual: " << 810 + (0.08 * 810);
				}
				if (edad > 65) {
					cout << "Pago mensual: " << 810 + (0.10 * 810);
				}
				break;
			}
		}
		break;
	case 'P': 
		if (plan == 'F') {
			switch (condicion) {
			case 'N':
				if (edad <= 25) {
					cout << "Pago mensual: 505";
				}
				if (edad > 25 && edad <= 40) {
					cout << "Pago mensual: " << 505 + (0.05 * 505);

				}
				if (edad > 40 && edad <= 65) {
					cout << "Pago mensual: " << 505 + (0.08 * 505);
				}
				if (edad > 65) {
					cout << "Pago mensual: " << 505 + (0.10 * 505);
				}
				break;
			case 'O':
				if (edad <= 25) {
					cout << "Pago mensual: 610";
				}
				if (edad > 25 && edad <= 40) {
					cout << "Pago mensual: " << 610 + (0.05 * 610);

				}
				if (edad > 40 && edad <= 65) {
					cout << "Pago mensual: " << 610 + (0.08 * 610);
				}
				if (edad > 65) {
					cout << "Pago mensual: " << 610 + (0.10 * 610);
				}
				break;
			}
		}
		if (plan == 'P') {
			switch (condicion) {
			case 'N':
				if (edad <= 25) {
					cout << "Pago mensual: 950";
				}
				if (edad > 25 && edad <= 40) {
					cout << "Pago mensual: " << 950 + (0.05 * 950);

				}
				if (edad > 40 && edad <= 65) {
					cout << "Pago mensual: " << 950 + (0.08 * 950);
				}
				if (edad > 65) {
					cout << "Pago mensual: " << 950 + (0.10 * 950);
				}
				break;
			case 'O':
				if (edad <= 25) {
					cout << "Pago mensual: 1100";
				}
				if (edad > 25 && edad <= 40) {
					cout << "Pago mensual: " << 1100 + (0.05 * 1100);

				}
				if (edad > 40 && edad <= 65) {
					cout << "Pago mensual: " << 1100 + (0.08 * 1100);
				}
				if (edad > 65) {
					cout << "Pago mensual: " << 1100 + (0.10 * 1100);
				}
				break;
			}
		}
		break;
	}





	getch();
	return 0;
}