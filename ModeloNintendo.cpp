
#include <iostream>
#include <string>

using namespace std;

class ModeloNintendo {
public:
    string nombre;
    string color;
    int edad;
    bool esHumano;
    char letraInicial;

    ModeloNintendo(string nombre, string color, int edad, int salud, bool esHumano = false);
    ~ModeloNintendo();

    void saludar(string nombre);
    void saltar(char tecla);
    void agacharse(char tecla = 'C');
    int avanzar(char tecla);
    void danio(string grito);
    void fraseTipica();

protected:
    string nombreClave;
    int salud;
    char combinacionHabilidades[10];
    void habilidadesEspeciales(string combinacionTeclas);

private:
    string nombreSecreto;
    char combinacionTrucos[10];
    char combinacionSecretos[10];
    void trucos(string combinacionTeclas);
    void revelarSecretos(string combinacionTeclas);
};

ModeloNintendo::ModeloNintendo(string nombre, string color, int edad, int salud, bool esHumano) {
    this->nombre = nombre;
    this->color = color;
    this->edad = edad;
    this->salud = salud;
    this->esHumano = esHumano;
}

ModeloNintendo::~ModeloNintendo() {
    cout << "Murió" << endl;
}

void ModeloNintendo::saludar(string nombre) {
    cout << "Hola " << nombre << endl;
}

void ModeloNintendo::saltar(char tecla) {
    cout << "yuha" << endl;
}

void ModeloNintendo::agacharse(char tecla) {
    cout << "oig" << endl;
}

int ModeloNintendo::avanzar(char tecla) {
    cout << "tac tac tac" << endl;
    return 0;
}

void ModeloNintendo::danio(string grito) {
    cout << "Mamamia" << endl;
}

void ModeloNintendo::fraseTipica() {
    cout << "It's me, Mario!" << endl;
}

void ModeloNintendo::habilidadesEspeciales(string combinacionTeclas) {
    cout << "Hola" << combinacionTeclas << endl;
}

void ModeloNintendo::trucos(string combinacionTeclas) {
    cout << "Hola" << endl;
}

void ModeloNintendo::revelarSecretos(string combinacionTeclas) {
    cout << "Hola" << endl;
}

int main() {
    ModeloNintendo mario("Mario", "Rojo", 35, 100, true);

    int opcion = 0;
    while (opcion != 7) {
        cout << "----- MENÚ -----" << endl;
        cout << "1. Saludar" << endl;
        cout << "2. Saltar" << endl;
        cout << "3. Agacharse" << endl;
        cout << "4. Avanzar" << endl;
        cout << "5. Daño" << endl;
        cout << "6. Frase Tipica" << endl;
                cout << "7. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                {
                    string nombre;
                    cout << "Ingrese un nombre: ";
                    cin >> nombre;
                    mario.saludar(nombre);
                    break;
                }
            case 2:
                {
                    char tecla;
                    cout << "Ingrese una tecla: ";
                    cin >> tecla;
                    mario.saltar(tecla);
                    break;
                }
            case 3:
                {
                    char tecla;
                    cout << "Ingrese una tecla: ";
                    cin >> tecla;
                    mario.agacharse(tecla);
                    break;
                }
            case 4:
                {
                    char tecla;
                    cout << "Ingrese una tecla: ";
                    cin >> tecla;
                    int resultado = mario.avanzar(tecla);
                    cout << "Resultado: " << resultado << endl;
                    break;
                }
            case 5:
                {
                    string grito;
                    cout << "Ingrese un grito: ";
                    cin >> grito;
                    mario.danio(grito);
                    break;
                }
            case 6:
                mario.fraseTipica();
                break;
            case 7:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
        }

        cout << endl;
    }
  return 0;
}