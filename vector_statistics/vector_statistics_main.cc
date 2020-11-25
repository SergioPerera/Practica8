#pragma once
#include <iostream>
#include "functions.h"
#include <cstdlib>
#include <vector>
#include <unistd.h>
using namespace std;

int main (){
  
  double RandVar(int in_vector_size, int max_value, int min_value);

  int in_vector_size{0}, max_value{0}, min_value{0}, random_variable{0}, median{0}, deviation{0}; 
  vector<double> vector_random;

  cout << "Este programa solicita el tamaño de un vector y el intervalo en el que estarán comprendidas sus componentes y calculará" 
  << " la media, desviación tipica el máximo y el mínimo de los valores almacenados en el vector" << endl;

  cout << "Introduzca el número de componentes que quiere en el vector: ";
  cin >> in_vector_size;

  cout << "Introduzca el límite superior de los valores del vector: ";
  cin >> max_value;

  cout << "Introduzca el límite inferior de los valores del vector: ";
  cin >> min_value;


  cout << "\n" << " ( "; // hacemos esto para separar la componentes del vector

  for (int i = 0; i < in_vector_size; i++){
  
    vector_random.emplace_back(RandVar(in_vector_size, max_value, min_value));
    cout << vector_random[i] << " ";
    
  }

  cout << ")" << endl;

  median = Median(vector_random, in_vector_size);
  cout << "La media es: " << median << endl;

  deviation = StandardDeviation(vector_random, in_vector_size);

}  