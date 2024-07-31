#include <stdio.h> //input e output
float m=0;
float pi=3.14;
float media=0;

//retorna a media entre 3 numeros
float calcula_media(float n1, float n2, float n3) {
 	m= (n1+n2+n3)/3;
	return m;
}

//inicio
int main(){
	//declaraçao das variaveis
	float n1=3, n2=5.5, n3=2.5;
	//imprimindo a variavel global
	printf("media: %f - # %p \r\n", media, &media);
	//executando a função
	float media = calcula_media(n1, n2, n3);
	//imprimindo a variavel local
	printf("media: %f - # %p \r\n", media, &media);
	//acessando o valor da variavel global
	printf("m: %f \r\n", m);
	return 0;
}
