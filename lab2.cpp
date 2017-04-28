#include <iostream>
#include <math.h>
using namespace std;

int Factorial(int);

   int main(){
      int opc, x, fact;
		double e=0.0;
      cout << "Ingrese el ejercicio que desea: \n1.Numerdo de Euler\n2.Area de trapezoide: ";
      cin >> opc;

      if (opc==1){
         cout << "Ingrese el valor de x: ";
         cin >> x;

			for(int i=0;i<=13;i++){

				if (i==0){
					e= e+1;
				}else{
				 fact = Factorial(i);
				 e = e + (pow(x,i) / fact);
				}
			}
		cout << "El numero de euler elevado a: " << x << " es: " << e;

      }else{

      }


   }

	int Factorial (int n){
		int fact=1;
		for(int i=1; i<=n ;i++){
			fact = fact*i;	
		}
	return fact;

	}

