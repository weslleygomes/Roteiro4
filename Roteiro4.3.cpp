#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	float c =0 ;
	int i,  ar[6] = {0} , n = 1;
	
	cout << "digite o numero do dado(ATE 6!!!): \n";
	
	while(n !=0){
		cin >> n;
		
		if (n == 0){
			break;
		}
		if(n > 6 || n<1){
			cout << "numero invalido!!!";
			continue;
		}
		ar[n-1] = ar[n-1] + 1;
		c++;
	}
	
	for(i=0; i<6; i++){
		cout << "O numero: " << i+1 << " apareceu em " << (ar[i]/c)*100 << " porcento das veses." << endl; 
	}
}
