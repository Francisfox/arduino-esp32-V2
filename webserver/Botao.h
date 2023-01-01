#ifndef _BOTAOH_
#define _BOTAOH_

#include "Arduino.h"

class Botao {
  private:
    _pin;
  public:
    boolean LEDonnff = false;                             //Criando variavel boeana iniciando com valor falso.
    String JSONtxt;                                       // Criando as strings

    Botao(int pin);
    void test_Botao();


};
#endif
