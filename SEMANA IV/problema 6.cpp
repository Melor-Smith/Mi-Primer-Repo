#include <iostream>
#include <string>
using namespace std;

int main() {
    int respuestasCorrectas = 0;
    int respuestasIncorrectas = 0;

    string preguntas[3] = {
        "¿Cuál es el componente principal de una computadora? (a) Monitor (b) CPU (c) Teclado: ",
        "¿Qué significa RAM? (a) Random Access Memory (b) Read Access Memory (c) Rapid Access Memory: ",
        "¿Cuál es el sistema operativo más utilizado en computadoras? (a) Linux (b) Windows (c) macOS: "
    };
    
    char respuestas[3] = {'b', 'a', 'b'};

    for (int i = 0; i < 3; ++i) {
        char respuestaUsuario;
        cout << preguntas[i];
        cin >> respuestaUsuario;

        if (respuestaUsuario == respuestas[i]) {
            cout << "¡Correcto!\n";
            respuestasCorrectas++;
        } else {
            cout << "Incorrecto. La respuesta correcta es: " << respuestas[i] << "\n";
            respuestasIncorrectas++;
        }
    }
    cout << "\nResultados finales:\n";
    cout << "Respuestas correctas: " << respuestasCorrectas << endl;
    cout << "Respuestas incorrectas: " << respuestasIncorrectas << endl;
    return 0;
}
