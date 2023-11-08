/******************************************************************************
Desenvolva um programa para calcular a média da classe 
que processe as notas de acordo com um número arbitrário de alunos toda vez que é executado. 


*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    
    int nota, i, total;
    double media;
    total = 0;
    i = 0;

   cout << "digite as notas ou -1 para sair ";
   cin >> nota;
   
   while(nota != -1){
      
      total+=nota;
       i++; 
       cout << "digite as notas " <<endl;
       cin >> nota;
        
       
       
   }if(i!=0){
       cout << "a media é "<< total/i;
   }else{
       cout << "nenhuma nota foi inserida ";
   }


}



