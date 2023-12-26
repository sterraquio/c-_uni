#include <iostream>

using namespace std;

class Calculo {
    public:
    double sumar(double numero1, double numero2) {
        return numero1 + numero2;
    }

    double restar(double numero1, double numero2){
        return numero1 - numero2;
    }

    double multiplicar(double numero1, double numero2){
        return numero1 * numero2;
    }
    
    double dividir(double numero1, double numero2){
        return numero1 / numero2;
    }

void mostrar_resultado(double numero1, double numero2, double resultado, double resultado_resta, double resultado_multiplicacion, double resultado_division) {
    std::cout << "La suma de " << numero1 << " y " << numero2 << " es: " << resultado << std::endl;
    std::cout << "La resta de " << numero1 << " y " << numero2 << " es:  " << resultado_resta << std::endl;
    std::cout << "La multiplicación de " << numero1 << " y " << numero2 << " es: " << resultado_multiplicacion << std::endl;
    std::cout << "La división de " << numero1 << " y " << numero2 << " es " << resultado_division << std::endl;
    }

void leer_datos(double &numero1, double &numero2) {
    std::cout << "Ingrese el primer número: ";
    std::cin >> numero1;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> numero2;
    }

    };
int main() {
    //Declaración de variables para almacenar los números a sumar y restar
    double numero1, numero2;

    //Llamado a la clase calculo y su método leer_datos para ingresar los números
    Calculo calculadora;
    calculadora.leer_datos(numero1, numero2);

    //Llamado a la clase Calculo y su método sumar para realizar la suma
    double suma = calculadora.sumar(numero1, numero2);

    //Llamado a la clase calculo y su metodo restar para realizar la resta
    double resta = calculadora.restar(numero1, numero2);

    //Llamado a la clase calulo y su metodo multiplicar para realizar la multiplicacion
    double multipli = calculadora.multiplicar(numero1, numero2);

    //Llamado a la clase calculo y su metodo division para realizar una division
    double division = calculadora.dividir(numero1, numero2);

    //Llamado al método mostrar_resultado para mostrar el resultado
    calculadora.mostrar_resultado(numero1, numero2, suma, resta, multipli, division);

    return 0;
    }