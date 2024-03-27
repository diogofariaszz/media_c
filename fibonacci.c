#include <stdio.io>
//este programa calcula
//a sequência de fibonacci
//início
int main() {
	//declarando as variáveis
	int n1=0;
	int n2=1;
	int n3;	
	//exibindo os 2 primeiros
	//números
	printf("%i" , n1);
	printf("%i" , n2);
	//laço for
	int i;
	for (i=1; i<=10; i++){
		//calculando
		n3=n1+n2;
		printf("%i" , n3);
		//att os valores
		//de n1 e n2
		n1=n2;
		n2=n3;
	}
	
}
