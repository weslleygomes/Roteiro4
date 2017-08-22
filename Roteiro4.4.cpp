#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

struct tJogadores{
	float votos;
};
int main(){

	tJogadores jogadores[23];
	int votacao = 1, i, c=0;
	int maisvotado = 0;
	float maisvotos =0;

	for(i=0;i<23;i++){
		jogadores[i].votos = 0;
	}

	cout << "Enquete: Quem foi o melhor jogador?" << endl;

	while(votacao != 0){
		printf("Numero do jogador (0=fim): ");
		scanf("%d", &votacao);

		if(votacao == 0){
			break;
		}
		if(votacao>23 ||votacao < 1){
			printf("Informe um valor entre 1 e 23 ou 0 para sair!\n");
			continue;
		}
		jogadores[votacao-1].votos += 1;
		c++;
	}

	cout << "------------------------------------------" << endl;

	for(i=0;i<23;i++){
		if (jogadores[i].votos == 0){
			continue;
		}
		printf("Votos do jogador %d: %.01f%%\n",i+1, (jogadores[i].votos/c)*100);
	}

	cout << "------------------------------------------" << endl;

	for(i = 0; i<23;i++){
		if(jogadores[i].votos > maisvotos){
			maisvotos = jogadores[i].votos;
			maisvotado = i;
		}
	}
	
	printf("O jogador %d foi o mais votado com %.01f%% dos votos!\n",maisvotado+1, ((jogadores[maisvotado].votos/c)*100) );
}
