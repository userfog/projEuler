#include <iostream>
#include <cmath>
#include <vector>


inline void explode(int target, std::vector<int>& buf){
	int tenner = 1;
	while (tenner <= target){
		buf.push_back(target / tenner % 10);
		tenner *= 10;
	}
}

inline bool checkPalindromic(std::vector<int> &v){

	int lower = v.size() - 1;
	int higher = 0;
	int len = v.size() - 1;

	while(len - lower < len - higher){
		if(v[len - lower] != v[len - higher]){
			return false;
		}
		--lower;
		++higher;
	}

	return true;
}

inline bool checkDivByThree(int target){
	for (int i = 100; i < 999; ++i){
		if (target % i == 0){
			int quo = target / i;
			if (99 < quo && 1000 > quo){
				return true;
			}
		}
	}
	return false;
}

int main(){
	int best = -1;
	for (int i = 999999; i > 0; --i)
	{
		std::vector<int> v;
		explode(i, v);
		bool palindromic = checkPalindromic(v);
		if(palindromic && checkDivByThree(i)){
			best = i;
			goto done;
		}
	}

	return 0;

	done:
	std::cout << best << std::endl;
	return 0;
}