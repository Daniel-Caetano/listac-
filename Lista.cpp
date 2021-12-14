#include "Lista.h"
#include <math.h>
#include <iomanip>
#include <stdio.h>
using namespace std;

//Atividade UM
void Lista::digitar_numeros_media() {
	cout << "Digite 3 numeros para calcular a media aritmetica!" << endl;
	cout << "Numero 1: =";
	cin >> numerosMedia[0];
	cout << "\nNumero 2: =";
	cin >> numerosMedia[1];
	cout << "\nNumero 3: =";
	cin >> numerosMedia[2];
}
void Lista::calcular_media_aritmetica() {
	float mediaAritmetica;


	mediaAritmetica = (float)(numerosMedia[0] + numerosMedia[1] + numerosMedia[2]) / 3.0;
	system("cls || clear");
	cout << "RESULTADO:" << endl;
	cout << "Media Aritmetica dos numeros:|" << numerosMedia[0] << "|" << numerosMedia[1] << "|" << numerosMedia[2] << "|" << "e igual a:";
	cout << "|" << mediaAritmetica << "|" << endl;
	cout << "FIM Resultado"<<endl;

}
//Fim atividade Um

//Atividade DOIS
void Lista::digitar_catetos(){
	cout << "Digite os catetos para calcular a hipotenusa!" << endl;
	cout << "Cateto 1: =";
	cin >> catetos[0];
	cout << "\Cateto 2: =";
	cin >> catetos[1];
}
void Lista::calcular_hipotenusa(){
	float hipotenusa;

	hipotenusa = pow(catetos[0], 2) + pow(catetos[1], 2);
	hipotenusa = sqrt(hipotenusa);
	system("cls || clear");
	cout << "RESULTADO:" << endl;
	cout << "Hipotenusa dos numeros:|" << catetos[0] << "|" << catetos[1] << "|"<< "e igual a:";
	cout << "|" << hipotenusa << "|" << endl;
	cout << "FIM Resultado"<<endl;
}
//Fim atividade Dois

//Atividade TRES
void Lista::digitar_valor_produto() {
	cout << "Calcular valor do produto com desconto"<< endl;
	cout << "Digite o valor original do produto!" << endl;
	cin >> valorProduto;
}
void Lista::calcular_desconto_produto() {
	float novoValor;

	novoValor = valorProduto * 0.91;

	system("cls || clear");
	cout << "RESULTADO:" << endl;
	cout << "O valor do produto |" << valorProduto << "| com desconto e igual a:";
	cout <<"|" <<novoValor << "|" << endl;
	cout << "FIM Resultado" << endl;

}
//FIM atividade TRES

//Atividade QUATRO
void Lista::entradas_questao_quatro() {
	cout << "\nCalcular o salario do professor!";
	cout << "\nDigite o valor da hora aula: =";
	cin >> valorAulaHora;
	cout << "\nDigite a quantidade de horas mensal: =";
	cin >>qtdAulas;
	cout << "\nDigite o percentual do INSS: =";
	cin >> inss; 

}
void Lista::calcular_salario_professor() {
	float valorTotalAulas;
	float valorInss;

	valorTotalAulas = valorAulaHora * qtdAulas;//calcula valor total das aulas
	valorInss = (inss / 100) * valorTotalAulas;//calcula inss
	
	system("cls || clear");
	cout << "RESULTADO:" << endl;
	cout << "Salario bruto: " << valorTotalAulas << "|\nSalario liquido: " << valorTotalAulas - valorInss << "|" << endl;
	cout << "Valor inss recolhido: " << valorInss <<"|"<< endl;
	cout << "FIM RESULTADO:" << endl;
}
//FIM atividade QUATRO

//Atividade CINCO
void Lista::digitar_temp_centigrados(){
	cout << "\nConverter de centrigrados para fahrenheit!" << endl;
	cout << "\nDigite a temperatura em Centigrados" << endl;
	cin >> tempCentigrados;
}
void Lista::converter_para_fahrenheit(){
	float fahrenheit;

	fahrenheit = ( (9 * tempCentigrados) + 160) / 5;
	system("cls || clear");
	cout << "RESULTADO:" << endl;
	cout << "A temperatura :" << tempCentigrados << " Centigrados, em fahrenheit e igual a:|" << fahrenheit << "|" << endl;
	cout << "FIM RESULTADO:" << endl;
}
//FIM atividade CINCO

//Atividade SEIS
void Lista::digitar_tempo_e_velocidade_media() {
	cout << "\nCalcular quantilidade de litros de gasolina utilizados!" << endl;
	cout << "\nDigite o tempo gasto na viagem em horas" << endl;
	cin >> tempoGasto;
	cout << "Digite a velocidade media em km/hr " << endl;
	cin >> velocidadeMedia;
}
void Lista::calcular_combustivel_gasto(){
	float distancia;
	distancia = tempoGasto*velocidadeMedia;
	system("cls || clear");
	cout << "RESULTADO:" << endl;
	cout << "Velocidade media                 :|" << velocidadeMedia << "|" << endl;
	cout << "Tempo gasto                      :|" << tempoGasto << "|" << endl;
	cout << "Distancia percorrida             :|" << distancia << "|" << endl;
	cout << "Quantidade de litros utilizados  :|" << distancia/12.00 << "|" << endl;
	cout << "FIM RESULTADO:" << endl;

}
//FIM atividade SEIS

