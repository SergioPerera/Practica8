#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int size_vector{10};

double ChainLength(vector<string> vector_string){

  int chain_length{0};

  for (int i{0}; i < size_vector; i++){

    chain_length += vector_string[i].length();

  }

  cout << "La longitud de la cadena es de: " << chain_length << " caracteres" << endl;

}

string FirstLastCharacter(vector<string> vector_string){

  cout << "El primer caracter es: " << vector_string[0] << "\nEl segundo caracter es: " << vector_string[9] << endl;

}

string IsAbracadabra (vector<string> vector_string){

  for (int i {0}; i < size_vector; i++ ){
    
    if (vector_string[i] == "Abracadabra") {

      cout << "El vector contiene la palabra abracadabra en el puesto número: " << i + 1 << endl;

      break;

    }

  }

}

