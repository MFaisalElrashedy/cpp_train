#include "CSVManipulate.h"

CSVManipulate::CSVManipulate() :linesCount(0)
{

  std::cout << "Enter file output name" << std::endl;
  std::getline(std::cin, inputFileName);


}

CSVManipulate::~CSVManipulate()
{
}


void CSVManipulate::manpiulate()
{
  CSVReader input;
  Matrix dataMatrix = input.getData();
  std::fstream file;

  // Open the file in truncate mode if first line else in Append Mode
  file.open(inputFileName, std::ios::out | (linesCount ? std::ios::app : std::ios::trunc));

  for (long long i = 0; i < dataMatrix.size(); ++i)
  {

    for (long long j = 0; j < dataMatrix[i].size(); ++j)
    { 

      //Interpolating the ZERO values

      if (dataMatrix[i][j] == 0.00)
      {
        std::cout << "Zero is found at (i,j)" << "(" << i
          << "," << j << ")" << std::endl;
        double sum = 0.0;
        int counter = 0;
        if (j > 0)
        {
          sum += dataMatrix[i][j-1];
          counter++;
        }
        if (j < dataMatrix[i].size() - 1)
        {
          sum += dataMatrix[i][j + 1];
          counter++;
        }
        if (i > 0)
        {
          sum += dataMatrix[i - 1][j];
          counter++;
        }
        if (i < dataMatrix.size() - 1)
        {
          sum += dataMatrix[i + 1][j];
          counter++;
        }
        if (counter != 0)
        {
          dataMatrix[i][j] = sum / counter ;
        }
               }
           
      file << dataMatrix[i][j];
      file << ",";

    }

    file << "\n";
    linesCount++;

  }
  file.close();
 }

