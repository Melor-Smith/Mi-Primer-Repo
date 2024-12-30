#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> // Para generar numeros aleatorios
#include <ctime> // Para inicializar la semilla de aleatoriedad

using namespace std;

// Definicion de la struct
struct Material { 
    string nombre;
    int cantidad;
    double precio;  // Precio unitario del material
};

// Funcion para generar un codigo aleatorio
int generarCodigoAleatorio() {
    return rand() % 10000 + 1; // Genera un numero aleatorio entre 1 y 10000
}

// Funcion para registrar materiales
void registrarMateriales(Material*& materiales, int& tamano) {
    cout << "Ingrese la cantidad de materiales a registrar: ";
    cin >> tamano;

    if (tamano <= 0) {
        cout << "La cantidad de materiales debe ser mayor que 0.\n";
        return;
    }

    materiales = new Material[tamano];
    for (int i = 0; i < tamano; i++) {
        materiales[i].codigo = generarCodigoAleatorio();
        cout << "Codigo generado para el material: " << materiales[i].codigo << endl;
        cin.ignore(); // Limpiar el buffer
        cout << "Ingrese el nombre del material: ";
        getline(cin, materiales[i].nombre);
        cout << "Ingrese la cantidad disponible del material: ";
        cin >> materiales[i].cantidad;
        cout << "Ingrese el precio unitario del material: ";
        cin >> materiales[i].precio;
        cout << endl;
    }
}

// Funcion para mostrar los materiales
void mostrarMateriales(const Material materiales[], int tamano) {
    if (tamano == 0) {
        cout << "No hay materiales para mostrar.\n";
        return;
    }
    for (int i = 0; i < tamano; i++) {
        cout << "Material " << i + 1 << ":\n";
        cout << "Codigo: " << materiales[i].codigo << endl;
        cout << "Nombre: " << materiales[i].nombre << endl;
        cout << "Cantidad disponible: " << materiales[i].cantidad << endl;
        cout << "Precio unitario: $" << materiales[i].precio << endl;
        cout << "--------------------------\n";
    }
}

// Funcion para calcular el precio de la venta
double calcularPrecioVenta(double precioUnitario, int cantidadVendida) {
    return precioUnitario * cantidadVendida;  // Calcula el precio total
}

// Funcion para vender un material
void venderMaterial(Material materiales[], int tamano, int codigo, int cantidadVendida) {
    bool encontrado = false;
    for (int i = 0; i < tamano; i++) {
        if (materiales[i].codigo == codigo) {
            encontrado = true;
            if (materiales[i].cantidad >= cantidadVendida) {
                materiales[i].cantidad -= cantidadVendida;
                double totalVenta = calcularPrecioVenta(materiales[i].precio, cantidadVendida);
                cout << "Venta realizada exitosamente.\n";
                cout << "Total de la venta: $" << totalVenta << endl;
                cout << "Cantidad restante: " << materiales[i].cantidad << endl;
            } else {
                cout << "Cantidad insuficiente en stock para realizar la venta.\n";
            }
            break;
        }
    }
    if (!encontrado) {
        cout << "Codigo no encontrado.\n";
    }
}

int main() {
    srand(time(0)); // Inicializa la semilla para la generacion de codigos aleatorios

    Material* materiales = nullptr;
    int N = 0;

    int opcion;
    do {
        cout << "\n--- Menu de Opciones ---\n";
        cout << "1. Registrar materiales\n";
        cout << "2. Mostrar lista de materiales\n";
        cout << "3. Vender material\n";
        cout << "4. Salir\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                registrarMateriales(materiales, N);
                break;
            case 2:
                mostrarMateriales(materiales, N);
                break;
            case 3: {
                if (N == 0) {
                    cout << "Primero debe registrar los materiales antes de vender.\n";
                    break;
                }
                int codigo, cantidad;
                cout << "Ingrese el codigo del material a vender: ";
                cin >> codigo;
                cout << "Ingrese la cantidad a vender: ";
                cin >> cantidad;
                venderMaterial(materiales, N, codigo, cantidad);
                break;
            }
            case 4:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo.\n";
        }
    } while (opcion != 4);

    delete[] materiales;  // Libera la memoria dinámica
    return 0;
}
