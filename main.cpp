#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <clocale>

#include "funzioni.hpp"
#include "biblioteca.hpp"
#include "array.hpp"

using namespace std;

void bibliotecaMenu();
void array_program();

int main() {
    setlocale(LC_ALL, "it_IT.utf8");

    int option;

    do {
        cout << "\nScegli opzione (1-20): ";
        cin >> option;

        switch (option) {
            case 1:
                pariDispari();
                break;

            case 2:
                maggioreTraDue();
                break;

            case 3:
                areaRettangolo();
                break;

            case 4:
                maggiorenne();
                break;

            case 5:
                simpleCalculator();
                break;

            case 6:
                sommaToN();
                break;

            case 7:
                tabellina();
                break;

            case 8:
                contPari();
                break;

            case 9:
                fattoriale();
                break;

            case 10:
                indovinaNumero();
                break;

            case 11:
                media();
                break;

            case 12:
                max();
                break;

            case 13:
                maggiorenni();
                break;

            case 14:
                invertiArray();
                break;

            case 15:
                cercaNumero();
                break;

            case 16:
                freccette();
                break;

            case 17:
                psw_generator();
                break;

            case 18:
                bibliotecaMenu();
                break;
            
            case 19:
                array_program();
                break;

            case 20:
                cout << "Uscita dal programma.\n";
                break;

            default:
                cout << "Opzione non valida.\n";
        }

    } while (option != 20);

    return 0;
}