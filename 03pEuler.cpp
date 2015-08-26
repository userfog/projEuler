#include <iostream>
#include <cmath>
#include <cerrno>
#include <cfenv>
#include <cstring>

int main()
{
	long long target = 600851475143;

	long long maxFactor = (long long) std::sqrt(target);

	long long i = 2;

	for(i; i < target; ++i)
	{
		while(target % i == 0){
			target = target / i;
		}
	}

	std::cout << i << std::endl;

	return 0;
}