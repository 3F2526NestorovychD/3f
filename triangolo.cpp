/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
j 
*******************************************************************************/


  #include <iostream>
using namespace std;

int main() {
    float b, a, ar;
    std::cout << "Inserisci la base e altezza per calcolare l'area del tuo Triangolo"  << std::endl;
    string figura = "Triangolo";

    cout << "Inserisci la base: ";
    cin >> b;
    cout << "Inserisci l'altezza: ";
    cin >> a;

    ar = b * a / 2;

    cout << "Area del "<< figura <<" = " << ar << endl;

    return 0;
}
        
        

    
