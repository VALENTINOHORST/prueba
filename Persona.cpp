#include <iostream>
#include "Persona.h"
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

string* leerArchivo(const string& rutaArchivo, int& cantLineas) { //DEVUELVE ARREGLO DINAMICO CON LOS DATOS
    ifstream archivo(rutaArchivo);
    string linea;
    cantLineas = 0;

    if (archivo.is_open()) {
        while (getline(archivo, linea)) {
            cantLineas++;
        }

        archivo.clear();
        archivo.seekg(0, ios::beg); // PARA VOLVER AL INICIO DEL ARCHIVO

        string* datos = new string[cantLineas];
        for (int i = 0; i < cantLineas; i++) {
            getline(archivo, datos[i]);
        }
        archivo.close();
        return datos;
    } else {
        cout << "ERROR: No se pudo abrir el archivo " << rutaArchivo << endl;
        return nullptr;
    }
}

Persona::Persona(){
    srand(static_cast<unsigned int>(time(0))); //para aleatorizar
    int cantLineas;
    string* datos;

    //NACIONALIDAD
    datos = leerArchivo("./INFO/NACIONALIDAD.txt", cantLineas);
    if (datos != nullptr) {
        int indiceAleatorio = rand() % cantLineas;
        this->nacionalidad = datos[indiceAleatorio];
        delete[] datos;
    }

    //FECHA DE NACIMIENTO
    datos = leerArchivo("./INFO/FECHANACIMIENTO.txt", cantLineas);
    if (datos != nullptr) {
        int indiceAleatorio = rand() % cantLineas;
        this->fechaNacimiento = datos[indiceAleatorio];
        delete[] datos;
    }

    //TIPO DE VISITA
    datos = leerArchivo("./INFO/TIPOVISITA.txt", cantLineas);
    if (datos != nullptr) {
        int indiceAleatorio = rand() % cantLineas;
        this->tipoVisita = datos[indiceAleatorio];
        delete[] datos;
    }

    //DURACION DE LA ESTANCIA
    datos = leerArchivo("./INFO/DURACIONESTANCIA.txt", cantLineas);
    if (datos != nullptr) {
        int indiceAleatorio = rand() % cantLineas;
        this->duracionEstancia = datos[indiceAleatorio];
        delete[] datos;
    }

    //ESTADO CIVIL
    datos = leerArchivo("./INFO/ESTADOCIVIL.txt", cantLineas);
    if (datos != nullptr) {
        int indiceAleatorio = rand() % cantLineas;
        this->estadoCivil = datos[indiceAleatorio];
        delete[] datos;
    }
}

void Persona::mostrarInfo(){
    //DATOS DEL NIVEL 1
    cout << "Nacionalidad: " << this->nacionalidad << endl;
    cout << "Fecha de nacimiento: " << this->fechaNacimiento << endl;
    cout << "Tipo de visita: " << this->tipoVisita << endl;
    cout << "Duracion de la estancia: " << this->duracionEstancia << endl;
    cout << "Estado civil: " << this->estadoCivil << endl;
}
