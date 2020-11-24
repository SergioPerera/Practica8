#pragma once
#include <iostream>
#include <cstring>
#include <cmath>
#include "functions.h"
using namespace std;



int main (int argc, char *argv[]){

  Usage (argc, argv);
  string in_number{argv[1]};

  cout << "Este programa calcula la diferencia entre el cuadrado de la suma y la suma de los cuadrados desde 1 hasta el número introducido " << endl;

  int square_sum, sum_of_squares, difference_of_squares, integer_in_number{stoi(in_number)};
  
  square_sum = SquareSum(integer_in_number);

  sum_of_squares = SumOfSquares(integer_in_number);

  difference_of_squares = square_sum - sum_of_squares;

  cout << difference_of_squares << endl;


}