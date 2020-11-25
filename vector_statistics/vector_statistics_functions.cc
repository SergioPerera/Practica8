#pragma once
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <unistd.h>
#include <cmath>
using namespace std;


double RandVar(int in_vector_size, int max_value, int min_value){

  double random_variable;
  vector<double> vector_random;
  srand (time(NULL));

  for (int i = 0; i < in_vector_size; i++){

    random_variable = ((double) rand() / (RAND_MAX)) * (max_value) + min_value;

    if (random_variable > max_value){

      random_variable -= min_value; 

    }

    usleep(1000000);  // como la semilla del número pseudoaleatorio depende de la variación del tiempo lo que hacemos es esperar a que pase 1 s para que la semilla cambie

    return random_variable;

  }

}

double Median(vector<double> vector_random, int in_vector_size){


  double median{0};

  for (int i{0}; i < in_vector_size; i++){

    median += vector_random[i];

  }

  median = median / in_vector_size;

  return median;

}

double StandardDeviation(vector<double> vector_random, int in_vector_size){

  double variance{0}, deviation;

  for (int i = 0; i < in_vector_size; i++){

    variance += pow(vector_random[i] - Median(vector_random, in_vector_size), 2);

  }

  deviation = sqrt( ( (variance)/(in_vector_size - 1) ) );

  cout << "La desviación estándar es: " << deviation << endl;

}