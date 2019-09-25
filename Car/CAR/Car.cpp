#include "stdafx.h"
#include "Car.h"
#include "iostream"



Vehicle::RevisionStatus Car::Inspection() 
{
  
  int p_percentage = rand( )% 100 ;

  if (p_percentage  >= 0 && p_percentage  < 97)
  {
   m_status = OK;
  }
  else if (p_percentage >= 97 && p_percentage < 100)
  {
    m_status = Failed;
  }
 
  return m_status;
}

Car::Car()
{
  Vehicle::m_plate = "Ca0" + std::to_string(s_vehicle_count);
 
}


Car::~Car()
{
  std::cout << " Destructing Car " << std::endl;
}
