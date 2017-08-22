#include <stdio.h>
#include <math.h>

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

	

	while(votacao != 0){

		printf("qual jogador vc quer votar?: ");

		scanf("%d", &votacao);

		if(votacao == 0){

			break;

		}

		if(votacao>23 ||votacao < 1){

			printf("jogador invalido!\n");

			continue;

		}

		jogadores[votacao-1].votos += 1;

		c++;

	}

	for(i=0;i<23;i++){

		if (jogadores[i].votos == 0){

			continue;

		}

		printf("votos do jogador %d: %.02f\n",i+1, (jogadores[i].votos/c)*100);

	}

	for(i = 0; i<23;i++){

		if(jogadores[i].votos > maisvotos){

			maisvotos = jogadores[i].votos;

			maisvotado = i;

		}

	}

	printf("O jogador %d foi o mais votado com %f porcento dos votos!",maisvotado+1, ((jogadores[maisvotado].votos/c)*100) );

}
