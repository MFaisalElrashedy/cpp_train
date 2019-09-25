// Car.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Vehicle.h"
#include "Car.h"
#include "Motorbike.h"  
#include "Inspector.h"
#include "list"
#include "iostream"

int main()
{

  std::list <Vehicle*> Vehicles;
  for (int i = 0; i <= 110; ++i)
  {

    if (0 == i % 2)
    {

      Car *c = new Car();
      Vehicles.push_back(c);
    }
    else
    {
      Motorbike *m = new Motorbike();
      Vehicles.push_back(m);
    }
  }
  for (auto it_vehicle : Vehicles)
  {
    Inspector::Inspect(it_vehicle);
  }

  std::cout << "No of Vehicles " << Vehicles.size() << std::endl;

  int no_cars{ 0 };
  int no_motos{ 0 };
  int no_OK{ 0 };
  int no_Failed{ 0 };

  for (auto it_vehicle : Vehicles)
  {
    std::string plate = it_vehicle->get_m_plate().substr(0, 2);

    /*   safer but slower
    Car* c = dynamic_cast<Car*>(it_vehicle);
    Motorbike* m = dynamic_cast<Motorbike*>(it_vehicle);

    if (c != nullptr)
    {
       //  do stuff
    }
    if (m)
    {
      //do stuff
    }
      */
    if (plate == "Ca")
    {
      ++no_cars;
    }
    else if (plate == "Mo")
    {
      ++no_motos;
    }

    Inspector::Inspect(it_vehicle);

    auto status = it_vehicle->get_RevisionStatus();

    if (status == Vehicle::Failed)
    {
      
      ++no_Failed;
    }
    if (status == Vehicle::OK)
    {
      ++no_OK;
    }

  }
  double OK_percentage = 100.00 * static_cast<double> (no_OK) / Vehicles.size();

  double Failed_percentage = 100.00 * static_cast<double> (no_Failed) / Vehicles.size();
  std::cout << "ssss" << no_OK << no_Failed << std::endl;

  std::cout << "Number of Cars are " << no_cars << " and no of motors are "
    << no_motos << std::endl;

  std::cout << " Percentage of OK vehicles " << OK_percentage
    << "Percentage of Failed vehicles " << Failed_percentage
    << std::endl;

  

  while ( Vehicles.size()>0)
  {
    delete Vehicles.front();
    Vehicles.pop_front();
  }
 
   std::cin.get();

    return 0;
}

