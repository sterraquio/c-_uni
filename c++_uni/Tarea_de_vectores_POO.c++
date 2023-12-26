//Andrick Buitrago Piedrahita 2360219

#include <iostream>
#include <vector>

using namespace std;

class class_Menu {
public:
    void met_MenúPrincipal() {
        int var_opcion;
        do {
            cout << "---------------------------------------------Menú Principal--------------------------------------------------------" << endl;
            cout << "1. Método Burbuja" << endl;
            cout << "2. Método Inserción" << endl;
            cout << "3. Método Selección" << endl;
            cout << "4. Método Shell " << endl;
            cout << "0. Salir" << endl;
            cout << "Ingrese su opción: ";
            cin >> var_opcion;

            switch (var_opcion) {
                case 1:
                    met_Burbuja();
                    break;
                case 2:
                    met_Insercion();
                    break;
                case 3:
                    met_Seleccion();
                    break;
                case 4:
                    met_Shell();
                    break;
                case 0:
                    cout << "Saliendo del programa." << endl;
                    break;
                default:
                    cout << "Opción no válida. Inténtalo de nuevo." << endl;
                    break;
            }
        } while (var_opcion != 0);
    }

    void met_Burbuja() {
        int var_cn;
        cout << "Cantidad de datos numericos que desea ingresar: ";
        cin >> var_cn;

        vector<int> var_n(var_cn);

        for (int var_i = 0; var_i < var_cn; var_i++) {
            cout << "Ingrese número " << var_i + 1 << " : ";
            cin >> var_n[var_i];
        }

        // Implementación del método de burbuja
        for (int var_i = 1; var_i < var_cn; var_i++) {
            for (int var_j = 0; var_j < var_cn - var_i; var_j++) {
                if (var_n[var_j] > var_n[var_j + 1]) {
                    int var_k = var_n[var_j + 1];
                    var_n[var_j + 1] = var_n[var_j];
                    var_n[var_j] = var_k;
                }
            }
        }

        cout << "Vector ordenado usando el método de burbuja:" << endl;
        for (int var_i = 0; var_i < var_cn; var_i++) {
            cout << var_n[var_i] << endl;
        }
    }
    // Coge uno por uno de los datos, compara con el más pequeño, devolviendolo a la posición del primero, así hasta el final
    void met_Insercion() {
        int var_cn;
        cout << "Cantidad de datos numericos que desea ingresar: ";
        cin >> var_cn;
        vector<int> var_n(var_cn);
        for (int var_i = 0; var_i < var_cn; var_i++) {
            cout << "Ingrese número " << var_i + 1 << " : ";
            cin >> var_n[var_i];
        }
        // Implementación del método de inserción
        for (int var_i = 1; var_i < var_cn; var_i++) {
            int var_key = var_n[var_i];
            int var_j = var_i - 1;

            while (var_j >= 0 && var_n[var_j] > var_key) {
                var_n[var_j + 1] = var_n[var_j];
                var_j = var_j - 1;
            }
            var_n[var_j + 1] = var_key;
        }
        cout << "Vector ordenado usando el método de Inserción:" << endl;
        for (int var_i = 0; var_i < var_cn; var_i++) {
            cout << var_n[var_i] << endl;
        }
    }
    // Coge todo el vector y busca el minimo, luego compara por cada uno de los valores, hasta que encuentra el minimo, en caso de no encontrar el minimo, el primer valor minimo, se vuelve el primer valor, y así hasta el último
    void met_Seleccion() {
        int var_cn;
        cout << "Cantidad de datos numericos que desea ingresar: ";
        cin >> var_cn;

        vector<int> var_n(var_cn);

        for (int var_i = 0; var_i < var_cn; var_i++) {
            cout << "Ingrese número " << var_i + 1 << " : ";
            cin >> var_n[var_i];
        }

        // Implementación del método de selección
        for (int var_i = 0; var_i < var_cn - 1; var_i++) {
            int var_minIndex = var_i;
            for (int var_j = var_i + 1; var_j < var_cn; var_j++) {
                if (var_n[var_j] < var_n[var_minIndex]) {
                    var_minIndex = var_j;
                }
            }
            // Cambio
            int var_temp = var_n[var_i];
            var_n[var_i] = var_n[var_minIndex];
            var_n[var_minIndex] = var_temp;
        }

        cout << "Vector ordenado usando el método de selección:" << endl;
        for (int var_i = 0; var_i < var_cn; var_i++) {
            cout << var_n[var_i] << endl;
        }
    }
    // Coge el primer valor, luego saca un intervalo diviendo el número de datos del vector dividio por 2, dando el intervalo, comparando el primer valor por la posición del primer intervalo, luego el segundo dato compara con la ubicación del intervalo.
    void met_Shell() {
        int var_cn;
        cout << "Cantidad de datos numericos que desea ingresar: ";
        cin >> var_cn;

        vector<int> var_n(var_cn);

        for (int var_i = 0; var_i < var_cn; var_i++) {
            cout << "Ingrese número " << var_i + 1 << " : ";
            cin >> var_n[var_i];
        }

        // Implementación del método de Shell
        for (int var_gap = var_cn / 2; var_gap > 0; var_gap /= 2) {
            for (int var_i = var_gap; var_i < var_cn; var_i++) {
                int var_temp = var_n[var_i];
                int var_j;
                for (var_j = var_i; var_j >= var_gap && var_n[var_j - var_gap] > var_temp; var_j -= var_gap) {
                    var_n[var_j] = var_n[var_j - var_gap];
                }
                var_n[var_j] = var_temp;
            }
        }
        //Mostrar vector
        cout << "Vector ordenado usando el método de Shell:" << endl;
        for (int var_i = 0; var_i < var_cn; var_i++) {
            cout << var_n[var_i] << endl;
            }
        }
    };

int main() {
    class_Menu obj_menu;
    obj_menu.met_MenúPrincipal();

    return 0;
}