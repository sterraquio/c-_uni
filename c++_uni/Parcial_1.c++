// Autor: Andrick Buitrago Piedrahita - 2360219-2724


#include <iostream>
#include <string>
using namespace std;

class class_lectura_datos_consola {
public:
    void met_datos_de_entrada(string &var_placa, string &var_ciudad_origen, string &var_ciudad_final, double &var_dist_kmts, double &var_precio_gasolina, double &var_kmts_galon) {
        cout << "Ingrese la placa del vehiculo: ";
        getline(cin, var_placa);

        cout << "Ingrese la ciudad de origen: ";
        getline(cin, var_ciudad_origen);

        cout << "Ingrese la ciudad destino: ";
        getline(cin, var_ciudad_final);

        cout << "Ingrese la distancia en kmts: ";
        cin >> var_dist_kmts;

        cout << "Ingrese el precio por galon de gasolina: ";
        cin >> var_precio_gasolina;

        cout << "Ingrese los Kmts que recorre por galon: ";
        cin >> var_kmts_galon;
    }
};

//===========================================================================
class class_valida_datos_leidos {
public:
    double met_validar_consumo(double var_dist_kmts) {
        while (var_dist_kmts <= 0 or var_dist_kmts > 500) {
            cout << "Ingrese NUEVAMENTE la distancia en kilometros: ";
            cin >> var_dist_kmts;
        }
        return var_dist_kmts;
    }

    double met_validar_distancia(double var_kmts_galon) {
        while (var_kmts_galon <= 0) {
            cout << "Ingrese NUEVAMENTE el recorrido del vehiculo en kmts: ";
            cin >> var_kmts_galon;
        }
        return var_kmts_galon;
    }

    double met_validar_precio_galon_gasolina(double var_precio_gasolina) {
        while (var_precio_gasolina <= 0 or var_precio_gasolina > 15000) {
            cout << "Ingrese NUEVAMENTE el precio por galon de gasolina: ";
            cin >> var_precio_gasolina;
        }
        return var_precio_gasolina;
    }
};
//===========================================================================

//===========================================================================
class class_calculo {
public:
    int met_calcular_costo_viaje(double var_dist_kmts, double var_precio_gasolina, double var_kmts_galon) {
        int resultado = (var_dist_kmts / var_kmts_galon) * var_precio_gasolina;
        return resultado;
    }
};
//===========================================================================

//===========================================================================
class class_muestra_resultados {
public:
    string var_placa, var_ciudad_origen, var_ciudad_final;
    double var_dist_kmts, var_kmts_galon, var_precio_gasolina, var_resultado;
    
    class_lectura_datos_consola lector;
    class_valida_datos_leidos validador;
    class_calculo calculadora;

    class_muestra_resultados() {
        lector.met_datos_de_entrada(var_placa, var_ciudad_origen, var_ciudad_final, var_dist_kmts, var_precio_gasolina, var_kmts_galon);
    
        var_dist_kmts = validador.met_validar_consumo(var_dist_kmts);
        var_kmts_galon = validador.met_validar_distancia(var_kmts_galon);
        var_precio_gasolina = validador.met_validar_precio_galon_gasolina(var_precio_gasolina);
        var_resultado = calculadora.met_calcular_costo_viaje(var_dist_kmts, var_precio_gasolina, var_kmts_galon);
    }

    void met_resultado() {
        cout << "La placa del vehículo es: " << var_placa << endl;

        cout << "La ciudad de origen es: " << var_ciudad_origen << ", y la ciudad destino es: " << var_ciudad_final << endl;

        cout << "Los kilometros de distancia son: " << var_dist_kmts << ", y el recorrido del vehículo en kmts por cada galon de gasolina es: " << var_kmts_galon << endl;

        cout << "El costo total del viaje es: $" << var_resultado << endl;
    }
};

int main() {
    class_muestra_resultados var_final;
    var_final.met_resultado();
    
    return 0;
}

