#include <iostream>

using namespace std;

struct Compless {
    void tabellina();
    void eta();
};


int main()
{

    Compless oggetto;

    oggetto.tabellina();
    oggetto.eta();


    return 0;
}

void Compless::tabellina() {

    int numero;
    cout << "inserisci il numero da fare la tabellina" << endl;
    cin >> numero;

    for(int i; i <=10; i++){
        cout << numero * i << endl;
    }


    cout << numero * 0 << endl;
    cout << numero * 1 << endl;
    cout << numero * 2 << endl;
    cout << numero * 3 << endl;
    cout << numero * 4 << endl;
    cout << numero * 5 << endl;
    cout << numero * 6 << endl;
    cout << numero * 7 << endl;
    cout << numero * 8 << endl;
    cout << numero * 9 << endl;
    cout << numero * 10 << endl;
    cout << "\n" << endl;

}
void Compless::eta() {
    int persone,eta;
    int somma = 0;
    cout << "inserisci il numero di persone" << endl;
    cin >> persone;
    for(int i=0; i < persone; i++){
        cout << "l'eta della persona " << i + 1 << endl;
        cin >> eta;
        cout << "\n";
        if(eta >= 18){
            cout << "maggiorenne" << endl;
            somma = somma + 1;
        }else{
            cout << "minorenne" << endl;
        }
    }
    cout << "Numero di maggiorenni: " << somma << "\n" << endl;
}
