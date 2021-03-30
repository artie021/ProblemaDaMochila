//==================================================================
/*                  OPERA��ES BIN�RIAS AND E OR                   */
//==================================================================
unsigned short ANDbin(unsigned short val01, unsigned short val02) {

	return (val01 & val02); //Retorna opera��o bin�ria 'and' entre os valores


}
unsigned short ORbin(unsigned short val01, unsigned short val02) {
	
	return (val01 | val02); //Retorna opera��o bin�ria 'or' entre os valores
		
}
//===================================================================
/*              FUN��ES LIGAR, DESLIGAR E TESTAR BITS              */
//===================================================================


unsigned short ligarBit(unsigned short valor, unsigned short position) {

	return ORbin(valor, (1 << position)); // Retorna o valor binario "or" entre um valor e uma mascara
}

unsigned short desligarBit(unsigned short valor, unsigned short position) {

	return ANDbin(valor, ~(1 << position)); // Retorna o valor binario "and" entre um valor e uma mascara
}

bool testarBit(unsigned short valor, unsigned short position) { // A fun��o retorna um booleano para indicar se o bit est� ou n�o ligado
	

	if (valor > (ANDbin(valor, ~(1 << position)))) {
		return true;
	}
	else {
		return false;
	}

}

//========================================================================
/*            FUN��ES DE BITS BAIXOS E BITS ALTOS                       */
//========================================================================

unsigned short bitsBaixos(unsigned short valor) {
	
	return ANDbin(valor, 255);  // Retorna um valor contendo apenas os 8 bits de mais baixa ordem do valor original.
							// Os demais bits s�o colocados para zero.
}
unsigned short bitsAltos(unsigned short valor) {

	return ANDbin(valor, 65280); // Retorna um valor contendo apenas os 8 bits de ordem mais alta do valor original.
						   // Os demais bits s�o colocados para zero.
}

//======================================================================
//======================================================================