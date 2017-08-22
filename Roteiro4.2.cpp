#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
 
int main(){
	srand(time(0));
	int THEMYSTERIOSNUMBER = 1+ (rand()%100);
	int n, c =0;
		
	cout << "Tente adivinhar o numero SECRETO! " << endl;
	
	while(n != THEMYSTERIOSNUMBER){
		cin >> n;
		system("cls");
		
		if(n > THEMYSTERIOSNUMBER){
			cout << "Numero maior que o SECRETO! "<< "\n Tente Again!  " << c << endl;
			c++;
		}else{
			cout << "Numero menor que o SECRETO! "<< "\n Tente Again!  " << c << endl;
			c++;
		}
		
	}
	system("cls");
	cout << "Parabens voce ganhou!!!!!!!!!!";
}
