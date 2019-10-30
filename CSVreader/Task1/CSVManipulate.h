#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <iterator>
#include <string>
#include <algorithm>
#include "CSVReader.h"
#include <stdlib.h>
#include "CommonUtils.h"

//typedef std::vector<double> Vector; //Vector
//typedef  std::vector<Vector> Matrix; //Matrix



class CSVManipulate
{

  std::string inputFileName;
  int linesCount;

  public:

  CSVManipulate();
  virtual ~CSVManipulate();
//  double bilinearInterpolation(double q11, double q12, double q21, double q22, double x1, double x2, double y1, double y2, double x, double y);
  void manpiulate();
};

