#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main(){

	float c =0 ;
	int i,  ar[6] = {0} , n = 1;

	cout << "Digite o numero do dado(1 a 6): \n";

	while(n !=0){
		cin >> n;

		if (n == 0){
			break;
		}
		if(n > 6 || n<1){
			cout << "\t--Numero invalido!--\n";
			continue;
		}
		ar[n-1] = ar[n-1] + 1;
		c++;
	}
    cout << "----------------------------------" << endl;
    cout.precision(2);
    cout << setiosflags (ios::fixed) << endl;

	for(i=0; i<6; i++){
		cout << "- O numero " << i+1 << " apareceu em " << (ar[i]/c)*100 << "% das vezes." << endl;
	}
}

