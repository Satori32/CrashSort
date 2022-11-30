#include <iostream>
#include <algorithm>
#include <random>
#include <vector>

//nature needs like this.
//are you know force field.
//some time need the crash it.
//are you need?

template<class It,class R>
bool CrashSort(It B, It E, R r) {
	std::shuffle(B, E, r);
	std::shuffle(B, E, r);
	std::shuffle(B, E, r);
	std::sort(B, E);

	return true;
}
template<class It,class R>
bool StableCrashSort(It B, It E, R r) {
	std::shuffle(B, E, r);
	std::shuffle(B, E, r);
	std::shuffle(B, E, r);
	std::stable_sort(B, E);

	return true;
}
template<class T>
bool Show(const std::vector<T>& In) {
	for (auto& o : In) {
		std::cout << o;
	}
	std::cout<<std::endl;
	
	return true;
}

int main() {
	unsigned int RS = 0;
	std::vector<int> V = { 0,1,2,3,4,5,7,6 };
	std::mt19937 mt(RS);

	StableCrashSort(V.begin(), V.end(), mt);
	Show(V);
	CrashSort(V.begin(), V.end(), mt);
	Show(V);

	return 0;
}