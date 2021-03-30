#include <iostream>
#include <Windows.h>

#include "binario.h" // Incluindo arquivo de cabe��rio binario
#include "genetico.h" // Incluindo arquivo de cabe�ario genetico

using namespace std;

#define Green "\033[1;32;40m" // Definindo cores verde, vermelha e default respectivamente
#define Red "\033[1;31;40m"
#define reset "\033[0m"

int main() {
	
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252); // Definindo a acentua��o no terminal

	unsigned short s1, s2, s3, s4, s5, s6; // Solu��es a serem definidas no input

	cout << "Entre com 6 solu��es iniciais (n�meros entre 0 e 65535): \n";
	cin >> s1;
	cin >> s2;
	cin >> s3;
	cin >> s4;
	cin >> s5;
	cin >> s6;
	cout << "\n";
	system("cls"); //Limpa tela


	//Exibe os resultados das avalia��es feitas pelas fun��es 
	cout << "  Resultado da Avalia��o \n";
	cout << "=========================\n";
	cout << "\n";

	// Aplicando as solu��es na fun��o de avalia��o

	if (funcaoDeAvaliacao(s1)) { 
		cout << right;
		cout << " - " << Green << " OK\n"<< reset << endl; // Exibe cor de texto verde e o 'reset' retorna ao padr�o
	}
	else {
		cout << right;
		cout << " - " << Red << " X\n" << reset << endl; // Exibe cor de texto vermelha
	}

	if (funcaoDeAvaliacao(s2)) {
		cout << right;
		cout << " - " << Green << " OK\n" << reset << endl;
	}
	else {
		cout << right;
		cout << " - " << Red << " X\n" << reset << endl;
	}

	if (funcaoDeAvaliacao(s3)) {
		cout << right;
		cout << " - " << Green << " OK\n" << reset << endl;
	}
	else {
		cout << right;
		cout << " - " << Red << " X\n" << reset << endl;
	}

	if (funcaoDeAvaliacao(s4)) {
		cout << right;
		cout << " - " << Green << " OK\n" << reset << endl;
	}
	else {
		cout << right;
		cout << " - " << Red << " X\n" << reset << endl;
	}

	if (funcaoDeAvaliacao(s5)) {
		cout << right;
		cout << " - " << Green << " OK\n" << reset << endl;
	}
	else {
		cout << right;
		cout << " - " << Red << " X\n" << reset << endl;
	}

	if (funcaoDeAvaliacao(s6)) {
		cout << right;
		cout << " - " << Green << " OK\n" << reset << endl;
	}
	else {
		cout << right;
		cout << " - " << Red << " X\n" << reset << endl;
	}
	

	cout << "=========================\n";
	cout << "\n";

	//Aplicando as solu��es 1 e 2 no cruzamento ponto unico
	if (funcaoDeAvaliacao(cruzamentoPontoUnico(s1, s2))) {
		cout << right;
		cout << " - " << Green << " OK\n" << reset << endl;
	}
	else {
		cout << right;
		cout << " - " << Red << " X\n" << reset << endl;
	};

	// Aplicando as solu��es 3 e 4 no cruzamento aritmetico
	if (funcaoDeAvaliacao(cruzamentoAritimetico(s3, s4))) {
		cout << right;
		cout << " - " << Green << " OK\n" << reset << endl;
	}
	else {
		cout << right;
		cout << " - " << Red << " X\n" << reset << endl;
	};

	//Aplicando a solu��o 5 na fun��o de muta��o simples
	if (funcaoDeAvaliacao(mutacaoSimples(s5))) {
		cout << right;
		cout << " - " << Green << " OK\n" << reset << endl;
	}
	else {
		cout << right;
		cout << " - " << Red << " X\n" << reset << endl;
	};

	//Aplicando a solu��o 6 na fun��o de muta��o dupla
	if (funcaoDeAvaliacao(mutacaoDupla(s6))) {
		cout << right;
		cout << " - " << Green << " OK\n" << reset << endl;
	}
	else {
		cout << right;
		cout << " - " << Red << " X\n" << reset << endl;
	};

}