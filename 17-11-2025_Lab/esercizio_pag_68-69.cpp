#include <iostream>
using namespace std;
const float ck = 1.20;
int main() {
    
     string nome;
     float km_iniziali, km_finali, importo, km_percorsi;
        cout << "Inserisci il tuo nome:\n";
        cin >> nome;
        cout << "Inserisci i chilometri iniziali del'automobile : \n";
        cin >> km_iniziali;
        cout << "Inserisci i chilometri finali del'automobile : \n";    
        cin >> km_finali;
        km_percorsi = km_finali - km_iniziali;
        importo = km_percorsi * ck;
        cout << "gentile " << nome << " hai percorso " << km_percorsi << " km e devi pagare " << importo << " euro.\n";
        cout << "Grazie per aver scelto il nostro servizio, siamo aperti 24 su 24 ore.\n";
    return 0;
}
