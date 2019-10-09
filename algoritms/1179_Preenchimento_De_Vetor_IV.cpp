#include <iostream>

 using namespace std;

 int main (){

   int pares[5], impares[5], p=0, q=0, N;

   for (int i=1; i<=15; i++){
      cin >> N;
      if (N%2==0){
         pares[p] = N;
         p++;
         if (p==5){
            for(p=0; p<=4; p++){
                cout << "par[" << p << "] = " << pares[p] << endl;
            }
         p=0;
         }
     }
     if (N%2!=0){
        impares[q] = N;
        q++;
        if (q==5){
            for (q=0; q<=4; q++){
                cout << "impar[" << q << "] = " << impares[q] << endl;
            }
        q=0;
        }
     }
   }
   p--;//somou um  a mais antes
   q--;
   for (N=0; N<=q; N++){ //N esta sendo reaproveitado
        cout << "impar[" << N << "] = " << impares[N] << endl;
   }
   for(N=0; N<=p; N++){ //N esta sendo reaproveitado
        cout << "par[" << N << "] = " << pares[N] << endl;
   }
 return 0;
 }
