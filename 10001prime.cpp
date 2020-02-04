#include <iostream>

bool isPrime(int num) {
  for (int i = 2; i*i <= num; ++i) {
    if ((num % i) == 0) return false;
  }
  return num > 1;
}

int main() {
  int i = 2;
  for (int primes = 0; ; ++i) {
    if (isPrime(i)) {
      if (++primes == 10001) {
        std::cout << i << "\n";
        break;
      }
    }
  }
}