#pragma once
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

void Usage (int argc, char *argv[]){
  
  if ( argc == 1 ){

    cout << argv[0] << ": Falta un número natural como parámetro" << endl;
    cout << "Pruebe " << argv[0] << " --help para más información" << endl;

    exit(EXIT_SUCCESS);
  }

  string kHelpText = "Este programa necesita que se le introduzca un único número natural para poder calcular la suma de los n primeros números";
  string parameter{argv[1]};

  if ( parameter == "--help" ) {

    cout << kHelpText << endl;

    exit(EXIT_SUCCESS);
  }
}

int SquareSum(int in_number){

  int square_sum{0};

  for (int i = 0; i <= in_number; i++){

    square_sum = square_sum + i;

  }

  square_sum = pow (square_sum, 2) ;
    
  return (square_sum);

}

int SumOfSquares(int in_number){

  int sum_of_squares{0};

  for (int i = 0; i <= in_number; i++){

    sum_of_squares += pow(i, 2);

  }

  return (sum_of_squares);

}