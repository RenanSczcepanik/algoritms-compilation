#include <iostream>

 using namespace std;

 int main (){

   int i, T, vet[1000], j=0;

   cin >> T;

   T--;

   for (i=0; i<=999;){
      while (T>=j){
         vet[i] = j;
         cout << "N[" << i << "] = " << vet[i] << endl;
         if (i==999){
         return 0;
         }
         i++;
         j++;
      }
    j=0;
   }
 return 0;
 }
