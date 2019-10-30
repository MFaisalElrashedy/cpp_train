#pragma once
#include <iostream>
class Integer {
	int *m_pInt;
public:
	//Default constructor
	Integer();
	//Parameterized constructor
         Integer(int value); // to deny implicit cast
	//Copy constructor
	Integer(const Integer &obj);
	//Move constructor
	Integer(Integer &&obj);
	int GetValue()const;
        void SetValue(int value);
        Integer operator+(const Integer &a) const;
        Integer & operator++();
        Integer operator++(int);
        bool operator ==(const Integer &obj)const;
        Integer & operator =(const Integer &obj) ;
        Integer & operator =(Integer &&obj);
        void  operator ()(); 
        
        //explicit operator int();
    //    friend std::istream operator >> (std::istream &in, Integer &a); 
        

        ~Integer();
	
};