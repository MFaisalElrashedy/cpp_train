#pragma once
#include "stdlib.h"
#include <string>
#include <cstdint>


class Vehicle
{
public:

  Vehicle();
  virtual ~Vehicle();
  enum VehicleType {
    Car,
    Motorbike
  };
  enum RevisionStatus
  {
    Unkown ,
    Failed ,
    OK 
  };

  std::string get_m_plate()  const { return this->m_plate; }
  unsigned int get_m_odometer() const { return this->m_odometer; }


  // int get_m_percentage() const { return this->m_percentage; }

  virtual RevisionStatus Inspection() = 0;
  RevisionStatus get_RevisionStatus()const { return this->m_status; }


protected:

  static int s_vehicle_count;
  std::string m_plate;
  RevisionStatus m_status;
 


private:

  unsigned int  m_odometer;


};

