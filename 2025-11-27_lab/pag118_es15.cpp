#include <iostream>

using namespace std;

void calcolo_spedizione(float pesa, float tarif, float prezzobiglieto) {

    if (pesa <= 20) {
        
        cout << " \n non ci sono costi aggiuntivi perche il bagaglio non supera 20KG, il prezzo del biglietto è " << prezzobiglieto <<".\n";       }
       
        else {
            float kgsuper = pesa - 20;
            float costoextra = kgsuper * (prezzobiglieto * tarif);
            float prezz_finale = costoextra + prezzobiglieto;

            cout << " \n Il costo dell'spedizione è : "<< prezz_finale <<"\n";


        }
    

    
}

int main() {
   float prezzbiglieto, peso;
    float tariffa = 0.02;  
    cout << "Inserisca il peso del pacco in kg: ";
    cin >> peso;
    cout << "Inserisc il prezzo del biglieto: ";
    cin >> prezzbiglieto;
    calcolo_spedizione(peso, tariffa, prezzbiglieto);

    system("pause");  
    return 0;
}