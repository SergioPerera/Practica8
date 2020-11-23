#pragma once 
#include <iostream>
#include <stdlib.h>
using namespace std;


int main (){

  int prime_position{5};
  
  int maybe_prime{2}, counter{0};
  

  while (prime_position > counter) {
  
    bool is_prime = true;
    
    cout << "bucle while" << endl;

    for (int divider = 2; divider < maybe_prime; divider++){

      cout << "bucle for" << endl;
      
      if (maybe_prime % divider == 0){

        is_prime = false;

      }

    }

    if (maybe_prime == true){

      counter++;

      cout << counter << endl;

    }

    maybe_prime++;
    
  }
  
  cout << maybe_prime << endl;
}


