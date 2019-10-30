#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "CommonUtils.h"
#include "CSVReader.h"
#include "CSVManipulate.h"


int main()
{

  //std::string inputFileName;
  //std::cout << "Please Enter the input the file name (filename.csv) " << std::endl;
  //std::getline(std::cin, inputFileName);
  //
  //CSVReader reader(inputFileName);
  //if (reader.isOpened()) {
  //  // Get the data from CSV File
  //  std::vector<std::vector<std::string> > dataList = reader.getData();
  //  // Print the content of row by row on screen
  //  for (std::vector<std::string> vec : dataList)
  //  {
  //    for (std::string data : vec)
  //    {
  //      std::cout << data << " , ";
  //    }
  //    std::cout << std::endl;
  //  }
  //}
 
 // CSVManipulate he;
  ////he.manpiulate();
  //CSVReader read;
  //Matrix datalist =read.getData();
  //for (Vector vec : datalist)
  //    {
  //      for (double data : vec)
  //      {
  //        std::cout << data << ",";
  //      }
  //      std::cout << std::endl;
  //    }
    
  //std::string test = "ab   ksjks  lkl lkl lkl sss    lkl s";

  //std::cout << reduce(test) << std::endl;


  CSVManipulate input;
  input.manpiulate();
  
  std::cin.get();

  return 0;
}

