//Autor: Daniel Caetano de Souza Ferreira
//Data: 12/2021
//Atividade de Alinhamento - I
//Lista de Algoritmos para ser Implementados em C++

//1) Criar um programa em C++ que imprima(escrever na tela) a média
//aritmética entre 3 números digitados pelo usuário.

#include <iostream>

using namespace std;

void calcular_media_aritmetica() {
	int numero[3];
	float mediaAritmetica;

	cout << "Digite 3 numeros para calcular a media aritmetica!"<<endl;
	cout << "Numero 1: =";
	cin >> numero[0];
	cout << "\nNumero 2: =";
	cin >> numero[1];
	cout << "\nNumero 3: =";
	cin >> numero[2];

	mediaAritmetica = (float)(numero[0] + numero[1] + numero[2])/3.0;

	cout << "Media Aritmetica dos numeros:|" << numero[0] << "|" << numero[1] << "|" << numero[2] << "|" << "e igual a:|" << endl;
	cout << "|" << mediaAritmetica << "|"<<endl;

}

int main() {
	calcular_media_aritmetica();
}	