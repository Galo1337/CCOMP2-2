#ifndef __ESTUDIANTE_H__
#define __ESTUDIANTE_H__

#include <iostream>
#include <string>

class Estudiante {
    private:
        int codigo;
        std::string nombre;
        char sexo;
        int edad;
        std::string carrera;
    public:
        Estudiante(int cod, std::string n, char s, std::string car, int e) : 
                codigo(cod), nombre(n), sexo(s), carrera(car), edad(e){}

        void setCarrera(std::string carrera);
        std::string getCarrera();
        int getCodigo();
        std::string getName();
        bool esMayordeEdad() ;
        void setNombre(std::string);

        ~Estudiante() {
            std::cout << "Invocando al destructor " << nombre << std::endl;
        }

};

#endif
