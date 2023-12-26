#include <iostream>
using namespace std;
class class_PedirMostrarMatriz{
    public:
    
    string mat_myMatriz1[2][2];
    int var_filas;
    int var_columnas;
    void met_PedirMatriz(){
        string var_cadena;
		//cout << sizeof(myMatriz1)<<endl;
		//cout << sizeof(myMatriz1[0])<<endl;
        int var_filas = (sizeof(mat_myMatriz1)/sizeof(mat_myMatriz1[0]));
        int var_columnas = (sizeof(mat_myMatriz1[0])/sizeof(mat_myMatriz1[0][0]));
        for (int var_i = 0; var_i < var_filas; var_i++){
            for (int var_j = 0; var_j < var_columnas; var_j++){
                cout << "Nombre: " <<;
                getline(cin,var_cadena);
		        mat_myMatriz1[var_i][var_j] = var_cadena;
                }
                }
                }

    void met_MostrarMatriz(){
        for (int var_i = 0; var_i < var_filas; var_i++)
        {
        for (int var_j = 0; var_j < var_columnas; var_j++)
        {
            cout<<mat_myMatriz1[var_i][var_j]<<endl;
        }
        
        }
        
    }
};


int main() {
     // Crear un objeto de la clase
    class_PedirMostrarMatriz objeto_matriz;

    // Llamar al método para pedir la matriz
    objeto_matriz.met_PedirMatriz();

    // Llamar al método para mostrar la matriz
    objeto_matriz.met_MostrarMatriz();


	return 0;
}