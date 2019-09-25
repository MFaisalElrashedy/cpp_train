#include "Car.h"
#include <iostream>

int Car::Totalcars = 0;

Car::Car() {
	Totalcars++;
}
Car::Car(float amount) {
	fuel = amount;

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

	Totalcars--;
}
