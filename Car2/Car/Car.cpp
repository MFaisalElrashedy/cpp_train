#include "Car.h"
#include <iostream>
#

int Car::Totalcars = 0;

Car::Car():Car(0){
  std::cout << "Car()" << std::endl;
}
Car::Car(float amount):Car(amount,0) {
  std::cout << "Car(float)" << std::endl;

}
Car::Car(float amount, int pass)
{
  std::cout << "Car(float , int)" << std::endl;

  Totalcars++;
  fuel = amount;
  speed = 0;
  passengers = pass;
} 

void Car::FillFuel(float amount) {
	fuel = amount;
}

void Car::Accelerate() {
	this->speed++;
	this->fuel -= 0.5f;
}

void Car::Brake() {
	speed = 0;
}
void Car::ShowCount()
{
	std::cout << "No of cars " << Totalcars << std::endl;

}
void Foo(const Car &car)
{

}
void Car::AddPassengers(int passengers) {
	this->passengers = passengers;
	Foo(*this);
}

void Car::Dashboard() const {
	std::cout << "Fuel level : " << fuel << std::endl;
	std::cout << "Speed : " << speed << std::endl;
	std::cout << "Passengers : " << passengers << std::endl; 

}


Car::~Car() {
  std::cout << "destructor Car()" << std::endl;

	Totalcars--;
}
