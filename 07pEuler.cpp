#include <iostream>
#include <fstream>
#include <string>

int main(){
	std::ifstream myFile;
	myFile.open("manyPrimes.txt");
	std::string s;
	for(int i = 0; i < 10001; ++i){
		myFile >> s;
	}
	std::cout << s << std::endl;
	myFile.close();
}