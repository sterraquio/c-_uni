// autor: Andrick Buitrago Piedrahita
//codigo : 202360219
// Programacion orientada a objertos


#include <iostream>
#include <limits>
#include <complex>
#include <iomanip> 
#include <sstream>
using namespace std;

// Clase Valida para validar datos
class class_Valida {
public:
    class_Valida();
    bool met_ValidarN1(int);
    bool met_ValidarN2(int);
};

// Constructor
class_Valida::class_Valida() {
    
}

// Método para validar N1 (los días trabajados)
bool class_Valida::met_ValidarN1(int var_n1) {
    return var_n1 <= 30;
}

// Método para validar N2 (el valor del día)
bool class_Valida::met_ValidarN2(int var_n2) {
    return var_n2 <= 1000000;
}

// Clase encargada de realizar cálculos del sueldo
class class_Calcula {
public:
    class_Calcula();
    int met_CalcularPago(int, int);
};

// Constructor 
class_Calcula::class_Calcula() {
    
}

// Método para calcular el sueldo
int class_Calcula::met_CalcularPago(int var_x, int var_y) {
    return var_x * var_y;
}

// Clase Muestra_Resultados para mostrar los datos
class class_Muestra_Resultados {
public:
    class_Muestra_Resultados(double var_cedula, const string& var_nombre, const string& var_apellido, double var_dias_Trabajados, double var_valor_Dia, int var_sueldo);
    void met_Mostrar_Pago();

    double var_cedula;           // Cédula del empleado
    string var_nombre;           // Nombre del empleado
    string var_apellido;         // Apellidos del empleado
    double var_dias_Trabajados;  // Días trabajados
    double var_valor_Dia;        // Valor del día de trabajo
    int var_sueldo;              // Sueldo calculado
};

// Constructor, guarda los datos y es el puete para que las otras clases tomen los datos del empleado
class_Muestra_Resultados::class_Muestra_Resultados(double var_cedula, const string& var_nombre, const string& var_apellido, double var_dias_Trabajados, double var_valor_Dia, int var_sueldo)
    : var_cedula(var_cedula), var_nombre(var_nombre), var_apellido(var_apellido), var_dias_Trabajados(var_dias_Trabajados), var_valor_Dia(var_valor_Dia), var_sueldo(var_sueldo) {}

   

// Método para mostrar los datos del empleado y el sueldo
void class_Muestra_Resultados::met_Mostrar_Pago() {
    cout << "Cédula: " << var_cedula << endl;
    cout << "Nombre: " << var_nombre << endl;
    cout << "Apellidos: " << var_apellido << endl;
    cout << "Sueldo: " << var_sueldo << endl;
}

// Clase para la entrada de datos y cálculos
class class_Pago {

public:
    class_Pago();
    void met_LeerDatos();
};

// Constructor 
class_Pago::class_Pago() {
    
}


// Método para ingresar y procesar los datos del empleado
void class_Pago::met_LeerDatos() {
    double var_cedula, var_dias_Trabajados, var_valor_Dia;
    string var_nombre, var_apellido;

// Solicitar el número de cédula del empleado al usuario
    cout << "Ingrese su numero de cedula: " << endl;
    cin >> var_cedula;

// Limpiar el búfer del teclado para evitar problemas con la entrada de datos
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

// Solicitar el nombre del empleado al usuario
    cout << "Ingrese su nombre : " << endl;
    cin.ignore(); // Limpiar el búfer nuevamente para usar getline
    getline(cin, var_nombre);

// Solicitar los apellidos del empleado al usuario
    cout << "Ingrese su apellido: " << endl;
    getline(cin, var_apellido);

// Solicitar la cantidad de días trabajados al usuario
    cout << "Ingrese los dias trabajados: " << endl;
    cin >> var_dias_Trabajados;

// Solicitar el valor diario de trabajo al usuario
    cout << "Ingrese el valor de los dias : " << endl;
    cin >> var_valor_Dia;

    class_Valida v1;

// Validar los datos ingresados por el usuario utilizando la clase Valida
    if (v1.met_ValidarN1(var_dias_Trabajados) && v1.met_ValidarN2(var_valor_Dia)) {
        class_Calcula c1;
        int var_sueldo = c1.met_CalcularPago(var_dias_Trabajados, var_valor_Dia);

 // Crear una instancia de Muestra_Resultados para mostrar la información
        class_Muestra_Resultados var_resultados(var_cedula, var_nombre, var_apellido, var_dias_Trabajados, var_valor_Dia, var_sueldo);

// Llamar al método Mostrar_Pago para mostrar los resultados
        var_resultados.met_Mostrar_Pago();
    } else {
        // Mostrar un mensaje de error si los datos son inválidos
        cout << "!!!DIAS TRABAJADOS O VALOR INCORRECTOS!!!" << endl;
    }
}


int main() {
    
    // La instancia de la clase Pago
    class_Pago p1;
    p1.met_LeerDatos();
    

    
    return 0;
}
