#pragma once
/*                      FUNÇÕES DE GENETICO.CPP                              */
//=============================================================================

bool funcaoDeAvaliacao(unsigned short); // Função de avaliação

unsigned short cruzamentoPontoUnico(unsigned short int, unsigned short int ); // Função de cruzamento ponto único
unsigned short cruzamentoAritimetico(unsigned short, unsigned short); // Função de cruzamento aritimetico

unsigned short mutacaoSimples(unsigned short); // Função de mutação simples
unsigned short mutacaoDupla(unsigned short); // Função de mutação dupla
