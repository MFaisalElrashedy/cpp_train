#pragma once
#include <memory>
#include "Vehicle.h"

class VehicleOwner 
{
public:

  VehicleOwner(Vehicle::VehicleType vehicle);
  virtual ~VehicleOwner();

private: 

  std::unique_ptr<Vehicle> m_Vehicle_owned;
};

