#include <iostream>


inline long long fibbo()
{
	static int ultimate = 1;
	static int penUltimate = 1;

	int tmp = penUltimate;
	penUltimate += ultimate;
	ultimate = tmp;

	return penUltimate;
}

int main()
{
	long long sum = 0;

	for(int i = 0; i < 4000000; ++i)
	{
		long long f = fibbo();

		if(f > 4000000){
			break;
		}
		
		if(i % 3 == 0){
			sum += f;
		}
	}

	std::cout << sum << std::endl;
	return 0;
}