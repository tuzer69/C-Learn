#include <iostream>
#include "Camera.h"

Camera::Camera(const char* name)
{
	this->name = name;
	this->type = "Camera";
}

void Camera::ShowInfo()
{
	std::cout << "Òèï: " << type << std::endl;
	std::cout << "Èìÿ: " << name << std::endl;

}
