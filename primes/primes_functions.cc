#pragma once
#include <iostream>
#include <cassert>
using namespace std;

bool IsPrime(int number) {

  bool prime = true;

  for (int divider = 2; divider < number; divider++){
      if (number % divider == 0){

        prime = false;

      }

    }

  return prime;
}

void usage (int argc, char *argv[]){}