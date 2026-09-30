#include "Car.hpp"
#include <iostream>
#include <string>

void Car::printInfo() const {
    std::cout << "Make: " << make << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "MPG: " << mpg << std::endl;
}

// Manipulators
void Car::setMake(const std::string& make)
{
    this->make = make;
}

void Car::setModel(const std::string& model)
{
    this->model = model;
}

void Car::setYear(int year)
{
    this->year = year;
}

void Car::setMPG(double MPG)
{
    this->mpg = MPG;
}

// Accessors
std::string Car::getMake() const {
    return make;
}

std::string Car::getModel() const {
    return model;
}

int Car::getYear() const {
    return year;
}

double Car::getMPG() const {
    return mpg;
}