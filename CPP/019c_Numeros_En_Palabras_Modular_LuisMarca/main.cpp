#include <iostream>
#include <string>
using namespace std;

string palabraUnidad(int k) {
    switch (k) {
        case 1: return "uno";
        case 2: return "dos";
        case 3: return "tres";
        case 4: return "cuatro";
        case 5: return "cinco";
        case 6: return "seis";
        case 7: return "siete";
        case 8: return "ocho";
        case 9: return "nueve";
        default: return "";
    }
}

string palabraDecena(int k) {
    if (k < 10) return palabraUnidad(k);
    else if (k >= 10 && k < 20) {
        switch (k) {
            case 10: return "diez";
            case 11: return "once";
            case 12: return "doce";
            case 13: return "trece";
            case 14: return "catorce";
            case 15: return "quince";
            case 16: return "dieciseis";
            case 17: return "diecisiete";
            case 18: return "dieciocho";
            case 19: return "diecinueve";
            default: return "";
        }
    }
    else if (k >= 20 && k < 30) {
        if (k == 20) return "veinte";
        return "veinti" + palabraUnidad(k - 20);
    }
    else {
        int posDec = k / 10;
        int posUni = k % 10;
        string textoDec = "";
        switch (posDec) {
            case 3: textoDec = "treinta"; break;
            case 4: textoDec = "cuarenta"; break;
            case 5: textoDec = "cincuenta"; break;
            case 6: textoDec = "sesenta"; break;
            case 7: textoDec = "setenta"; break;
            case 8: textoDec = "ochenta"; break;
            case 9: textoDec = "noventa"; break;
        }
        if (posUni == 0) return textoDec;
        return textoDec + " y " + palabraUnidad(posUni);
    }
}

string palabraCentena(int k) {
    if (k == 100) return "cien";
    else if (k > 100 && k < 1000) {
        int posCen = k / 100;
        int sobra = k % 100;
        string textoCen = "";
        switch (posCen) {
            case 1: textoCen = "ciento"; break;
            case 2: textoCen = "doscientos"; break;
            case 3: textoCen = "trescientos"; break;
            case 4: textoCen = "cuatrocientos"; break;
            case 5: textoCen = "quinientos"; break;
            case 6: textoCen = "seiscientos"; break;
            case 7: textoCen = "setecientos"; break;
            case 8: textoCen = "ochocientos"; break;
            case 9: textoCen = "novecientos"; break;
        }
        if (sobra == 0) return textoCen;
        return textoCen + " " + palabraDecena(sobra);
    }
    else return palabraDecena(k);
}

string palabraMillar(int k) {
    if (k == 1000) return "mil";
    else if (k > 1000 && k <= 10000) {
        int posMil = k / 1000;
        int sobra = k % 1000;
        string textoMil = "";
        if (posMil == 1) textoMil = "mil";
        else if (posMil == 10) return "diez mil";
        else textoMil = palabraUnidad(posMil) + " mil";
        if (sobra == 0) return textoMil;
        return textoMil + " " + palabraCentena(sobra);
    }
    else return palabraCentena(k);
}

string convertirNumero(int k) {
    if (k == 10000) return "diez mil";
    else if (k >= 1000 && k < 10000) return palabraMillar(k);
    else if (k >= 1 && k < 1000) return palabraCentena(k);
    else return "Numero fuera de rango";
}

int main() {
    for (int j = 1; j <= 10000; j++) {
        cout << j << ": " << convertirNumero(j) << endl;
    }
    return 0;
}
