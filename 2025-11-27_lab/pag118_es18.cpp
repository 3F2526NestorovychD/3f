#include <iostream>
#include <string>

using namespace std;

void CostoSoggiorno() { 
    
    int costofisso = 100;
    int settimana = 600;
    int due_settimane = 1100;
    int supplemento_lenzuola = 20;
    int num_settimane, num_lenzuola;
    string supplemento;

    cout << "Inserisci il numero di settimane di soggiorno (1 o 2): ";
    cin >> num_settimane;

    if (num_settimane == 1) {
        cout << "Desidera un supplemento di lenzuola? (Si/No): ";
        cin >> supplemento;
        if (supplemento == "si" || supplemento == "Si" || supplemento == "SI") {
            cout << "Inserisci il numero di lenzuola: ";
            cin >> num_lenzuola;
            cout << "Il costo totale è: " << settimana + (supplemento_lenzuola * num_lenzuola) + costofisso << " euro." << "\n";
        } else {
            cout << "Il costo totale è: " << settimana + costofisso << " euro." << "\n";
        }
    } else if (num_settimane == 2) {
        cout << "Desidera un supplemento di lenzuola? (Si/No): ";
        cin >> supplemento;
        if (supplemento == "si" || supplemento == "Si" || supplemento == "SI") {
            cout << "Inserisci il numero di lenzuola: ";
            cin >> num_lenzuola;
            cout << "Il costo totale è: " << due_settimane + (supplemento_lenzuola * num_lenzuola) + costofisso << " euro." << "\n";
        } else {
            cout << "Il costo totale è: " << due_settimane + costofisso << " euro." << "\n";
        }
    } else {
        cout << "Numero di settimane non valido. Inserisci 1 o 2." << "\n";
    }


     }
int main() {

  CostoSoggiorno();

  system("pause");
  return 0;
}