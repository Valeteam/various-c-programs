//  QUALUNQUE PRINTF PUO' ANDARE SOSTITUITO CON LA LOGICA DEL COUT

#ifndef array_program_HPP
#define Farray_program_HPP

#include <iostream>
#include <vector>  
using namespace std; 


void array_program(){
    int x, numeri[30];
    cout << "Inserisci almeno 5 numeri e massimo 30\n";
    cin >> x;

    if (x>= 5 && x<=30)
    {
        cout << "inseriscil i numeri di seguito\n";
        for (int i = 0; i < x; i++)
        {
            cin >> numeri[i];
        }
        
    }else{
        cout << "Il programma si chiuderà";
    }

    int tasto;
    do
    {
        cout << "\n\n" << endl;
        cout << "Opzioni Disponibili\n"; 
        cout << "Visualizzzatore dati: 1\n";
        cout << "Calcolatore Completo: 2\n";
        cout << "Cerca Numero: 3 \n";
        cout << "Invertire Numeri: 4 \n";
        cout << "Sposta Numeri: 5 \n";
        cout << "Sepratore pari e dispari: 6 \n";
        cout << "Ordinare: 7 \n";
        cout << "Sequenza più lunga consecutiva: 8 \n";
        cout << "Cambio Valore: 9 \n";
        cout << "Esci: 10\n";
        cin >> tasto;

        switch (tasto)
        {
        case 1:
        {
            for (int i = 0; i < x; i++)
            {
                cout << "Il numero " << i << "è :" << numeri[i] << "\n";
            }
            break;
        }
        
        case 2:
        {
            
            int somma=0, media, max = numeri[0],min = numeri[0], 
            pari=0, dispari=0,z=0, positivo = 0, negativo = 0, pariAZero = 0;
            
            for (int i = 0; i < x; i++)
            {
                somma = somma + numeri[i];
            }
            cout << "La somma è: " << somma << "\n";
            media = somma / x ;
            cout << "La media è: " << media << "\n";
            for (int i = 1; i < x; i++)
            {
                if (numeri[i]>max){max = numeri[i];}
            }
            for (int n = 1; n < x; n++)
            {
                if (numeri[n]<min){min = numeri[n];}
            }
            cout << "Il numero più grande è: " << max << endl;
            cout << "Il numero più piccolo è: " << min << endl;
            while (z<x)
            {
                if (numeri[z] %2 == 0)
                {
                    pari++;
                    if (numeri[z]>0)
                    {
                        positivo++;
                    }else if(numeri[z] == 0){
                        pariAZero++;
                    }else{
                        negativo++;
                    }
                    
                }else{
                    dispari++;
                    if (numeri[z]>0)
                    {
                        positivo++;
                    }else if(numeri[z] == 0){
                        pariAZero++;
                    }else{
                        negativo++;
                    }
                }
                z++;
                
            }
            cout << "i numeri positivo sono: " << positivo << endl;
            cout << "i numeri negativi sono: " << negativo << endl;
            cout << "i numeri uguali a 0 sono: " << pariAZero << endl;
            cout << "i numeri pari sono: " << pari << endl;
            cout << "i numeri dispari sono: " << dispari << endl;
            break;
        }
        
        case 3:{
            int numeroCerca, quantita = 0;
            cout << "inserisci il numero da trovare ";
            cin >> numeroCerca;
            for (int i = 0; i < x; i++)
            {
                if (numeroCerca == numeri[i])
                {
                    cout << "il numero è presente nella posizione " << i << endl;
                    quantita++;
                }else{
                    cout << "non è prensente il numero" << endl;
                }
                
            }
        break;
        }

        case 4:
        {
            cout << "la nuova sequenza è: \n";
            for (int i = 0; i < x; x--)
            {
                cout << numeri[x];
            }
            break;
        }

        case 5:
        {
            cout << "IN ALLESTIMENTO" << endl;
            break;
        }
    
        case 6:
        {
            int z = 0, numerop[30], numerod[30], cp = 0, cd = 0;

            while(z < x)
            {
                if (numeri[z] % 2 == 0)
                {
                    numerop[cp] = numeri[z];
                    cp++;
                }
                else
                {
                    numerod[cd] = numeri[z];
                    cd++;
                }

                z++;
            }
            cout << "I numeri pari sono: ";
            for (int i = 0; i < cp; i++)
            {
                cout << numerop[i] << " ";
            }
            cout << endl;
            cout << "I numeri dispari sono: ";
            for (int i = 0; i < cd; i++)
            {
                cout << numerod[i] << " ";
            }
            break;
        }

        case 7:
        {
            cout << "IN ALLESTIMENTO" << endl;
            break;
        }

        case 8:
        {
            cout << "IN ALLESTIMENTO" << endl;
            break;
        }

        case 9:
        {
            int numeroCambio;
            cout << "inserisci quale valore vuoi cambiare: " ;
            cin >> numeroCambio;
            cout << "inserisci il nuovo valore: " ;
            cin >> numeri[numeroCambio];
            cout << "Valore Salvato Con successo";
            break;
        }

        default:
            break;
        }
        
    } while (tasto != 10);
    
}

#endif