#include <iostream>

using namespace std;

int main (){
	int n, maior = 0;
	
	while(n != 0){
		cout << "Digite um numero: ";
		cin >>  n ;
	
		if(n > maior){
			maior = n;
		}	
	}
	cout << "O maior numero foi: " << maior << endl;
}
