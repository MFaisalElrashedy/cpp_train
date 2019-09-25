#include "stdafx.h"
#include "VehicleOwner.h"
#include "Car.h"
#include "Motorbike.h"


VehicleOwner::VehicleOwner(Vehicle::VehicleType vehicle)
{
  if (vehicle == Vehicle::Car)
  {
    m_Vehicle_owned = std::make_unique<Car>();
  }
  if (vehicle == Vehicle::Motorbike)
  {
    m_Vehicle_owned = std::make_unique<Motorbike>();
  }
}


VehicleOwner::~VehicleOwner()
{
}
