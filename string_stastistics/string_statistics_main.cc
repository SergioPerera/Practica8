#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "functions.h"
using namespace std; 

int main () {

  int chain_length{0};  
  string first_last_character, is_abracadabra;

  vector<string> vector_string {"frío", "Calor", "Lueve", "Rojo", "Rosa", "Abracadabra", "Ratón", "Cristal", "Ordenador", "Mesa"};

  chain_length = ChainLength(vector_string);

  first_last_character = FirstLastCharacter(vector_string);

  is_abracadabra = IsAbracadabra(vector_string);


}