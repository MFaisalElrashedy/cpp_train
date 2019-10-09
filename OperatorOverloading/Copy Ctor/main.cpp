#include "Integer.h"
#include <iostream>
#include <memory>
Integer operator +(const Integer &a, const Integer &b)// for  Integer d = a + 3; and can work without 
{
  std::cout << "Const + Const " << std::endl;
  Integer temp;
    temp.SetValue(a.GetValue() + b.GetValue());
  return temp;
}
Integer operator+(int x, const Integer &b) // for 5+a
{
  std::cout << "int + conts Integer " << std::endl;
  Integer temp;
  temp.SetValue(x + b.GetValue());
  return temp;

}
std::ostream & operator <<(std::ostream &out, const Integer &a) //overloading << need to be globaly because it is inside ostream class
{
  std::cout << "Priniting without a need of get value function" << std::endl;
  out << a.GetValue();
  return out;
 }

/*
std::istream operator >> (std::istream &input,  Integer &a) 
{
  int x; 
  input >> x;
  a.SetValue(x);
  return input;
}
*/
int main() {
  Integer a(1);
  Integer b(3);
  Integer d = a + 3; // 3 is coverted to type Integer a.operator+(5)
  Integer e = 5 + a; // this will not work becuase the opertator+ is overlaoaded localy , otherwise should be overloaded globaly
  Integer c(a + b);
  std::cout << "e = 5+a" << e.GetValue() << std::endl;
  Integer sum = c;
  
  std::cout << sum << std::endl; //overloading << from os stream
  operator <<(std::cout, sum).operator<<(std::endl); //this is what happens by steps from the line above
  
  // std::cin >> a;
  // std::cout << a << std::endl;

  std::cout << "Sum is " << sum.GetValue() <<std::endl;
 
  std::cout << "C is " << c.GetValue() << std::endl;
 
  if (a == b)
  {
    std::cout << "Equal " << std::endl;

  }
  else
  {
    std::cout << "Not equal " << std::endl;
  }

  sum = sum;
  sum = Integer(12);
  std::cin.get();
  return  0;

}