#include <iostream>

 using namespace std;

 int main (){

   int N, i=0, menor, n=0;

   cin >> N;

   int vet[N];

   while (i<N){
   cin >> vet[i];
   i++;
   }
   menor = vet[0];
   for (i=1; i<N; i++){
        if (vet[i]<menor){
           menor = vet[i];
           n = i;
        }
   }
   cout << "Menor valor: " << menor << endl;
   cout << "Posicao: " << n << endl;
 return 0;
 }
