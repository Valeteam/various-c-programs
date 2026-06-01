#ifndef FUNZIONI_HPP
#define FUNZIONI_HPP

#include <iostream>
#include <vector>  
using namespace std; 
#endif

//  QUALUNQUE PRINTF PUO' ANDARE SOSTITUITO CON LA LOGICA DEL COUT

// 1
void pariDispari(){
    int numero;
    printf("inserisci un numero: ");
    cin >> numero;

    if (numero % 2 == 0){
        printf("pari\n");
    } else {
        printf("dispari\n");
    }
}

// 2
void maggioreTraDue(){
    int a,b;
    printf("inserisci il primo numero: ");
    cin >> a;
    printf("inserisci il secondo numero: ");
    cin >> b;

    if (a > b){
        printf("il primo numero e' maggiore\n");
    } else if (b > a){
        printf("il secondo numero e' maggiore\n");
    } else {
        printf("sono uguali\n");
    }
}

// 3
void areaRettangolo(){
    int base, altezza;
    printf("inserisci base: ");
    cin >> base;
    printf("inserisci altezza: ");
    cin >> altezza;

    int area = ( base * altezza ) /2;

    printf("area: %d\n", area);
}

// 4
void maggiorenne(){
    int eta;
    printf("inserisci eta: ");
    cin >> eta;

    if (eta >= 18){
        printf("maggiorenne\n");
    } else {
        printf("minorenne\n");
    }
}

// 5
void simpleCalculator(){
    int num1, num2;
    char segno;

    printf("numero 1: ");
    cin >> num1;
    printf("numero 2: ");
    cin >> num2;
    printf("segno (+, -, *, /): ");
    cin >> segno;

    if (segno == '+'){
        printf("risultato: %d\n", num1 + num2);
    } 
    else if(segno == '-'){
        printf("risultato: %d\n", num1 - num2);
    } 
    else if(segno == '*'){
        printf("risultato: %d\n", num1 * num2);
    } 
    else if(segno == '/'){
        if(num2 != 0)
            printf("risultato: %.2f\n", (double)num1 / num2);
        else
            printf("errore divisione per zero\n");
    } 
    else {
        printf("segno non valido\n");
    }
}

// 6
void sommaToN(){
    int n, somma = 0, num;

    printf("quanti numeri vuoi sommare: ");
    cin >> n;

    for (int i = 0; i < n; i++){
        int print = i+1;
        printf("numero %d: ", print);
        cin >> num;
        somma = somma + num;
    }

    cout << "la somma è: " << somma << endl;
}

