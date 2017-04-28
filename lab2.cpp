#include <iostream>
#include <math.h>
using namespace std;

int Factorial(int);

   int main(){
      int opc, x, fact;
		float x1,ha, hc, y1, x2, y2, x3, y3, x4, y4, ladoab, ladobd, ladoad, ladodc, ladobc, semiT1, semiT2;//Coordenadas del trapezoide, lado bd es el lado que comparten los triangulos
		double e=0.0;//numero de euler

      cout << "Ingrese el ejercicio que desea: \n1.Numero de Euler\n2.Area de trapezoide: ";
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

			cout << "Ingrese la coordenada x1: ";
			cin >> x1;
			cout << "Ingrese la coordenada y1: ";
			cin >> y1;
			cout << "Ingrese la coordenada x2: ";
         cin >> x2;
         cout << "Ingrese la coordenada y2: ";
         cin >> y2;
			cout << "Ingrese la coordenada x3: ";
         cin >> x3;
         cout << "Ingrese la coordenada y3: ";
         cin >> y3;
         cout << "Ingrese la coordenada x4: ";
         cin >> x4;
         cout << "Ingrese la coordenada y4: ";
         cin >> y4;
			

			//comienzo de operaciones
			ladoab = sqrt(pow((x2-x1),2) + pow ((y2-y1),2));//lado 1 del triangulo 1, y lado del trapecio
			ladobd = sqrt(pow((x4-x2),2) + pow ((y4-y2),2));//lado que comparten los triangulos
			ladoad = sqrt(pow((x4-x1),2) + pow ((y4-y1),2));//lado 3 del triangulo 1, lado del trapecio
			ladodc = sqrt(pow((x4-x3),2) + pow ((y4-y3),2));//lado 3 del trapecio
			ladobc = sqrt(pow((x3-x2),2) + pow ((y3-y2),2));

			//imprimir resultados
			cout << "Los puntos son:\n(" << x1 << "," << y1 << ")" << endl;
			cout << "(" << x2 << "," << y2 << ")" << endl;
			cout << "(" << x3 << "," << y3 << ")" << endl;
 			cout << "(" << x4 << "," << y4 << ")" << endl;
			
			cout << "\nLos lados del trapezoide miden: " << endl;
			cout << "Lado1: " << ladoab << endl;
			cout << "lado2: " << ladoab << endl;
			cout << "lado3: " << ladodc << endl;
			cout << "lado4: " << ladobc << endl;


			cout << "\nLos lados del triangulo 1 miden: " << endl;
			cout << "Lado1: " << ladoab << endl;
			cout << "Lado2: " << ladobd << endl;
			cout << "Lado3: " << ladoad << endl;
			semiT1 = (ladoab + ladobd + ladoad)/2;


			cout << "\nLos lados del triangulo 2 miden: " << endl;
         cout << "Lado1: " << ladoab << endl;
         cout << "Lado2: " << ladodc << endl;
         cout << "Lado3: " << ladoad << endl;
			semiT2 = (ladoab + ladodc + ladoad)/2;
    
			cout << "\nSemiperimetro triangulo 1: " << semiT1;
			cout << "\nSemiperimetro triangulo 2: " << semiT2;
			
			cout << "\n\nPerimetro triangulo 1: " << semiT1*2 << endl;
			cout << "Perimetro triangulo 2: " << semiT2*2 << endl;

			cout << "\nLas alturas del triangulo 1 miden: " << endl;
			cout << "Altura 1: " << 2/ladoab *(sqrt(semiT1*(semiT1-ladoab)*(semiT1-ladobd)*(semiT1-ladoad))) << endl;
			cout << "Altura 2: " << 2/ladobd *(sqrt(semiT1*(semiT1-ladoab)*(semiT1-ladobd)*(semiT1-ladoad))) << endl;
			cout << "Altura 3: " << 2/ladoad *(sqrt(semiT1*(semiT1-ladoab)*(semiT1-ladobd)*(semiT1-ladoad))) << endl;
			ha =  2/ladoab *(sqrt(semiT1*(semiT1-ladoab)*(semiT1-ladobd)*(semiT1-ladoad)));
			cout << "\nLas alturas del triangulo 2 miden: " << endl;
         cout << "Altura 1: " << 2/ladoab *(sqrt(semiT2*(semiT2-ladoab)*(semiT2-ladodc)*(semiT2-ladoad))) << endl;
         cout << "Altura 2: " << 2/ladodc *(sqrt(semiT2*(semiT2-ladoab)*(semiT2-ladodc)*(semiT2-ladoad))) << endl;
         cout << "Altura 3: " << 2/ladoad *(sqrt(semiT2*(semiT2-ladoab)*(semiT2-ladodc)*(semiT2-ladoad))) << endl;
			hc =2/ladoad *(sqrt(semiT2*(semiT2-ladoab)*(semiT2-ladodc)*(semiT2-ladoad)));

			cout << "\nEl area del trapecio es: " << (ladobd*ha)/2 + (ladobd*hc)/2;
			
			
      }


   }

	int Factorial (int n){
		int fact=1;
		for(int i=1; i<=n ;i++){
			fact = fact*i;	
		}
	return fact;

	}

