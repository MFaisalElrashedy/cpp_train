#include "Integer.h"
#include <memory>

void Display(Integer *p)
{
  if (!p)
  {
    return;
  }
  std::cout << p->GetValue() << std::endl;
}
Integer * GetPointer (int value) {
  Integer *p = new Integer{ value };
  std::cout << "p" << p << std::endl;
  return p;
}

void store(std::unique_ptr<Integer> p)
{
  std::cout << "saving p into a file " << p->GetValue() << std::endl;
}
void store2(std::unique_ptr<Integer> &p)
{
  std::cout << "saving p into a file by ref " << p->GetValue() << std::endl;
}
void operate(int value)
{
 // Integer *p = GetPointer(value);
  std::unique_ptr<Integer> p{ GetPointer(value)};
  if (p == nullptr)
  {
  //  p = new Integer{ value };
    p.reset(new Integer{ value });
  }
  p->SetValue(100);
  //Display(p);
  Display(p.get());  //.get get Integer
 // delete p; no need as it deletes automatically
  p = nullptr;
  // p = new Integer{};
  p.reset(new Integer{});
  *p = __LINE__;
  Display(p.get());
  store2(p); // passing by refernce by not best practice
  *p = 200; // We can still use p because it was passed by ref
  store(std::move(p)); 
  //  delete p;
}

/**************shared_ptr************/
class Project {
public:
  ~Project()
  {
    std::cout << "~Project()" << std::endl;
  }
};
class Employee {
  std::shared_ptr<Project> m_pProject;
public:
  void setProject(std::shared_ptr<Project> p)
  {
    m_pProject = p;
  }
  std::shared_ptr<Project> GetProject()const
  {
    return m_pProject;
  }
  ~Employee()
  {
    std::cout << "~Employee()" << std::endl;
  }
};
std::shared_ptr<Employee> AssignProject()
{
  std::shared_ptr<Project> p{ new Project{} };
  std::unique_ptr<Employee> e{ new Employee{} };
  e->setProject(p);
  return std::shared_ptr<Employee>{std::move(e)};

}
int main()
{
  auto sp = AssignProject();
 // operate(5);

  std::cin.get();
  return 0;
}