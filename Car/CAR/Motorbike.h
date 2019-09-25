#pragma once
#include "Vehicle.h"
class Motorbike :
  public Vehicle
{
public:

  Motorbike();

  virtual ~Motorbike();

  RevisionStatus Inspection()  override;

};

