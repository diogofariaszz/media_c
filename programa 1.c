#include <stdio.h>
//calculando a média de 4 notas
main() {
	
	//notas
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float media;
	
	printf("Digite a primeira nota: ");
	scanf("%f" , &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f" , &nota2);
	printf("Digite a terceira nota: ");
	scanf("%f" , &nota3);
	printf("Digite a quarta nota: ");
	scanf("%f" , &nota4);
	
	//cálculo das notas
	media = (nota1 + nota2 + nota3 + nota4) /4;
	printf("a media das notas é: %f \r\n", media);
	
	//verificando aprovação
	if (media>= 6) {
		printf("Aprovado \r\n");
	} //verificando recuperação 
	else if(media>2) {
		printf("RECUPERAÇÃO \r\n");
	}
	//caso nenhuma das alternativas==TRUE)
	else {
		printf("REPROVADO \r\n");
	}
	
	
	
}	
