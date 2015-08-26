#include <iostream>


int main(){

	long long sum = 0;
	for (int i = 0; i < 101; ++i)
		sum += i;

	long long sum_squares = 0;
	for(int i = 0; i < 101; ++i)
		sum_squares += (i*i);

	std::cout << (sum*sum) - sum_squares << std::endl;

}