#pragma once
#include <iostream>

class Lista
{

private:
	int numerosMedia[3];//Atividade 1, vetores com 3 numeros digitados

	float catetos[2];//Atividade 2, vetores com os catetos

	float valorProduto;//Atividade 3, variavel para valor original do produto
	
	//atividade 4
	float valorAulaHora;
	float qtdAulas;
	float inss;
	//fim atividade 4

    
	float tempCentigrados;//Atividade 5, variavel que guarda entrada de centigrados

	//atividade 6
	float tempoGasto;
	float velocidadeMedia;
	//fim atividade 6

	int numerosAdicao[2];//Atividade 7, vetor que recebera dois numeros

	int numeroMultiploTres;//Atividade 8, numero para verificar se é multiplo de 3

	int numeroDivisivel;//Atividade 9, numero para verificar se é divisivel por 10, 5 e 2

	float salario;//Atividade 10, variavel para salvar salario de uma pessoa

	//atividade 13, variaveis com a base a altura para calcular area triangulo e retangulo
	float base;
	float altura;
	//fim atividade 13

public:
	//Atividade UM
	void digitar_numeros_media();
	void calcular_media_aritmetica();
	//FIM atividade UM

	//Atividade DOIS
	void digitar_catetos();
	void calcular_hipotenusa();
	//FIM atividade DOIS

	//Atividade TRES
	void digitar_valor_produto();
	void calcular_desconto_produto();
	//FIM atividade TRES

	//Atividade QUATRO
    void entradas_questao_quatro();
    void calcular_salario_professor();
	//FIM atividade QUATRO

	//Atividade CINCO
	void digitar_temp_centigrados();
	void converter_para_fahrenheit();
	//FIM atividade CINCO

	//Atividade SEIS
	void digitar_tempo_e_velocidade_media();
	void calcular_combustivel_gasto();
	//FIM atividade SEIS

	//Atividade SETE
	void digitar_dois_numeros();
	void adicao_dois_numeros();
	//FIM atividade SETE

	//Atividade OITO
	void digitar_numero();
	void verificar_multiplo_tres();
	//FIM atividade OITO

	//Atividade NOVE
	void digitar_numero_qualquer();
	void verificar_divisao();
	//FIM atividade NOVE

	//Atividade DEZ
	void digitar_salario();
	void calcular_inss();
	//FIM atividade DEZ

	//Atividade ONZE
	void imprimir_cem_numeros();
	//FIM atividade ONZE

	//Atividade DOZE
	void polegadas_para_centimentros();
	//FIM atividade DOZE

	//Atividade TREZE
	void digitar_base_altura();
	void calcular_area_triangulo();
	void calcular_area_retangulo();
	//FIM atividade TREZE
};

