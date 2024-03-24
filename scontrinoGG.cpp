
#include <iostream>

using namespace std;

int main() {
	
    int numProdotti;
    float totaleSpesa = 0.0;
    float prezzoUnitario;
    int quantita;
    float sconto = 0.0;
    float totaleScontato;

    do {
    	cout << "Inserisci il numero di prodotti: " << endl;
    	cin >> numProdotti;
	}
	while (numProdotti<=0);
	

    for(int i = 0; i < numProdotti; i++) {
        
		do {cout << "Inserisci il prezzo unitario del prodotto " << (i+1) << ": " << endl;
        cin >> prezzoUnitario;
		} while (prezzoUnitario<0);
		do {
		cout << "Inserisci la quantita' del prodotto " << (i+1) << ":" << endl;
        cin >> quantita;
		} while (quantita<=0);
        

        totaleSpesa = prezzoUnitario * quantita;
    }

    if(totaleSpesa > 99.00) {
        sconto = totaleSpesa * 0.10;
    }

    totaleScontato = totaleSpesa - sconto;

    cout << "Il totale dello scontrino e': " << totaleSpesa << " euro." << endl;
    if(sconto > 0.0) {
        cout << "Con uno sconto del 10%, il totale scontato sara': " << totaleScontato << " euro." << endl;
    } else {
        cout << "Non ci sono sconti applicabili." << endl;
    }

    return 0;
}

