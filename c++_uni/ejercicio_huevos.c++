//============================================================================
// Name        : ejercicio_huevos.c++
// Author      : Andrick Buitrago Piedrahita 2360249
//============================================================================

#include <stdio.h>
#include <iostream>
#include <string>

//===========================================================================
//clase encargada de recoger los datos
class class_pedir_Datos {
    public:
    //declaro las variables
    std::string var_nombre;
    int var_cantidadA;
    int var_cantidadB;
    int var_cantidadC;

    //metodo
    void met_pedir();
    void met_mostrar(int var_total );

};

//contructor class_leer_Datos, construyo el metodo en el constructor
void class_pedir_Datos::met_pedir(){ // utilizo el contructor y construyo el metodo

        std::cout << "Ingrese su nombre: ";
        std::cin >> var_nombre;
        std::cout << "Ingrese la cantidad de huevos tipo A: ";
        std::cin >> var_cantidadA;
        std::cout << "Ingrese la cantidad de huevos tipo B: ";
        std::cin >> var_cantidadB;
        std::cout << "Ingrese la cantidad de huevos tipo C: ";
        std::cin >> var_cantidadC;
};

//===========================================================================

void class_pedir_Datos::met_mostrar(int var_total){
	std::cout << var_nombre << ", El total es: $" << var_total << std::endl;

};

//===========================================================================


//===========================================================================
// clase para validar los datos de entrada
class class_validar_Datos {
public:
    class_validar_Datos() {
        // Constructor, si es necesario hacer algo aquí
    }

    void met_Validar(int var_cantidadA, int var_cantidadB, int var_cantidadC);
};
void class_validar_Datos::met_Validar(int var_cantidadA, int var_cantidadB, int var_cantidadC) {// Utilize el contructor y construyo el metodo
    if (var_cantidadA < 0 || var_cantidadB < 0 || var_cantidadC < 0) {
        std::cout << "La cantidad de huevos no puede ser negativa." << std::endl;
        exit(1);

    }
};

//===========================================================================


//===========================================================================
// clase para calcular el valor de los huevos
class class_calcular {
//atributos unicos de la clase
  private:
  int atr_A = 800;
  int atr_B = 700;
  int atr_C = 500;

  public:
  int met_calcular(int var_cantidadA, int var_cantidadB, int var_cantidadC); //creo met paso datos

};

int class_calcular::met_calcular(int var_cantidadA, int var_cantidadB, int var_cantidadC) {// utilizo el contructor y construyo el metodo

    int resultado = var_cantidadA * atr_A + var_cantidadB * atr_B + var_cantidadC * atr_C;
    return resultado;
}

//===========================================================================





//===========================================================================
int main() {
    class_pedir_Datos var_huevos;
    var_huevos.met_pedir();


    class_validar_Datos var_validar;
    var_validar.met_Validar(var_huevos.var_cantidadA, var_huevos.var_cantidadB, var_huevos.var_cantidadC);

    class_calcular var_calcular;

    int var_total = var_calcular.met_calcular(var_huevos.var_cantidadA, var_huevos.var_cantidadB, var_huevos.var_cantidadC);


    var_huevos.met_mostrar(var_total);


    return 0;
}
//===========================================================================