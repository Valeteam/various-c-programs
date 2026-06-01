//  QUALUNQUE PRINTF PUO' ANDARE SOSTITUITO CON LA LOGICA DEL COUT

#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct libri {
    string nome;
    string autore;
    int data;
};

vector<libri> biblioteca;

void bibliotecaMenu();
void add();
void lista();
void ricerca();
void delate();
void bibliotecaMenu();

void bibliotecaMenu() {
    int opzione;

    do {
        cout << "\n=== BIBLIOTECA ===\n";
        cout << "1) Aggiungi libro\n";
        cout << "2) Visualizza libri\n";
        cout << "3) Cerca libro\n";
        cout << "4) Elimina libro\n";
        cout << "5) Numero libri\n";
        cout << "6) Esci\n";
        cout << "Scelta: ";

        cin >> opzione;

        switch (opzione) {
            case 1:
                add();
                break;

            case 2:
                lista();
                break;

            case 3:
                ricerca();
                break;

            case 4:
                delate();
                break;

            case 5:
                cout << "Nella biblioteca ci sono "
                    << biblioteca.size()
                    << " libri.\n";
                break;

            case 6:
                cout << "Uscita dalla biblioteca.\n";
                break;

            default:
                cout << "Opzione non valida.\n";
        }

    } while (opzione != 6);
}

void add() {
    libri l;

    cout << "Nome: ";
    cin >> l.nome;

    cout << "Autore: ";
    cin >> l.autore;

    cout << "Anno pubblicazione: ";
    cin >> l.data;

    biblioteca.push_back(l);

    cout << "Libro aggiunto con successo.\n";
}

void lista() {
    if (biblioteca.empty()) {
        cout << "Nessun libro presente.\n";
        return;
    }

    for (int i = 0; i < biblioteca.size(); i++) {
        cout << i + 1 << ") "
            << biblioteca[i].nome
            << " - "
            << biblioteca[i].autore
            << " ("
            << biblioteca[i].data
            << ")\n";
    }
}

void ricerca() {
    string titolo;
    bool trovato = false;

    cout << "Inserisci il titolo: ";
    cin >> titolo;

    for (int i = 0; i < biblioteca.size(); i++) {
        if (biblioteca[i].nome == titolo) {
            cout << "Libro trovato.\n";
            trovato = true;
            break;
        }
    }

    if (!trovato) {
        cout << "Libro non trovato.\n";
    }
}

void delate() {
    string titolo;

    cout << "Titolo da eliminare: ";
    cin >> titolo;

    int posizione = 0;

    while (posizione < biblioteca.size() &&
        biblioteca[posizione].nome != titolo) {
        posizione++;
    }

    if (posizione == biblioteca.size()) {
        cout << "Libro non presente.\n";
    } else {
        biblioteca.erase(biblioteca.begin() + posizione);
        cout << "Libro eliminato.\n";
    }
}

#endif