#include <iostream>

using namespace std;
// Find gcd For Two Numbers
long long gcd(long long a, long long b) {
	while (b) {
		long long tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

// Find Lcm For Two Numbers
long long lcm(long long a, long long b) {
	return a / (long long)(gcd(a, b))* b;
}

int main() {
  long long a, b;
  std::cin >> a >> b;
  std::cout << lcm(a, b) << std::endl;
  return 0;
}
