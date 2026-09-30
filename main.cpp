#include <iostream>
#include <string>
#include <windows.h> // Necesario para configurar la terminal

int main() {
    // Configura la salida de la consola en UTF-8 (para 'ñ', acentos y signos)
    SetConsoleOutputCP(65001);

    std::string nombre;
    int edad;

    std::cout << "=== PRUEBA DE C++ EN VS CODE ===" << std::endl;
    
    std::cout << "¿Cómo te llamas?: ";
    std::cin >> nombre;

    std::cout << "¿Cuántos años tienes?: ";
    std::cin >> edad;

    std::cout << "\n¡Hola, " << nombre << "! Tienes " << edad 
              << " años y tu entorno de C++ funciona perfectamente." << std::endl;

    return 0;
}