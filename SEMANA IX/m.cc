#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <map>

using namespace std;

const int MAX_CLIENTES = 50;
const int MAX_PRODUCTOS = 50;

class Usuario
{
private:
    string username;
    string password;

public:
    Usuario() {}
    Usuario(const string &username, const string &password) : username(username), password(password) {}

    bool autenticar(const string &user, const string &pass) const
    {
        return (username == user && password == pass);
    }

    string getUsername() const { return username; }
    string getPassword() const { return password; }

    void crearUsuario()
    {
        cout << "\nCree un nombre de usuario: ";
        cin >> username;
        cout << "Cree una contrase\xF1a: ";
        cin >> password;
        cout << "Usuario creado con \xE9xito.\n";
    }
};

class Cliente
{
private:
    string nombre;
    int id;
    int telefono;

public:
    Cliente(const string &nombre, int telefono) : nombre(nombre), telefono(telefono)
    {
        id = generarId();
    }

    int getId() const { return id; }
    string getNombre() const { return nombre; }
    int getTelefono() const { return telefono; }

private:
    int generarId()
    {
        return rand() % 1000 + 1;
    }
};

class Producto
{
private:
    string nombre;
    int codigo;
    float precio;
    int cantidad;
    string tipo;

public:
    Producto(const string &nombre, float precio, int cantidad, const string &tipo)
        : nombre(nombre), precio(precio), cantidad(cantidad), tipo(tipo)
    {
        codigo = generarCodigo();
    }

    int getCodigo() const { return codigo; }
    string getNombre() const { return nombre; }
    float getPrecio() const { return precio; }
    int getCantidad() const { return cantidad; }
    string getTipo() const { return tipo; }

    void vender(int cantidadAVender)
    {
        if (cantidadAVender > 0 && cantidadAVender <= cantidad)
        {
            cantidad -= cantidadAVender;
            cout << "Venta realizada con \xE9xito." << endl;
        }
        else
        {
            cout << "No hay suficientes productos en el inventario para realizar la venta." << endl;
        }
    }

private:
    int generarCodigo()
    {
        return rand() % 9000 + 1000;
    }
};

class Tienda
{
private:
    vector<Cliente> clientes;
    vector<Producto> inventario;
    int maxClientes;
    int maxProductos;
    vector<pair<int, int>> ventas;   // C\xF3digo del producto, cantidad vendida
    Usuario usuario;

public:
    Tienda(int maxClientes, int maxProductos) : maxClientes(maxClientes), maxProductos(maxProductos) {}

    void menu() const
    {
        cout << "\n*TIENDA VIRTUAL*";
        cout << "\n1. Crear cliente nuevo.";
        cout << "\n2. Ver clientes ingresados.";
        cout << "\n3. Crear inventario.";
        cout << "\n4. Ver inventario";
        cout << "\n5. Vender un producto.";
        cout << "\n6. Ver estad\xEDsticas de productos.";
        cout << "\n7. Ver productos clasificados por tipo.";
        cout << "\n8. Salir.";
        cout << "\nIngrese su opci\xF3n: ";
    }

    void registrarUsuario()
    {
        usuario.crearUsuario();
    }

    bool login()
    {
        string username, password;
        cout << "Ingrese su usuario: ";
        cin >> username;
        cout << "Ingrese su contrase\xF1a: ";
        cin >> password;
        return usuario.autenticar(username, password);
    }

    void crearCliente()
    {
        if (clientes.size() < maxClientes)
        {
            string nombre;
            int telefono;
            cout << "\nIngrese el nombre del cliente nuevo: ";
            cin >> nombre;
            cout << "Ingrese el n\xFAmero de tel\xE9fono del cliente nuevo (Sin espacios ni guiones): ";
            cin >> telefono;
            clientes.push_back(Cliente(nombre, telefono));
            cout << "Cliente creado con \xE9xito. ID asignado: " << clientes.back().getId() << endl;
        }
        else
        {
            cout << "L\xEDmite de clientes alcanzado." << endl;
        }
    }

    void verClientes() const
    {
        if (!clientes.empty())
        {
            cout << "\nClientes ingresados:" << endl;
            for (const auto &cliente : clientes)
            {
                cout << "\nNombre de cliente: " << cliente.getNombre() << endl;
                cout << "N\xFAmero de ID de cliente: " << cliente.getId() << endl;
                cout << "N\xFAmero de tel\xE9fono de cliente: " << cliente.getTelefono() << endl;
            }
        }
        else
        {
            cout << "\nNo hay clientes ingresados." << endl;
        }
    }

    void crearInventario()
    {
        if (inventario.size() < maxProductos)
        {
            string nombre, tipo;
            float precio;
            int cantidad;
            cout << "\nIngrese el nombre del producto: ";
            cin >> nombre;
            cout << "Ingrese el precio del producto: ";
            cin >> precio;
            cout << "Ingrese la cantidad de productos: ";
            cin >> cantidad;
            cout << "Ingrese el tipo de producto: ";
            cin >> tipo;
            inventario.push_back(Producto(nombre, precio, cantidad, tipo));
            cout << "Producto creado con \xE9xito. C\xF3digo asignado: " << inventario.back().getCodigo() << endl;
        }
        else
        {
            cout << "L\xEDmite de productos alcanzado." << endl;
        }
    }

    void verInventario() const
    {
        if (!inventario.empty())
        {
            cout << "\nInventario:" << endl;
            for (const auto &producto : inventario)
            {
                cout << "\nNombre del producto: " << producto.getNombre() << endl;
                cout << "C\xF3digo del producto: " << producto.getCodigo() << endl;
                cout << "Precio del producto: " << producto.getPrecio() << endl;
                cout << "Cantidad en inventario: " << producto.getCantidad() << endl;
                cout << "Tipo de producto: " << producto.getTipo() << endl;
            }
        }
        else
        {
            cout << "\nNo hay productos en inventario." << endl;
        }
    }

    void venderProducto()
    {
        if (inventario.empty())
        {
            cout << "\nNo hay productos en el inventario para vender." << endl;
        }
        else
        {
            int cod_producto;
            cout << "\nIngrese el c\xF3digo del producto a vender: ";
            cin >> cod_producto;
            auto it = find_if(inventario.begin(), inventario.end(), [cod_producto](const Producto &p)
                              { return p.getCodigo() == cod_producto; });
            if (it == inventario.end())
            {
                cout << "\nEl producto con el c\xF3digo ingresado no existe en el inventario." << endl;
            }
            else
            {
                int cantidad;
                cout << "Ingrese la cantidad a vender: ";
                cin >> cantidad;
                it->vender(cantidad);
                ventas.push_back(make_pair(cod_producto, cantidad));
                generarBoleta(cod_producto, cantidad);
            }
        }
    }

    void generarBoleta(int cod_producto, int cantidad)
    {
        auto it = find_if(inventario.begin(), inventario.end();
