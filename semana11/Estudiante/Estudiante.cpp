#include <string>
#include "Estudiante.h"

void Estudiante::setCarrera(std::string carrera) {
    this->carrera = carrera;
}

std::string Estudiante::getCarrera() {
    return carrera;
}

int Estudiante::getCodigo() {
    return this->codigo;
}

std::string Estudiante::getName() {
    return this->nombre;
}

bool Estudiante::esMayordeEdad() {
    if (this->edad >= 18)
        return true;
    return false;            
}

void Estudiante::setNombre(std::string nombre) {
    this->nombre = nombre;
}