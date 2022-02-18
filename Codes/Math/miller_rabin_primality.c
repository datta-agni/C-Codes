#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * calculates (a * b) % c taking into account that a * b might overflow
 */
long long mulmod(long long a, long long b, long long mod) {
  long long x = 0, y = a % mod;
  while (b > 0) {
    if (b % 2 == 1) {
      x = (x + y) % mod;
    }
    y = (y * 2) % mod;
    b /= 2;
  }
  return x % mod;
}
/*
 * modular exponentiation
 */
long long modulo(long long base, long long exponent, long long mod) {
  long long x = 1;
  long long y = base;
  while (exponent > 0) {
    if (exponent % 2 == 1) x = (x * y) % mod;
    y = (y * y) % mod;
    exponent = exponent / 2;
  }
  return x % mod;
}

/*
 * Miller-Rabin Primality test, iteration signifies the accuracy
 */
int Miller(long long p, int iteration) {
  int i;
  long long s;
  if (p < 2) {
    return 0;
  }
  if (p != 2 && p % 2 == 0) {
    return 0;
  }
  s = p - 1;
  while (s % 2 == 0) {
    s /= 2;
  }
  for (i = 0; i < iteration; i++) {
    long long a = rand() % (p - 1) + 1, temp = s;
    long long mod = modulo(a, temp, p);
    while (temp != p - 1 && mod != 1 && mod != p - 1) {
      mod = mulmod(mod, mod, p);
      temp *= 2;
    }
    if (mod != p - 1 && temp % 2 == 0) {
      return 0;
    }
  }
  return 1;
}
// Main
int main() {
  int iteration = 5;
  long long num;
  printf("Enter integer to test primality: ");
  scanf("%lld", &num);
  if (Miller(num, iteration))
    printf("\n%lld is prime\n", num);
  else
    printf("\n%lld is not prime\n", num);
  return 0;
}