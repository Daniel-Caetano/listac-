//Autor: Daniel Caetano de Souza Ferreira
//Data: 12/2021
//Atividade de Alinhamento - I
//Lista de Algoritmos para ser Implementados em C++

#include "Lista.h"
#include <iostream>
#include <Windows.h>

using namespace std;


int main() {
	int executar = true;

	do {
		
		cout << "_______________________" << endl;
		cout << "| 1| Atividade 1      |" << endl;
		cout << "| 2| Atividade 2      |" << endl;
		cout << "| 3| Atividade 3      |" << endl;
		cout << "| 4| Atividade 4      |" << endl;
		cout << "| 5| Atividade 5      |" << endl;
		cout << "| 6| Atividade 6      |" << endl;
		cout << "| 7| Atividade 7      |" << endl;
		cout << "| 8| Atividade 8      |" << endl;
		cout << "| 9| Atividade 9      |" << endl;
		cout << "|10| Atividade 10     |" << endl;
		cout << "|11| Atividade 11     |" << endl;
		cout << "|12| Atividade 12     |" << endl;
		cout << "|13| Atividade 13     |" << endl;
		cout << "| 0| Para sair        |" << endl;
		cout << "-----------------------" << endl;
		cout << "Digite um comando!" << endl;
		cin >> executar;

		switch (executar) {
		case 1:
			//Atividade UM
			Lista atividadeUm;
			atividadeUm.digitar_numeros_media();
			atividadeUm.calcular_media_aritmetica();
			//FIM atividade UM
			break;
		case 2:
			//Atividade DOIS
			Lista atividadeDois;
			atividadeDois.digitar_catetos();
			atividadeDois.calcular_hipotenusa();
			//FIM atividade DOIS
			break;
		case 3:
			//Atividade Tres
			Lista atividadeTres;
			atividadeTres.digitar_valor_produto();
			atividadeTres.calcular_desconto_produto();
			//FIM atividade TRES
			break;
		case 4:
			//Atividade QUATRO
			Lista atividadeQuatro;
			atividadeQuatro.entradas_questao_quatro();
			atividadeQuatro.calcular_salario_professor();
			//FIM atividade QUATRO

			break;
		case 5:
			//Atividade CINCO
			Lista atividadeCinco;
			atividadeCinco.digitar_temp_centigrados();
			atividadeCinco.converter_para_fahrenheit();
			//FIM atividade CINCO
			break;
		case 6:

			//Atividade SEIS
			Lista atividadeSeis;
			atividadeSeis.digitar_tempo_e_velocidade_media();
			atividadeSeis.calcular_combustivel_gasto();
			//FIM atividade SEIS
			break;
		case 7:

			//Atividade SETE
			Lista atividadeSete;
			atividadeSete.digitar_dois_numeros();
			atividadeSete.adicao_dois_numeros();
			//FIM atividade SETE
			break;
		case 8:
			//Atividade OITO
			Lista atividadeOito;
			atividadeOito.digitar_numero();
			atividadeOito.verificar_multiplo_tres();
			//FIM atividade OITO
			break;
		case 9:
			//Atividade NOVE
			Lista atividadeNove;
			atividadeNove.digitar_numero_qualquer();
			atividadeNove.verificar_divisao();
			//FIM atividade NOVE
			break;
		case 10:

			//Atividade DEZ
			Lista atividadeDez;
			atividadeDez.digitar_salario();
			atividadeDez.calcular_inss();
			//FIM atividade DEZ
			break;
		case 11:

			//Atividade ONZE
			Lista atividadeOnze;
			atividadeOnze.imprimir_cem_numeros();
			//FIM atividade ONZE
			break;
		case 12:
			//Atividade DOZE
			Lista atividadeDoze;
			atividadeDoze.polegadas_para_centimentros();
			//FIM atividade DOZE
			break;
		case 13:
			//Atividade TREZE
			Lista atividadeTreze;
			atividadeTreze.digitar_base_altura();
			atividadeTreze.calcular_area_triangulo();
			atividadeTreze.calcular_area_retangulo();
			//FIM atividade TREZE
			break;
		case 0:
			executar = 0;
			break;
		default:
			system("cls||clear");
			cout << "Comando invalido, digite novamente" << endl;
			Sleep(2000);
			break;
		}

	} while (executar);

};