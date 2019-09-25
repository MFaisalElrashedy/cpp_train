#pragma once
#include "Vehicle.h"

class Car :
  public Vehicle

{

public:
  Car();
  virtual ~Car();
  RevisionStatus Inspection()  override;


private:

  

};

