#include "Matrix2.hpp"

int main() {

	Matrix2 mtx(7, 4, 3, 4);
	Matrix2 mtx2(20, 2, 3, 9);
	
	std::cout << ~mtx << "\n";
	
	std::cout << ~mtx2 << "\n";
	
	std::cout << (mtx < mtx2) << "\n";
	
	std::cout << -mtx << "\n";
	
	std::cout << (2 < mtx);
	return 0;
}