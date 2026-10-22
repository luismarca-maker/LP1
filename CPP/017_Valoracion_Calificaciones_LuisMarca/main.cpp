#include <iostream>
using namespace std;

int main() {
    float puntaje;

    cout << "SISTEMA DE EVALUACION DE NOTAS (ESCALA 0 - 20) " << endl;
    cout << "Ingrese su nota final (0 - 20): ";
    cin >> puntaje;

    if (puntaje < 0 || puntaje > 20) {
        cout << "ERROR: La nota ingresada no es valida. Debe escribir entre 0 y 20" << endl;
        return 1;
    }

    if (puntaje >= 18) cout << "Estado: Excelente (Sobresaliente)." << endl;
    else if (puntaje >= 14) cout << "Estado: Aprobado (Bueno)." << endl;
    else if (puntaje >= 11) cout << "Estado: Aprobado (Regular)." << endl;
    else cout << "Estado: Desaprobado" << endl;

    int escalon;
    if (puntaje >= 18) escalon = 1;
    else if (puntaje >= 14) escalon = 2;
    else if (puntaje >= 11) escalon = 3;
    else escalon = 4;

    switch (escalon) {
        case 1: cout << "Categoria A: Postulante de cuadro de honor o beca" << endl; break;
        case 2: cout << "Categoria B: Buen rendimiento academico" << endl; break;
        case 3: cout << "Categoria C: Aprobado, pero requiere reforzamiento" << endl; break;
        case 4: cout << "Categoria D: Desaprobado, requiere recuperacion" << endl; break;
    }
    return 0;
}
