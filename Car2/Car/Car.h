#pragma once
class Car {
private:
	float fuel{ 0 };
	float speed{ 0 };
	int passengers{ 0 };
	int arr[5] = { 1,2,3 };
	char *p{};
	static int Totalcars;
public:
	Car();
	Car(float amount);
	void FillFuel(float amount);
	void Accelerate();
	void Brake();
	void AddPassengers(int count); 
	void Dashboard() const;
	static void ShowCount();
	~Car();
};
