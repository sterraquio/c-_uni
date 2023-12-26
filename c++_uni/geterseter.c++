#include <iostream>
#include <string>
#include <iomanip> // se necesita para fixed - poder formatear los numeros

class Empleado {
private:
    std::string cedula;
    std::string nombres;
    std::string apellidos;
    double salarioBasicoMensual;
    double valorDia;

public:
    // Constructor
    Empleado(std::string cedula, std::string nombres, std::string apellidos, double salarioBasicoMensual, double valorDia) {
        this->cedula = cedula;
        this->nombres = nombres;
        this->apellidos = apellidos;
        this->salarioBasicoMensual = salarioBasicoMensual;
        this->valorDia = valorDia;
    }

    // Métodos Getters
    std::string getCedula() const {
        return cedula;
        }

    std::string getNombres() const {
        return nombres;
        }

    std::string getApellidos() const {
        return apellidos;
    }

    double getSalarioBasicoMensual() const {
        return salarioBasicoMensual;
    }

    double getValorDia() const {
        return valorDia;
    }

    // Método para calcular el pago
    double calcularPago() const {
        return salarioBasicoMensual / 30.0 * valorDia;
    }

    // Método para mostrar todos los datos del empleado
    void mostrarDatos() const {
        std::cout << "Cedula: " << cedula << std::endl;
        std::cout << "Nombres: " << nombres << std::endl;
        std::cout << "Apellidos: " << apellidos << std::endl;

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Salario Basico Mensual: $" << salarioBasicoMensual << std::endl;

        std::cout << "Valor del Dia: $" << valorDia << std::endl;

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Pago Mensual: $" << calcularPago() << std::endl;
        }
        };

int main() {
    // Crear un objeto Empleado
    Empleado empleado("123456789", "Juan Jose", "Andrade J.", 3000000.0, 100.0);

    // Mostrar los datos del empleado
    empleado.mostrarDatos();

    return 0;
    }
