#include "stdafx.h"
#include "Motorbike.h"
#include "iostream"


Vehicle::RevisionStatus Motorbike::Inspection() 
{
  
  int p_percentage = rand() % 100;

  if (p_percentage >= 0 && p_percentage  < 98)
  {
    m_status = OK;
  }
  else if (p_percentage >= 98 && p_percentage < 100)
  {
    m_status = Failed;
  }
  
  return m_status;
}
Motorbike::Motorbike()
{
  
  m_plate = "Mo0" +std::to_string(Vehicle::s_vehicle_count);



}


Motorbike::~Motorbike()
{
  std::cout << " Destructing Motor " << std::endl;
}
