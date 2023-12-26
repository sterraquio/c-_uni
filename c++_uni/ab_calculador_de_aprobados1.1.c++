#include <iostream>

using namespace std;

class class_notas{
public:
    // Método que se ingresa el código del estudiante, primera nota, segunda nota, y tercera nota respectivamente del estudiante
    void met_datos_entrada(double &codigo_estudiante, double &nota_1, double &nota_2, double &nota_3){
        std::cout << "Ingrese el código del estudiante: ";
        std::cin >> codigo_estudiante;
        std::cout << "Ingrese el la primera nota del estudiante: ";
        std::cin >> nota_1;
        std::cout << "Ingrese el la segunda nota del estudiante: ";
        std::cin >> nota_2;
        std::cout << "Ingrese el la tercera nota del estudiante: ";
        std::cin >> nota_3;
        }

    // Método que saca el 30% de la primera y segunda nota y el 40% de la tercera nota y lo suma.
    double met_promedio_notas(double nota_1, double nota_2, double nota_3){
        return (nota_1 * (30.0/100.0)) + (nota_2 * (30.0 / 100.0)) + (nota_3 * (40.0 / 100.0));
        }
    void met_resultados(double codigo_estudiante, double promedio_notas){
        std::cout << "El estudiante con código: " << codigo_estudiante << " Su promedio es: " << promedio_notas << std::endl;
    }

    // Calculo si aprobó o reprobó la materia
    void met_aprobacion(double promedio){
        if (promedio < 3)
        {
            std::cout << "El estudiante reprueba la materia"<< std::endl;
        }
        else if (promedio >= 3)
        {
            std::cout << "El estudiante Aprueba la materia"<< std::endl;
        }
        else if (promedio < 1 or promedio > 5)
        {
            std::cout << "EL PROMEDIO ES INFERIOR A 1 O MAYOR A 5"<< std::endl;
        }

        else
        {
            std::cout << "ERROR CON APROBACION"<< std::endl;
        }
        }




    // Calcula el nivel de conocimiento según su promedio
    void met_conocimiento(double promedio) {
        if (promedio<= 2)
        {
            std::cout << "El nivel de conocimiento es malo"<< std::endl;
        }
        else if (promedio >= 2.1 and promedio <= 3)
        {
            std::cout << "El nivel de conocimiento es deficiente"<< std::endl;
        }
        else if (promedio >= 3.1 and promedio <= 3.5)
        {
            std::cout << "El nivel de conocimiento es regular"<< std::endl;
        }
        else if (promedio >= 3.6 and promedio <= 4)
        {
            std::cout << "El nivel de conocimiento es bueno"<< std::endl;
        }
        else if (promedio >= 4.1 and promedio <= 5)
        {
            std::cout << "El nivel de conocimiento es excelente"<< std::endl;
        }
        else
        {
            std::cout << "ERROR CON EL NIVEL  DE CONOCIMIENTO"<< std::endl;
        }
    }
    };

int main() {
    double codigo_estudiante, nota_1, nota_2, nota_3;

    class_notas notas;

    //
    notas.met_datos_entrada(codigo_estudiante, nota_1, nota_2, nota_3);

    //a
    double promedio_estudiante = notas.met_promedio_notas(nota_1, nota_2, nota_3);
    
    //a
    notas.met_resultados(codigo_estudiante, promedio_estudiante);

    //a
    notas.met_aprobacion(promedio_estudiante);

    //c
    notas.met_conocimiento(promedio_estudiante);



    return 0;
}
