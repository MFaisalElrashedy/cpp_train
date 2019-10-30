#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include "CommonUtils.h"

class CSVReader
{
  std::string inputFileName;
  std::ifstream file;

  const char delimeter_space = ' ';
  const char delimeter_comma = ',';

public:
  CSVReader(); 
  ~CSVReader();

  // Function to check if file is opened correctly
  bool isOpened();

  // Function to fetch data from a CSV File
  Matrix getData();
};