//Atividade SETE
void Lista::digitar_dois_numeros() {
	cout << "\nFazer adicao de dois numeros e somar 8 se maior que 20, ou diminuir 5 se menor ou igual a 20!" << endl;
	cout << "Digite os numeros para a adicao!" << endl;
	cout << "Numero 1: =";
	cin >> numerosAdicao[0];
	cout << "\Numero 2: =";
	cin >> numerosAdicao[1];
}
void Lista::adicao_dois_numeros() {
	int adicao;
	adicao = numerosAdicao[0]+numerosAdicao[1];

	if (adicao > 20) {
		adicao = adicao + 8;
	}
	else if (adicao <= 20) {
		adicao = adicao - 5;
	}
	system("cls || clear");
	cout << "RESULTADO:" << endl;
	cout << "Adicao dos numeros com +8 se maior que 20 ou -5 se menor ou igual a 20:|" << numerosAdicao[0] << " + " << numerosAdicao[1] << "|" << "e igual a:|";
	cout << adicao<<"|"<<endl;
	cout << "FIM RESULTADO:" << endl;

}
//FIM atividade SETE

//Atividade OITO
void Lista::digitar_numero() {
	cout << "\nVerificar se um numero e multiplo de 3" << endl;
	cout << "Digitar um numero qualquer"<<endl;
	cin >> numeroMultiploTres;
}
void Lista::verificar_multiplo_tres() {

	system("cls || clear");
	cout << "RESULTADO:" << endl;
	if (numeroMultiploTres % 3 == 0) {
		cout << "\nO numero :|" << numeroMultiploTres << "| e multiplo de 3" << endl;
	}
	else {
		cout << "\nO numero :|" << numeroMultiploTres << "| NAO e multiplo de 3" << endl;
	}
	cout << "FIM RESULTADO:" << endl;
}
//FIM atividade OITO

//Atividade NOVE
void Lista::digitar_numero_qualquer() {
	cout << "\nVerificar se um numero e divisivel por 10,5 e 2" << endl;
	cout << "Digitar um numero qualquer" << endl;
	cin >> numeroDivisivel;
}
void Lista::verificar_divisao() {
	system("cls || clear");
	cout << "RESULTADO:" << endl;
	cout << "O numero "<<numeroDivisivel<<" e divisivel por ";
	if (numeroDivisivel % 10 == 0) {
		cout << "|10|";
	}
	if (numeroDivisivel % 5 == 0) {
		cout << "|5|";
	}
	if (numeroDivisivel % 2 == 0) {
		cout << "|2|";
	}
	if( !(numeroDivisivel % 10 == 0) && !(numeroDivisivel % 5 == 0) && !(numeroDivisivel % 2 == 0) ) {
		cout << "nenhum dos numeros 10,5 e 2" << endl;
    }
	cout << "FIM RESULTADO:" << endl;
}
//FIM atividade NOVE

//Atividade DEZ
void Lista::digitar_salario() {
	cout << "Digitar o salario para calcular o INSS" << endl;
	cin >> salario;
}
void Lista::calcular_inss() {
	system("cls || clear");
	cout << "RESULTADO:" << endl;
	if (salario <= 600) {
		cout << "INSS isento" << endl;
	}
	else if ( (salario >600 ) && (salario <= 1200)) {
		cout << "INSS e igual a:|" << salario*0.2<<"|"<<endl;
	}
	else if ((salario > 1200) && (salario <= 2000)) {
		cout << "INSS e igual a:|" << salario * 0.25 << "|" << endl;
	}
	else {
		cout << "INSS e igual a:|" << salario * 0.30 << "|" << endl;
	}
	cout << "RESULTADO:" << endl;
}
//FIM atividade DEZ

//Atividade ONZE
void Lista::imprimir_cem_numeros() {
	int j = 0;
	system("cls || clear");
	cout << "RESULTADO:" << endl;
	cout << "Imprimir todos os numeros de 100  ate 1!" << endl<<"|";
	for (int i = 100; i > 0; i--) {
		if (j == 10) {
			cout << endl;
			j = 0;
		}
		cout << i<<"|";
		j++;
	}
	cout << "\nFIM RESULTADO:" << endl;
}
//FIM atividade ONZE

//Atividade DOZE
void Lista::polegadas_para_centimentros() {
	system("cls || clear");
	cout << "RESULTADO:" << endl;
	cout << "|Polegadas     | Centimetros    |" << endl;
	cout << "|--------------|----------------|" << endl;
	//cout << fixed << setprecision(2);
	for (int i = 1; i <= 20; i++) {

		printf("|%2d            |%.2f           |\n", i, (float)(i * 2.54));
	}
	cout << "FIM RESULTADO:" << endl;
}
//FIM atividade DOZE

//Atividade TREZE
void Lista::digitar_base_altura() {
	cout << "\nCalcular area do triangulo e retangulo" << endl;
	cout << "Digite a base!" << endl;
	cin >> base;
	cout << "Digite a altura!" << endl;
	cin >> altura;

}
void Lista::calcular_area_triangulo() {
	float areaTriangulo;

	areaTriangulo = (float)(base * altura) / 2.00;

	system("cls || clear");
	cout << "RESULTADO:" << endl;
	cout << "\nArea do triangulo e igual a:" << areaTriangulo << endl;

}
void Lista::calcular_area_retangulo() {
	float areaRetangulo;

	areaRetangulo = base * altura;

	cout << "Area do retangulo e igual a:" << areaRetangulo << endl;
	cout << "FIM RESULTADO:" << endl;
}
//FIM atividade TREZE