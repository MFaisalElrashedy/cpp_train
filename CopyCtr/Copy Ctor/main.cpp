#include "Integer.h"
#include <iostream>

Integer Add(const Integer &a, const Integer &b){
	Integer temp ;
	temp.SetValue(a.GetValue() + b.GetValue()) ;
	return temp ;    // Here copy constructor would be called only if there is no move constructor
}
int main() {
	Integer a(1), b(3) ;
	a.SetValue(Add(a,b).GetValue()) ;
	
        std::cin.get();

	return 0;
}