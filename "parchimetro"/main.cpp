#include <iostream>
#include <windows.h>
#include <clocale>

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "it_IT.utf8");


    int n_ore;
    string costo, n_targa, ore;

    while (true)
    {
        cout << "inserisci il numero di targa" << endl;
        cin >> n_targa;
        cout << "======= Selezione Ore di Sosta =======" << endl;
        cout << "========= 30 minuti tasto 1 ==========" << endl;
        cout << "========= 60 minuti tasto 2 ==========" << endl;
        cout << "========= 90 minuti tasto 3 ==========" << endl;
        cout << "========= 120 minuti tasto 4 =========" << endl;
        cout << "========= 180 minuti tasto 5 =========" << endl;
        cout << "========= 240 minuti tasto 6 =========" << endl;
        cout << "====== Tutta la giornata tasto 7 =====" << endl;
        cin >> n_ore;

        if (n_ore == 1)
        {
            costo = "€0.50";
            ore = 0.30;
        }else if(n_ore == 2){
            costo = "€0.70";
            ore = "1 ora";
        }else if(n_ore == 3){
            costo = "€1.00";
            ore = "1.30 ore";
        }else if(n_ore == 4){
            costo = "€1.20";
            ore = "2 ore";
        }else if(n_ore == 5){
            costo = "€1.50";
            ore = "3 ore";
        }else{
            costo = "€2";
            ore = "Tutta la giornata";
        }

        cout << "Pagamento Sosta del Parcheggio \n       in centro a Thiene" << endl;
        cout << "\n" << "\n" << endl;
        cout << "Targa: " << n_targa << endl;
        cout << "Costo: " << costo << endl;
        cout << "Ore di sosta: " << ore << endl;
    }
    

    return 0;
}
