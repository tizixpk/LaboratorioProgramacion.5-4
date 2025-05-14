#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	const int MAXF = 3;
	const int MAXC = 5;
	int matriz [MAXF] [MAXC];
	srand(time(0));
	for (int i=0; i < MAXF; i++) {
		for (int j=0; j <MAXC; j++) {
			matriz[i][j] = rand() % 100 + 1;
		}
	}
	
	//punto a
	cout << "Fila 2: " << endl;
	for (int j=0; j <MAXC; j++) {
				cout << "|" << matriz [1][j] << "|" << endl ;
	}
	cout<< endl;
	
	//punto b
	cout << "Columna 3: " << endl;
	for (int i=0; i <MAXF;i++) {
				cout << "|" << matriz [i][2] << "|";
	}
cout << endl;

    //punto c
    int Suma = 0;
    for (int i=0; i < MAXF; i++){
    	Suma = Suma + matriz[i] [0];
	}
    cout << "Suma de la columna 1: " <<Suma << endl; 
    
    //punto d
      for (int i=0; i < MAXF -1; i++){
    	for (int j=0+1; j < MAXF; j++) {
    		if (matriz [i][0] > matriz [j][0] ) {
    		  int Imtercambio  = matriz[i][0];
    		  matriz[i][0] = matriz [j][0];
    		  matriz[j][0] = Imtercambio;
    	}
    		
		}
	}
	
	 cout << "Primera Columna Ordenada:" << endl;
	 for (int i=0; i < MAXF ;i++){
	 	cout << "|" << matriz [i][0] << "|";
	 }
    cout << endl;
    
	return 0;
}
