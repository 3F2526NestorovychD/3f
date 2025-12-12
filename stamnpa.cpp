/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std ;

int main()
{
   int ris ;
   do{
    
        cout <<" menu dei figur disponibili : " << std::endl;
        std::cout << "1 Triangolo" << std::endl;
        std::cout << "2 Quadrato" << std::endl;
        std::cout << "3 Rettangolo" << std::endl;
        std::cout << "4 Rombo" << std::endl;
        std::cout << " scegli una figura ." << std::endl;
        int sce5;
       
        cin >> sce5;
        
        if (sce5 == 1){ std::cout << "Triangolo" << std::endl;}
       else if (sce5 == 2){ std::cout << "Quadrato" << std::endl;}
       else if (sce5 == 3){ std::cout << "Rettangolo" << std::endl;}
       else if (sce5 == 4){ std::cout << "Rombo" << std::endl;}
        else if (sce5 == 5){ std::cout << "I figuri sono finiti . " << std::endl;}
        else { std::cout << " non è valido " << std::endl;}
        std::cout << " Se vuoi unaltra ffigura scrivi 1 se no scrivi 0" << std::endl;
        std::cin >> ris;
}while(ris == 1);
        }
        

    
