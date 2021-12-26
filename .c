#include<stdio.h>
#include<string.h>
int main(){


char nome[100], senha[100];

printf("Informe um nome: ");
gets(nome); //gets no lugar de scanf serve para reconhecer strings. Permitir usar numeros também em char
printf("Informe uma senha: ");
gets(senha);

while(!strcmp(nome,senha)){    //o comando !strcmp compara duas strings e esta ligado a biblioteca string.h
	printf("Nome de usuario e senha devem ser diferentes");
	printf("Informe um nome: ");
	gets(nome);
	printf("Informe uma senha: ");
	gets(senha);
}


}
