#include <iostream>
#include <vector>

template< typename T1, typename T2 >
using Compartor = bool(*)(T1, T2);
 
template < typename Input1, typename Input2 > 
  void sort(std::vector<Input1>& V1, std::vector<Input2>& V2, Compartor<Input1,Input1>comp)
  {
    for (int i = 0; i < V1.size() - 1; ++i)
    
      {
        for (int j = 0; j < V1.size() - 1; ++j)
        {
          if (comp(V1[j], V1[j + 1]))
          {
            Input1 temp = std::move(V1[j]);
              V1[j] = std::move(V1[j + 1]);
              V1[j + 1] = std::move(temp);

              //
              Input2 temp2 = std::move(V2[j]);
              V2[j] = std::move(V2[j + 1]);
              V2[j + 1] = std::move(temp2);
             
          }
        }
      }
    /*for (Input1 v1 : V1)
    {
      std::cout << v1 << " ";
      
    }
    std::cout  << std::endl;
    for (Input2 v2 : V2)
    {
      std::cout << v2 << " ";

    }
    */
    std::cout << std::endl;
  }

  template< typename T1, typename T2 >
  bool Comp(T1 x, T2 y)
  {
    return x > y;
  }



int main()
{
  
  
  std::cout << "1- Define two vectors<any type> " << std::endl; 
  std::cout <<"2- Define a compare function as inline 46"  << std::endl;
  std::cout << "3-  Call sort(Vector 1, Vector2, comparefunction())  " << std::endl;
  std::cout << "4- Vector 1 & 2 will be sorted with respect to the comparefunction that you have devloped" << std::endl;
  
  
  
  std::vector<std::string> V1 = { "ah", "bs", "cklk" };
  std::vector <int> V2 = { 4, 7, 1 };
  sort(V2, V1, &Comp);

    for (std::string v1 : V1)
    {
    
      std::cout << v1.c_str() << " ";

    }
    std::cout  << std::endl;
    for (int v2 : V2)
    {
    std::cout << v2 << " ";

    }
    std::cout << std::endl;
  

  std::cin.get(); 

   return 0;

}