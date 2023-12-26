#include <iostream>
#include <string>

using namespace std;

class class_notas{
public:


    // Método que se ingresa el código del estudiante, primera nota, segunda nota, y tercera nota respectivamente del estudiante
    void met_datos_entrada_string(string &var_nombres, string &var_apellidos){
        std::cout << "Ingrese los nombres del estudiante: ";
        getline(cin, var_nombres);
        std::cout << "Ingrese los apellidos del estudiante: ";
        getline(cin, var_apellidos);
    }
    void met_datos_entrada(double &var_codigo_estudiante, double &var_nota_1, double &var_nota_2, double &var_nota_3){
        std::cout << "Ingrese el código del estudiante (máx 4 digitos): ";
        std::cin >> var_codigo_estudiante;
        
        std::cout << "Ingrese el la primera nota del estudiante (0-5): ";
        std::cin >> var_nota_1;
        while (var_nota_1 >5 or var_nota_1 <= 0)
        {
        std::cout << "Ingrese NUEVAMENTE el la primera nota del estudiante (0-5): ";
        std::cin >> var_nota_1;
        }
        std::cout << "Ingrese el la segunda nota del estudiante(0-5): ";
        std::cin >> var_nota_2;
        while (var_nota_2 >5 or var_nota_2 <=0)
        {
        std::cout << "Ingrese NUEVAMENTE la segunda nota del estudiante(0-5): ";
        std::cin >> var_nota_2;
        }
        
        std::cout << "Ingrese el la tercera nota del estudiante(0-5): ";
        std::cin >> var_nota_3;
        while (var_nota_3 > 5 or var_nota_3 <=0)
        {
        std::cout << "Ingrese NUEVAMENTE la tercera nota del estudiante(0-5): ";
        std::cin >> var_nota_3;
        }
        
        }

    // Método que saca el 30% de la primera y segunda nota y el 40% de la tercera nota y lo suma.
    double met_promedio_notas(double var_nota_1, double var_nota_2, double var_nota_3){
        return (var_nota_1 * (30.0/100.0)) + (var_nota_2 * (30.0 / 100.0)) + (var_nota_3 * (40.0 / 100.0));
        }
    
    void met_resultados_nombres(string var_nombres, string var_apellidos){
    std::cout << "El estudiante con nombres: " << var_nombres << " Y con apellidos: " << var_apellidos << std::endl;
    }
    
    void met_resultados(double var_codigo_estudiante, double var_promedio_notas){
        std::cout << "El estudiante con código: " << var_codigo_estudiante << std::endl;
        std::cout << " Su promedio es: " << var_promedio_notas << std::endl;
    }

    // Calculo si aprobó o reprobó la materia
    void met_aprobacion(double var_promedio){
        if (var_promedio < 3)
        {
            std::cout << "El estudiante reprueba la materia"<< std::endl;
        }
        else if (var_promedio >= 3)
        {
            std::cout << "El estudiante Aprueba la materia"<< std::endl;
        }
        else if (var_promedio < 1 or var_promedio > 5)
        {
            std::cout << "EL PROMEDIO ES INFERIOR A 1 O MAYOR A 5"<< std::endl;
        }

        else
        {
            std::cout << "ERROR CON APROBACION"<< std::endl;
        }
        }




    // Calcula el nivel de conocimiento según su promedio
    void met_conocimiento(double var_promedio) {
        if (var_promedio <= 2)
        {
            std::cout << "El nivel de conocimiento es malo"<< std::endl;
        }
        else if (var_promedio >= 2.1 and var_promedio <= 3)
        {
            std::cout << "El nivel de conocimiento es deficiente"<< std::endl;
        }
        else if (var_promedio >= 3.1 and var_promedio <= 3.5)
        {
            std::cout << "El nivel de conocimiento es regular"<< std::endl;
        }
        else if (var_promedio >= 3.6 and var_promedio <= 4)
        {
            std::cout << "El nivel de conocimiento es bueno"<< std::endl;
        }
        else if (var_promedio >= 4.1 and var_promedio <= 5)
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
    
    
    
    string var_nombres, var_apellidos;
    double var_codigo_estudiante, var_nota_1, var_nota_2, var_nota_3;
    
    class_notas notas;
    
    //
    notas.met_datos_entrada_string(var_nombres, var_apellidos);
    
    notas.met_datos_entrada(var_codigo_estudiante, var_nota_1, var_nota_2, var_nota_3);

   

    //a
    double var_promedio_estudiante = notas.met_promedio_notas(var_nota_1, var_nota_2, var_nota_3);
    
    //a
    
    
    notas.met_resultados_nombres(var_nombres, var_apellidos);
    
    notas.met_resultados(var_codigo_estudiante,var_promedio_estudiante);

    //a
    notas.met_aprobacion(var_promedio_estudiante);

    system("cls");
    //c
    notas.met_conocimiento(var_promedio_estudiante);



    return 0;
}