#ifndef MATRIX2_H
#define MATRIX2_H

#include <iostream>

class Matrix2 {
private:
	int nums[4];
public:
	Matrix2(int x0, int x1, int x2, int x3) : nums{x0, x1, x2, x3} {}
	
	int CalcTrace() {
		return nums[0] + nums[3];
	}
	
	int CalcSide() {
		return nums[1] + nums[2];
	}
	
	bool operator<(Matrix2& mtx) {
		return CalcTrace() < mtx.CalcTrace();
	}
	
	friend bool operator<(const int num, Matrix2& mtx2) {
		return num < mtx2.CalcTrace();
	}
	
	int operator~() {
		return CalcTrace();
	}
	
	friend operator-(Matrix2& mtx) {
		return mtx.CalcSide();
	}
	
	friend std::ostream& operator<<(std::ostream& ost, Matrix2& mtx) {
		ost << "["; 
		
		ost << "(" << mtx.nums[0] << ", " << mtx.nums[1] << ")";
		ost << "(" << mtx.nums[2] << ", " << mtx.nums[3] << ")";
		
		ost << "]";
		return ost;
	}	
};

#endif 