
#include <iostream>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <iostream>
#include <string> 
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	
/*	char dia[3]="", mes[4]="", ano[5]="";
	
	printf("Na tela a seguir, voce vera sobre DATA e HORA do sistema\n\n");
	system("ver");
	system("pause");
	system("cls");

	strncat(mes, __DATE__ +0, 3 );	
	strncat(dia, __DATE__ +4, 2 );	
	strncat(ano, __DATE__ +7, 4 );	
	
	printf("012345678901234567890\n" );
	printf("%s \n", __DATE__ );
	
	printf("dia: %s \n", dia );
	printf("Mes: %s \n", mes );
	printf("Ano: %s \n\n\n", ano );
	
	char hora[2]="", minuto[2]="", seg[2]="";
	printf("012345678901234567890\n" );
	printf("%s \n", __TIME__ );
	
	strncat(hora,   __TIME__ +0, 2 );	
	strncat(minuto, __TIME__ +3, 2 );	
	strncat(seg,    __TIME__ +6, 2 );	
	printf("Hora:    %s \n", hora );
	printf("Minuto:  %s \n", minuto );
	printf("Segundo: %s \n", seg );
//	Utilize sscanf() Function to Convert Char Array to an Int
	//https://www.delftstack.com/pt/howto/cpp/how-to-convert-char-array-to-int-in-cpp/*/
/*A função sscanf lê a entrada do buffer de seqüência de caracteres e a interpreta de acordo com o especificador de formato, que é passado como o segundo parâmetro. 
O valor numérico é armazenado no ponteiro para a variável int. Os especificadores de formato são amplamente detalhados na página de manual sscanf:*/
/*	string hor="hora";
	int hr; //falta ver como converter char em int
   
    sscanf(hor.data(), "%d", &hr);
    printf("%d\n", hr);
	printf("agora e: %i",hr);
	if(hr < 12){
		printf("\nBom dia!\n");
	}else if(hr < 18){
		printf("\n boa tarde!!");
	}else{
		printf("\nbom dia!!");
	}*/
	
	
	char tam_palavra, palavra[20], letra[20],mascara[20]="_";
	int vidas=3, x=0,i=0, pontos=0, dica=0;
	char quant[5][7]= {"uma","duas","tres","quatro","cinco"};
	int num;
	char palavras[100][20]={"laranja", "melancia","melao", "banana","uva","framboesa","amora","maca","graviola","abacate","goiaba","kiwi","tangerina","frutadoconde","acerola","pitanga","morango","ponkan","limao","pera",
	"carro","caminhao","caminhonete","bicicleta","moto","barco","canoa","navio","aviao","skate","patinete","monociclo","triciclo","caravela","trator","helicoptero","jangada","onibus","trem","metro",
	"pudim","saladadefruta","bolo","brigadeiro","torta","mousse","quindin","docedeleite","pave","gelatina","sonho","sorvete","flan","bemcasado","bombom","chocolate","trufa","alfajores","pavlova","pedemoleque",
	"abobora","abobrinha","alcachofra","aspargos","beterraba","cenoura","cogumelo","ervilha","inhame","pepino","pimentao","rabanete","tomate","fava","batatadoce","beringela","chuchu","batata","cebola","mandioca",
	"cachorro","gato","leao","vaca","pato","cavalo","marreco","tigre","panda","urso","coelho","capivara","camondongo","camelo","ornitorrinco","bode","cabrito","carneiro","pavao","camaleao"};//colocar 100 palavras aqui
	srand(time(0));
	num=rand()%100;//colocar 100 no lugar de 5
	printf("para teste numero do array %i \n",num);
	printf("para teste nome selecionado %s \n", palavras[num]);
	strcpy(palavra, palavras[num]);
	tam_palavra=strlen(palavra);//strlen mostra a quantidade de caracter no array
	printf("para teste numero de caracter  da palavra %i\n",tam_palavra);
	for(i=0;i<tam_palavra;i++){
		mascara[i]='*';
	}

	printf("\n se vc e cabacao e nao sabe te dou uma dica.. aperte 1 para ganhar a dica:\n\n");
	scanf("%i",&dica);
	if(dica == 1){
		if(num<20){
			printf("\n\nfaz suco e vende na feira... se não sabe ainda eh fruta seu mane!!!\n\n");
		}else if(num<40){
			printf("\n\nte leva mais rapido que andar... se ainda n descobriu ...eh um meio de transporte pangare\n\n");
		}else if(num<60){
			printf("\n\neh gostoso e vem sempre depois do rango.... mannnn n sabe ainda?eh a sobremesa vacilao\n\n");
		}else if(num<80){
		printf("\n\ne bom e geralmente tem na sopa.... se na sabe... tem q se alimentar melhor... sao legumes seu ze\n\n");
	}else if(num<=100){
		printf("\n\nigual a vc e tem no zoologico...  hahahaha essa vc sabe ne?animal kkkkk\n\n");
	}
}else{
		printf("\n\n	ai sim ein manezao....vai na raca mesmo?\n\n");
	
}

	
//	printf("%s \n", __DATE__);
	//o jogo continua enquanto vida>0
	do{
		x=0;//x= acumulador de quantidade de acertos na jogada:
		printf("\n[%s] - digite uma letra: ", mascara);
		scanf("%s",&letra);
		
		for(i=0;i<strlen(palavra);i++){
			if(letra[0]==palavra[i]){
				mascara[i]=palavra[i];
				pontos++;
				x++;
				
			}
		}
		if(x==0){
			vidas--;
			if(vidas==0){
				printf("\n\n hihi voce se lascou, ta enforcado!!!");
				printf("\n\nA palavra era: %s", palavra);
				break;
				
			}else{
				printf("\N Voce errou manezao!!! so tem mais %d vida(s)", vidas);
				
			}
		}else{
			if(pontos==tam_palavra){
				printf("\nai mane....Voce teve sorte dessa vez, ganhou!!!");
				printf("\n a palavra e:%s", palavra);
				break;
			}else{
				printf("\n voce acertou %s letras !!", quant[x-1]);
			}
		}
	}while(vidas>0);
	printf("\n\n");
	return 0;
}



