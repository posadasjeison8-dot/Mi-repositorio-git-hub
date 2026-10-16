#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Definir e inicializar variables
string nombreEmpleado;
int edadEmpleado;
char sexoEmpleado;
double salarioEmpleado;
string TipoEmpleado;


int main() {

cout << "========== PILLOFON ===========" << endl;
cout << "Ingrese el nombre del empleado: ";
getline(cin >> ws, nombreEmpleado);
cout << "Ingrese la edad del empleado: ";
cin >> edadEmpleado;  
while (edadEmpleado < 18 or edadEmpleado > 65) {
    cout << "Edad fuera de rango" << endl;
    cout << "Ingrese la edad del empleado: ";
    cin >> edadEmpleado;
}
cout << "Ingrese el sexo del empleado (M/F): ";
cin >> sexoEmpleado;

cout << "Ingrese el salario del empleado: ";
cin >> salarioEmpleado; 
while (salarioEmpleado < 16000 or salarioEmpleado > 100000) {
    cout << "salario fuera de rango" <<endl;
    cout << "ingrese el salario del empleado:";
    cin >> salarioEmpleado;

    }
    cout << "Ingrese el Tipo de empleado (Empleado de planta/Empleado medio tiempo/Empleado Contrato): ";
    cin >> TipoEmpleado;

    


}