#include <iostream>
using namespace std;
class class_mostrarVector{
    public:
    class_mostrarVector();
    void listar(float vec[5]);

};
class_mostrarVector::class_mostrarVector()
{}
void class_mostrarVector::listar(float vec[5]){
    int i=0;
    while(i <= 4)
    {
        cout << "Datos \n" << vec[i]<<"\n";
        i++;
    }
};
int main(){
    float vector4[5]= {10.5, 5.1, 8.9, 10, 95.2};
    class_mostrarVector m1;
    m1.listar(vector4);
    return 0;
}