//============================================================================
// Name        : Objetos3.c++
// Author      : SZS
//============================================================================

#include <iostream>
#include <string>
using namespace std;
//===================================================================================================================================
//                                                          La clase Valida
class class_valida{
    public:
    class_valida();
	bool met_validarN1(int);
	bool met_validarN2(int);
    };
// Constructor de Valida
class_valida::class_valida(){


};


// Los metodos de las clases validar
bool class_valida::met_validarN1(int var_n1){
	if (var_n1<=30){
		return true;
        }
	else{
		return false;
        }
    }
bool class_valida::met_validarN2(int var_n1){
	if (var_n1<=1000000){
		return true;
        }
	else{
		return false;
        }
    }
//===================================================================================================================================


//===================================================================================================================================
//                                          Creación de clase Calcula
class class_calcula{
	public:
	class_calcula();
	int met_calcularPago(int, int);
    };

//El constructor de la clase operacion
class_calcula::class_calcula(){}
int class_calcula::met_calcularPago(int var_x, int var_y){
	return var_x*var_y;
    }
//===================================================================================================================================


//===================================================================================================================================
//                                                  Creación de clase lectura datos

class class_lectura_datos{
    public:
    class_lectura_datos();
    int met_leer_datos_numeros(int, string, string, int, int);
};

// Contructor de lectura datos
class_lectura_datos::class_lectura_datos(){


};

// Los métodos de las clases lectura datos
int class_lectura_datos::met_leer_datos_numeros(int var_cedula, string var_nombres, string var_apellidos, int var_dias, int var_valor){
    std::cout << "Ingrese el número de cédula: ";
    std::cin >> var_cedula;
    getline(cin, var_nombres);
    getline(cin, var_apellidos);
    std::cout << "Ingrese el número días trabajados: ";
    std::cin >> var_dias;
    std::cout << "Ingrese el valor del día: ";
    std::cin >> var_valor;
    return var_cedula, var_nombres, var_apellidos, var_dias, var_valor;
}

//===================================================================================================================================


//===================================================================================================================================
//                                             Creación de clase muestra resultado

class class_muestra_resultado{
    public:
    class_muestra_resultado();
    void met_mostrar_pago();
    };

// Constructor de muestra resultado
class_muestra_resultado::class_muestra_resultado(int var_cedula, string var_nombres, string var_apellidos, int var_dias, int var_valor){


};

// Los métodos de las clases muestra resultado

void class_muestra_resultado::met_mostrar_pago(int var_cedula, string var_nombres, string var_apellidos, int var_dias, int var_valor){ 
    class_lectura_datos var_datos;
    //var_lectura[] = var_datos.met_leer_datos_numeros(var_c, var_n, var_a, var_d, var_v);
    std::cout << "la persona con nombre: " << var_nombres <<" Y su apellidos: " <<var_apellidos << " Con cédula: " << var_cedula << std::endl;
    std::cout << "El valor a pagar es: " << var_dias * var_valor << std::endl;
}


//===================================================================================================================================


//===================================================================================================================================
//                                              Creación de clase pago
class class_pago{
	public:
	class_pago();
	void met_leerDatos();
    };

//El constructor de la clase operacion
class_pago::class_pago(){}
void class_pago::met_leerDatos(){
	int var_x=20;
	int var_y=300000;
	class_valida var_v1;
	if (var_v1.met_validarN1(var_x)){
		//Esta ok los dias trabajados
		if (var_v1.met_validarN2(var_y)){
			// Llamado a la clase Calcula
			int var_sueldo=0;
			class_calcula var_c1;
			 var_sueldo=var_c1.met_calcularPago(var_x, var_y);
			 cout << "!!!SUELDO CALCULADO!!!" << var_sueldo;
             }
		else{
			// Esta errado el sueldo
			cout << "!!!SUELDO INCORRECTO!!!";
            }
        }
	else{
		//Error en los dias trabajados
		cout << "!!!DIAS TRABAJADOS INCORRECTOS!!!";
        }
        }
//===================================================================================================================================


int main() {
	// La instancia de la clase Pago
	class_pago var_p1;
    class_muestra_resultado var_p2;
	var_p1.met_leerDatos();
    var_p2.met_mostrar_pago(var_p2.var_cedula, var_p2.var_nombres, var_p2.var_apellidos, var_p2.var_dias, var_p2.var_valor);
	return 0;
    }