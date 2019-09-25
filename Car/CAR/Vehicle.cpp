#include "stdafx.h"
#include "Vehicle.h"


int Vehicle::s_vehicle_count = 0;

Vehicle::Vehicle():m_odometer(50),m_status(Unkown)
{
  ++s_vehicle_count;

}


Vehicle::~Vehicle()
{
}

