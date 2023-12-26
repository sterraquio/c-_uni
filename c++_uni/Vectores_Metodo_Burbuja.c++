#include <iostream>
using namespace std;
class class_mostrarVector{
    public:
    class_mostrarVector();
    void listar(float vec[5]);
    void met_ordenarBurbuja(float vec[5]);

};
class_mostrarVector::class_mostrarVector()
{}
void class_mostrarVector::listar(float vec[5]){
    
    
    for(int i=0; i < 5; i++ )
    {
        cout << "Datos \n" << vec[i]<<"\n";
    }
};
void class_mostrarVector::met_ordenarBurbuja(float vec[5]){
    int var_auxiliar = 0;
    for(int i = 0; i<5; i++){
        for(int j = i+1; j<5; j++){
            if(vec[i]>vec[j]){
                var_auxiliar = vec[j];
                vec[i]=vec[j];
                vec[j]=var_auxiliar;
            }
        }
    }
    class_mostrarVector::listar(vec);
};
int main(){
    float vector4[5]= {10.5, 5.1, 8.9, 10, 95.2};
    class_mostrarVector m1;
    m1.met_ordenarBurbuja(vector4);
    return 0;
}