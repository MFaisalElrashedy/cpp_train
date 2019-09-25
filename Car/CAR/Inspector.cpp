#include "stdafx.h"
#include "Inspector.h"


Inspector::Inspector()
{
}


Inspector::~Inspector()
{
}

void Inspector::Inspect(Vehicle *e)
{
  e->Inspection();
}
