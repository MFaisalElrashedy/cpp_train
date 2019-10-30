#pragma once
#include <iostream>
#include <string>
#include <vector>

typedef std::vector<double> Vector; //Vector
typedef  std::vector<Vector> Matrix; //Matrix

std::string trim(const std::string& str,
  const std::string& whitespace = " \t");

std::string reduce(const std::string& str,
  const std::string& fill = " ",
  const std::string& whitespace = " \t");
