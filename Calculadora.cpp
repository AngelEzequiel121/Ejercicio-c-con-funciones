#include <iostream>
#include <cmath>
using namespace std;

int sumar(int a, int b) {
return a + b;
}

int restar(int a, int b) {
return a - b;
}

int multiplicar(int a, int b) {
return a * b;
}

float dividir(int a, int b) {
if (b == 0) {
cout << "Error: Division por cero." << endl;
return 0;
}
return (float) a / b;
}

int potencia(int base, int exponente) {
return pow(base, exponente);
}

int modulo(int a, int b) {
if (b == 0) {
cout << "Error: Division por cero." << endl;
return 0;
}
return a % b;
}

double raizCuadrada(int a) {
if (a < 0) {
cout << "Error: No se puede calcular la raiz de un numero negativo." << endl;
return 0;
}
return sqrt(a);
}

long long factorial(int a) {
if (a < 0) {
cout << "Error: No se puede calcular el factorial de un numero negativo." << endl;
return 0;
}
long long resultado = 1;
for (int i = 1; i <= a; i++) {
resultado *= i;
}
return resultado;
}

void mostrarMenu() {
cout << "\nCalculadora Basica" << endl;
cout << "1. Suma" << endl;
cout << "2. Resta" << endl;
cout << "3. Multiplicacion" << endl;
cout << "4. Division" << endl;
cout << "5. Potencia" << endl;
cout << "6. Modulo" << endl;
cout << "7. Raiz Cuadrada" << endl;
cout << "8. Factorial" << endl;
cout << "9. Salir" << endl;
cout << "Seleccione una opcion: ";
}

int main() {
int opcion, a, b, exponente;
float resultadoDiv;

do {
    mostrarMenu();
    cin >> opcion;

    if (opcion >= 1 && opcion <= 8) {
        if (opcion == 7 || opcion == 8) { 
            cout << "Ingrese un numero: ";
            cin >> a;
        } else {  
            cout << "Ingrese dos numeros: ";
            cin >> a >> b;
        }
    }

    switch (opcion) {
        case 1:
            cout << "Resultado: " << sumar(a, b) << endl;
            break;
        case 2:
            cout << "Resultado: " << restar(a, b) << endl;
            break;
        case 3:
            cout << "Resultado: " << multiplicar(a, b) << endl;
            break;
        case 4:
            cout << "Resultado: " << dividir(a, b) << endl;
            break;
        case 5:
            cout << "Ingrese el exponente: ";
            cin >> exponente;
            cout << "Resultado: " << potencia(a, exponente) << endl;
            break;
        case 6:
            cout << "Resultado: " << modulo(a, b) << endl;
            break;
        case 7:
            cout << "Resultado: " << raizCuadrada(a) << endl;
            break;
        case 8:
            cout << "Resultado: " << factorial(a) << endl;
            break;
        case 9:
            cout << "Saliendo de la calculadora..." << endl;
            break;
        default:
            cout << "Opcion no válida, intente nuevamente." << endl;
    }
} while (opcion != 9);

return 0;
}


