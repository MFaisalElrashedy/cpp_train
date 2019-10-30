#include "CSVReader.h"

CSVReader::CSVReader()
{
 
  std::cout << "Please Enter the input the file name (PATH/filename.csv) " << std::endl;
  std::getline(std::cin, inputFileName);
  file.open(inputFileName);

}

bool CSVReader::isOpened()
{
  if (file.fail()) {

    std::cout << "Can not read file, please check path or file name"  << std::endl;
    return false;
  }
  return true;
}

Matrix CSVReader::getData()
{
  if (CSVReader::isOpened())
  {
    std::cout << "processing........." << std::endl;
    std::cout << "One or more spaces will be trimmed and replaced by , " << std::endl;
    

    Matrix values;

    std::string line = "";

    // Iterate through each line and split the content using delimeter

    while (getline(file, line))
    {
      
      std::string lineValue;
      Vector lineValues;
      std::stringstream ss(line);
        
      //std::cout << "line " << line << std::endl;
     
     //Triming spaces if found 
      std::string lineTrimmed = reduce(line);
     
      //   std::cout << "Trimming "<< lineTrimmed << std::endl;
      
     std::replace(lineTrimmed.begin(), lineTrimmed.end(), delimeter_space, delimeter_comma);
     
   //  std::cout << "comma replaced " << lineTrimmed << std::endl;

     std::stringstream lineToken;

      lineToken.str(lineTrimmed);
   
     
      while (std::getline(lineToken, lineValue, delimeter_comma))
      {
        double value = std::atof(lineValue.c_str());
        lineValues.push_back(value);
      }
    
      values.emplace_back(lineValues);
    }

    // Close the File
    file.close();

    return values;
  }
  else 
    {
    std::cout << "Error openenig the file Check the format "
      << std::endl;
    }
}

CSVReader::~CSVReader()
{
}
