#include <iostream>
using namespace std;

int main() {
    int entrada;
    cout << "\n CONVERTIR NUMEROS A PALABRAS\n" << endl;
    cout << "\n Ingrese un numero entre 1 y 1000: " << endl;
    cin >> entrada;

    if (entrada < 1 || entrada > 1000)
        cout << "\n ERROR: El numero ingresado esta fuera del rango permitido(1-1000)" << endl;
    else {
        cout << "\n El numero en palabras es: ";
        if (entrada == 1000) cout << "Mil" << endl;
        else {
            int cen = entrada / 100;
            int sobrante = entrada % 100;
            if (cen > 0) {
                if (entrada == 100) cout << "Cien";
                else {
                    switch (cen) {
                        case 1: cout << "Ciento"; break;
                        case 2: cout << "Doscientos"; break;
                        case 3: cout << "Trescientos"; break;
                        case 4: cout << "Cuatrocientos"; break;
                        case 5: cout << "Quinientos"; break;
                        case 6: cout << "Seiscientos"; break;
                        case 7: cout << "Setecientos"; break;
                        case 8: cout << "Ochocientos"; break;
                        case 9: cout << "Novecientos"; break;
                    }
                    if (sobrante > 0) cout << " ";
                }
            }
            if (entrada != 100 && sobrante > 0) {
                if (sobrante >= 10 && sobrante <= 29) {
                    switch (sobrante) {
                        case 10: cout << "Diez"; break;
                        case 11: cout << "Once"; break;
                        case 12: cout << "Doce"; break;
                        case 13: cout << "Trece"; break;
                        case 14: cout << "Catorce"; break;
                        case 15: cout << "Quince"; break;
                        case 16: cout << "Dieciseis"; break;
                        case 17: cout << "Diecisiete"; break;
                        case 18: cout << "Dieciocho"; break;
                        case 19: cout << "Diecinueve"; break;
                        case 20: cout << "Veinte"; break;
                        case 21: cout << "Veintiuno"; break;
                        case 22: cout << "Veintidos"; break;
                        case 23: cout << "Veintitres"; break;
                        case 24: cout << "Veinticuatro"; break;
                        case 25: cout << "Veinticinco"; break;
                        case 26: cout << "Veintiseis"; break;
                        case 27: cout << "Veintisiete"; break;
                        case 28: cout << "Veintiocho"; break;
                        case 29: cout << "Veintinueve"; break;
                    }
                }
                else if (sobrante < 10) {
                    switch (sobrante) {
                        case 1: cout << "Uno"; break;
                        case 2: cout << "Dos"; break;
                        case 3: cout << "Tres"; break;
                        case 4: cout << "Cuatro"; break;
                        case 5: cout << "Cinco"; break;
                        case 6: cout << "Seis"; break;
                        case 7: cout << "Siete"; break;
                        case 8: cout << "Ocho"; break;
                        case 9: cout << "Nueve"; break;
                    }
                }
                else {
                    int dec = sobrante / 10;
                    int uni = sobrante % 10;
                    switch (dec) {
                        case 3: cout << "Treinta"; break;
                        case 4: cout << "Cuarenta"; break;
                        case 5: cout << "Cincuenta"; break;
                        case 6: cout << "Sesenta"; break;
                        case 7: cout << "Setenta"; break;
                        case 8: cout << "Ochenta"; break;
                        case 9: cout << "Noventa"; break;
                    }
                    if (uni > 0) cout << " y ";
                    switch (uni) {
                        case 1: cout << "Uno"; break;
                        case 2: cout << "Dos"; break;
                        case 3: cout << "Tres"; break;
                        case 4: cout << "Cuatro"; break;
                        case 5: cout << "Cinco"; break;
                        case 6: cout << "Seis"; break;
                        case 7: cout << "Siete"; break;
                        case 8: cout << "Ocho"; break;
                        case 9: cout << "Nueve"; break;
                    }
                }
            }
            cout << endl;
        }
    }

    cout << "\n Presione Enter para finalizar";
    cin.ignore();
    cin.get();
    return 0;
}
