#import <iostream>

using namespace std;

void calculate_next(int& a, int& b, int& c, int m)
{
	c = (a+b) % m;
	a = b;
	b = c;
}

int fibonacci(int n, int m)
{
	//gives the nth fibonacci number

	int a = 0;
	int b = 1;
	int c = n;

	for(int i = 1; i < n; i++)
	{
		calculate_next(a, b, c, m);
	}

	return c;
}

int getLastDigitFibo(long long n)
{
	int pisano = 60; //pisano length for 10 is 60
	int n_prime = n % pisano;
	int fibo_at_n_prime_mod_ten = fibonacci(n_prime, 10);
	return fibo_at_n_prime_mod_ten % 10;
}

void pre_compute(int arr[])
{
	int n = 60;
	arr[0] = 0;
	arr[1] = 1;
	int previous = 0;
	int current = 1;
	int sum_last_digit = 1;

	for(int i = 2; i < n-1; i++)
	{
		int temp_previous = previous % 10;
		previous = current % 10;
		current = temp_previous + previous;
		sum_last_digit = sum_last_digit % 10 + current % 10;
		arr[i] = sum_last_digit %10;
	}
}

int getLastDigitSum(long long n, int arr[])
{	
	int n_prime = n % 60;
	int last_digit = arr[n_prime];
	return last_digit;
}

int main()
{
	long long m, n;

	//pisano period of 10 is 60
	int arr[60];
	pre_compute(arr);

	cin >> m >> n;

	int last_digit_m = getLastDigitFibo(m);
	int last_digit_sum_n = getLastDigitSum(n, arr);
	int last_digit_sum_m = getLastDigitSum(m, arr);

	int result = last_digit_m + last_digit_sum_n - last_digit_sum_m;
	cout << result << endl;

	return 42;
}
