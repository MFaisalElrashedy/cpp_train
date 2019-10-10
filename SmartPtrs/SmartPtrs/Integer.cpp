#include "Integer.h"
#include <iostream>
Integer::Integer()
{
	std::cout << "Integer()" << std::endl;
	m_pInt = new int(0);
}

Integer::Integer(int value) {
	std::cout << "Integer(int) " << value << std::endl;
	m_pInt = new int(value);
}

Integer::Integer(const Integer & obj) {
	std::cout << "Integer(const Integer&) " << *obj.m_pInt << std::endl;
	m_pInt = new int(*obj.m_pInt);
}

Integer::Integer(Integer && obj) {
	std::cout << "Integer(int&&) " << *obj.m_pInt << std::endl;
	m_pInt = obj.m_pInt;
	obj.m_pInt = nullptr;
}

int Integer::GetValue() const {
	return *m_pInt;
}

void Integer::SetValue(int value) {
	*m_pInt = value;
}

#if 0
Integer Integer::operator+(const Integer & a) const
{
  Integer temp;
  *temp.m_pInt = *m_pInt + *a.m_pInt;
  return temp;
}
#endif // 


Integer & Integer::operator++()
{
  ++(*m_pInt);
  return *this; //More efficent pre-incremnet because it returns this
}
Integer Integer::operator++(int)
{
  Integer temp(*this);  // creation of a temp is required
  ++(*m_pInt);
  return temp;

}

bool  Integer::operator==(const Integer & obj) const
{
  return *m_pInt == *obj.m_pInt;

}
Integer & Integer::operator=(const Integer & obj) 
{
  if (this != &obj) //check for self assigment first 
   {
    delete m_pInt;
    m_pInt = new int(*obj.m_pInt);
  }
  return *this;
}
Integer & Integer::operator=(Integer && obj)
{
  if (this != &obj ) //check for self assignment by checking the refrences
  {
    delete m_pInt;
    m_pInt = obj.m_pInt;    //assign the value inside the obj to m_pint
    obj.m_pInt = nullptr;   //assign the pointer of obj to null 
  }
  return *this;
}
/*
void Integer::opertaor()()
{
  std::cout << *m_pInt << std::endl;

}*/
Integer::~Integer() {
	std::cout << "~Integer() " <<  std::endl;
	if (nullptr == m_pInt)
          std::cout << "~Integer() is NULL" << std::endl;
        else
          delete m_pInt;
}
