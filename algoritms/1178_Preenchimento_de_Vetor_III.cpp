#include <iostream>
#include <iomanip>

 using namespace std;

 int main () {

    double N[100];
    int i=0;

    cin >> N[i];

    cout << "N[" << i << "] = " << fixed << setprecision (4) << N[i] << endl;
    i++;
    while (i<=99){
        N[i]= N[i-1]/2.00;
        cout << "N[" << i << "] = " << fixed << setprecision (4) << N[i] << endl;
        i++;
    }
 return 0;
 }
