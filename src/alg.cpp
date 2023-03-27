// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
//-------1-------
bool checkPrime(uint64_t) {
if (value <= 1)
    return false;
  for (uint64_t i = 2; i*i <= value; i++) {
    if (value % i == 0)
      return false;
  }
  return true;
}
//-------2-------
uint64_t nPrime(uint64_t n) {
  uint64_t num = 0;
  uint64_t res = 0;
  while (n > 0) {
    if (checkPrime(num)) {
      res = num;
      --n;
    }
    if (kol == n) {
      break;
    }
    ++temp;
  }
  return res;
}
//-------3-------
uint64_t nextPrime(uint64_t) {
  while (true) {
    ++value;
    if (checkPrime(value)) {
      return value;
    }
  }
}
//-------4-------
uint64_t sumPrime(uint64_t hbound) {
 uint64_t sum = 0;
  for (int i = 0; i < hbound; i++) {
    if (checkPrime(i)) {
      sum += i;
    }
  }
