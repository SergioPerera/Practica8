#pragma once
#include <iostream>
#include <cassert>
#include "functions.h"
using namespace std;



bool IsPrime(){

  int number,returnedValue, possiblyPrime{2}, counter;

  cout << "Introduzca un número entero: ";

  cin >> number;

  for (int i = 1; i < number; i++){

    returnedValue = IsPrime(possiblyPrime);

    if (returnedValue == 1){

      counter ++;

    }

    if(counter == number){

      cout << possiblyPrime << endl;

    }

    possiblyPrime++;

  }

}