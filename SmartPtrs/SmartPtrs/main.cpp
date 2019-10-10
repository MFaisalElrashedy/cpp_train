#include "Integer.h"
#include <iostream> 
class Intptr {

  Integer *m_p;  // will act as a smart pointer

public:

  Intptr(Integer *p)
  

};



void CreateInteger()
{
  Integer *p = new Integer;
  p->SetValue(3);
  std::cout << p->GetValue() << std::endl;
  delete p;     // without this memory will never be released and destructor wont be called
}

int main()
{
  CreateInteger();

  std::cin.get();
  return 0;

}