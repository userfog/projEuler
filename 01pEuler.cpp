#include <iostream>
int main()
{
	int mapper[1000] = {0};

	for(int i = 0; i < 1000; ++i){
		if(i%3 == 0){
			mapper[i] = i;
		} else if(i%5 == 0){
			mapper[i] = i;
		}
	}

	int sum = 0;
	for(int i = 0; i < 1000; ++i){
		sum += mapper[i];
	}
	
	std::cout << sum << std::endl;
	return 0;
}