// 7
void tabellina(){
    int n;
    printf("numero della tabellina: ");
    cin >> n;

    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

// 8
void contPari(){
    int n, numero;
    int pari = 0;

    printf("quanti numeri: ");
    cin >> n;

    for (int i = 0; i < n; i++){
        int print = i+1;
        printf("inserisci numero %d: ", print);
        cin >> numero;

        if (numero % 2 == 0){
            pari++;
            cout << "il numero " << numero << " è pari" << endl;
        }
    }

    cout << "i numeri pari sono: : " << pari << endl;
}

// 9
void fattoriale(){
    int n;
    long long fattoriale = 1;

    printf("inserisci numero: ");
    cin >> n;

    if (n < 0){
        printf("errore numero negativo\n");
        return;
    }

    for (int i = 1; i <= n; i++){
        fattoriale *= i;
    }

    printf("fattoriale: %lld\n", fattoriale);
}

// 10
void indovinaNumero(){

    srand(time(0));

    int numero = rand() % 100 + 1;
    int n;
    int tentativi = 0;

    do {
        printf("indovina (1-100): ");
        cin >> n;
        tentativi++;

        if (n > numero){
            printf("troppo grande\n");
        } else if (n < numero){
            printf("troppo piccolo\n");
        }

    } while (n != numero);

    printf("hai indovinato in %d tentativi!\n", tentativi);
}

//11
void media(){
    int n, somma = 0;
    vector<int> numeri;

    cout << "Inserisci il numero di valori per cui calcolare la media: ";
    cin >> n;

    numeri.resize(n);  

    for (int i = 0; i < n; i++)
    {
        cout << "Inserisci il numero " << i + 1 << ": ";
        cin >> numeri[i];
        somma += numeri[i];
    }

    float media = (float)somma / n;

    cout << "La media è: " << media << endl;
}

//12
void max(){
    int n;
    vector<int> numeri;

    printf("inserisci il numero di numeri: ");
    cin >> n;
    numeri.resize(n);
    for (int i = 0; i < n; i++)
    {
        int print = i+1;
        printf("inserisci il tuo numero %d° ", print);
        cin >> numeri[i];
    }
    int max = numeri[0];

    for (int i = 1; i < n; i++)
    {
        if (numeri[i]>max) max = numeri[i];
    }

    cout << "il numero più grande è:" << max << endl;  
    
}

//13
void maggiorenni(){
    int n, maggiorenne=0, minorenni=0;
    vector<int> eta;
    printf("inserici quante persone vuoi verificare ");
    cin >> n;
    eta.resize(n);

    for (int i = 0; i < n; i++)
    {
        int print = i+1;
        printf("inserisci età della %d° persona ", print);
        cin >> eta[i];
        eta[i] > 18 ? maggiorenne++ : minorenni++;
    }
    printf("i maggiorenni sono: %d \n", maggiorenne);
    printf("i minorenni sono: %d \n", minorenni);
}

//14
void invertiArray(){
    int n;
    vector<int> listaNumeri;

    printf("inserisci la quantità di numeri che vuoi inserire: ");
    cin >> n;
    listaNumeri.resize(n);

    for (int i = 0; i < n; i++)
    {
        int print = i +1;
        printf("inserisci il tuo numero %d° ", print);
        cin >> listaNumeri[i];
    }
    
    
    
    for (int i = 0; i < n / 2; i++) {
        int temp = listaNumeri[i];
        listaNumeri[i] = listaNumeri[n - 1 - i];
        listaNumeri[n - 1 - i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << listaNumeri[i] << " \n";
    }
    
}

//15
void cercaNumero(){
    int n, opzione, numero;
    vector<int> listaNumeri;

    printf("inserisci la quantità di numeri che vuoi inserire: ");
    cin >> n;

    listaNumeri.resize(n);

    for (int i = 0; i < n; i++)
    {
        printf("inserisci il numero %d: ", i + 1);
        cin >> listaNumeri[i];
    }
    do
    {
        printf("opzioni\n 1) aggiungi un numero\n 2) modifica un numero\n 3) rimuovi un numero\n");
        cin >> opzione;

        switch (opzione)
        {
        case 1:
            printf("inserisci il numero: ");
            cin >> numero;
            listaNumeri.push_back(numero);
            break;

        case 2:
            printf("inserisci il numero da cambiare: ");
            cin >> numero;
            for (int i = 0; i < listaNumeri.size(); i++)
            {
                if (listaNumeri[i] == numero)
                {
                    printf("nuovo numero: ");
                    cin >> listaNumeri[i];
                }
            }
            break;

        case 3:
            printf("inserisci il numero da rimuovere: ");
            cin >> numero;

            listaNumeri.erase(
                std::remove(listaNumeri.begin(), listaNumeri.end(), numero),
                listaNumeri.end()
            );
            break;
        }

        // stampa lista aggiornata
        printf("lista attuale: ");
        for (int x : listaNumeri)
        {
            cout << x << " ";
        }
        cout << endl;

    } while (opzione >= 1 && opzione <= 3);
}

//16
void freccette(){
    int j=0, s=0, punteggio, max=501;
    while (s != max)
    {
        int s_precedente = s;

        for (int i = 0; i < 3; i++)
        {
            cout << "Inserisci punteggio: ";
            cin >> punteggio;

            s = s + punteggio;

            if (s > max)
            {
                cout << "Sforato! Torni a " << s_precedente << endl;
                s = s_precedente;
                break;
            }
        }

        j++;
        cout << "Punteggio attuale: " << s << endl;
    }

    cout << "Hai dovuto fare " << j << " tiri" << endl;
}

//17

void psw_generator(){
    int num;
	string password;
	string num_rand;
	int lettereCasuale;
	int numeroCasuale;
	int n;
	//INIZIALIZZO RANDOM
	srand(time(NULL));

	printf("inserire quantità caratteri desiderati: ");
	cin >> num;
	if(num%2==0) {n= num/2;} else { n = num;}

	for (int i = 1; i <= n; i++) {
		numeroCasuale = rand() % 10;
		num_rand= to_string(numeroCasuale);
		lettereCasuale = 'A' + rand() % 26;

		if(num%2 ==1){
			if (numeroCasuale > 5)
			{
				password += num_rand;
			}else{
				password += lettereCasuale;
			}
		}else{
			if (numeroCasuale > 5)
			{
				password += num_rand;
				password += lettereCasuale;
			}else{
				password += lettereCasuale;
				password += num_rand;
			}
		}
	}

	cout << "la tua password è : " << password << endl;
	cout << "lunghezza  = " << password.length();
}