#include <iostream>
#include "binario.h" //Adicionando arquivo de cabeçario 'binario' para uso dos testes


using namespace std;

#define BAG_WS 20 // Peso máximo suportado pela mochila

/*   PESOS DOS OBJETOS (KG) */
//=========================
#define objA_peso 12
#define objB_peso 3
#define objC_peso 5
#define objD_peso 4
#define objE_peso 9
#define objF_peso 1
#define objG_peso 2
#define objH_peso 3
#define objI_peso 4
#define objJ_peso 1
#define objK_peso 2
#define objL_peso 4
#define objM_peso 5
#define objN_peso 2
#define objO_peso 4
#define objP_peso 1
//=========================

/*  PREÇOS DOS OBJETOS ($) */
//=========================
#define objA_preco 4
#define objB_preco 4
#define objC_preco 8
#define objD_preco 10
#define objE_preco 15
#define objF_preco 3
#define objG_preco 1
#define objH_preco 1
#define objI_preco 2
#define objJ_preco 10
#define objK_preco 20
#define objL_preco 15
#define objM_preco 10
#define objN_preco 3
#define objO_preco 4
#define objP_preco 12
//=========================

//===================================================
/*                 AVALIAÇÃO                       */
//===================================================

/* -->funcaoDeAvaliacao<-- Exibe o valor e peso total da solução e retorna um booleano
indicando se o peso está dentro do peso máximo da mochila*/

bool funcaoDeAvaliacao(unsigned short valor) {
	unsigned short int peso = 0, preco = 0; //Os valores começam com 0 para caso a solução não ponha itens na mochila 


		//Testando cada bit do número inserido 
	if (testarBit(valor, 15)) { // caso diferente de false '0' o item será posto na mochila
		peso += objA_peso; // Adicionando seu peso a mochila
		preco += objA_preco; // Adicionando seu valor 
	}
	if (testarBit(valor, 14)) {
		peso += objB_peso;
		preco += objB_preco;
	}
	if (testarBit(valor, 13)) {
		peso += objC_peso;
		preco += objC_preco;
	}
	if (testarBit(valor, 12)) {
		peso += objD_peso;
		preco += objD_preco;
	}
	if (testarBit(valor, 11)) {
		peso += objE_peso;
		preco += objE_preco;
	}
	if (testarBit(valor, 10)) {
		peso += objF_peso;
		preco += objF_preco;
	}
	if (testarBit(valor, 9)) {
		peso += objG_peso;
		preco += objG_preco;
	}
	if (testarBit(valor, 8)) {
		peso += objH_peso;
		preco += objH_preco;
	}
	if (testarBit(valor, 7)) {
		peso += objI_peso;
		preco += objI_preco;
	}
	if (testarBit(valor, 6)) {
		peso += objJ_peso;
		preco += objJ_preco;
	}
	if (testarBit(valor, 5)) {
		peso += objK_peso;
		preco += objK_preco;
	}
	if (testarBit(valor, 4)) {
		peso += objL_peso;
		preco += objL_preco;
	}
	if (testarBit(valor, 3)) {
		peso += objM_peso;
		preco += objM_preco;
	}
	if (testarBit(valor, 2)) {
		peso += objN_peso;
		preco += objN_preco;
	}
	if (testarBit(valor, 1)) {
		peso += objO_peso;
		preco += objO_preco;
	}
	if (testarBit(valor, 0)) {
		peso += objP_peso;
		preco += objP_preco;
	}
	//______________________________________________________________________________

	//Exibindo os valores com a formatação de espaços
	cout << right; cout.width(5); cout << valor;
	cout << right; cout.width(3); cout << " - $" << preco << " - ";
	cout << right; cout.width(2); cout << left << peso << "Kg ";
	//_______________________________________________

	// Verificando se o peso dos itens da solução é suportado pela mochila
	if (peso > BAG_WS) {
		return false;
	}
	else {
		return true;
	}
	//______________________________________________________________________
}

/* ===============================================================================*/
/*                             CRUZAMENTOS                                        */
/* ===============================================================================*/

unsigned short cruzamentoPontoUnico(unsigned short int val01, unsigned short int val02) {
	
	return ORbin(bitsAltos(val01), bitsBaixos(val02)); //Retorna um valor inteiro representando o cruzamento de ponto único entre as soluções
}

unsigned short cruzamentoAritimetico(unsigned short val01, unsigned short val02) {
	unsigned short valorDeRetorno;

	valorDeRetorno = ANDbin(val01, val02);

	return valorDeRetorno; // Retorna um valor inteiro representando o cruzamento aritmético entre as soluções

}
/* ________________________________________________________________________________*/

/* ===============================================================================*/
/*                                    MUTAÇÕES                                    */
/* ===============================================================================*/

unsigned short mutacaoSimples(unsigned short valor) {
	unsigned short valorDeRetorno;

	if (testarBit(valor, 9) == 1) {
		valorDeRetorno = desligarBit(valor, 9); // Caso o bit esteja ligado ele será desligado
	}
	else {
		valorDeRetorno = ligarBit(valor, 9); // Caso o bit esteja desligado ele será ligado
	}


	return valorDeRetorno; // Retorna um valor inteiro representando a mutação simples da solução
}

unsigned short mutacaoDupla(unsigned short valor) {
	unsigned short valorDeRetorno;

	if (testarBit(valor, 3) == 1) {
		valorDeRetorno = desligarBit(valor, 3);
	}
	else {
		valorDeRetorno = ligarBit(valor, 3);
	}

	if (testarBit(valorDeRetorno, 12) == 1) { // Passando o retorno da primeira mutação para mais um teste
		valorDeRetorno = desligarBit(valorDeRetorno, 12);
	}
	else {
		valorDeRetorno = ligarBit(valorDeRetorno, 12);
	}


	return valorDeRetorno; // Retorna um valor inteiro representando a mutação dupla da solução

}
//===================================================