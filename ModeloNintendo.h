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

    // Getters
    string getNombreClave() {
        return nombreClave;
    }

    int getSalud() {
        return salud;
    }

    char* getCombinacionHabilidades() {
        return combinacionHabilidades;
    }

    // Setter
    void setNombreClave(string clave) {
        nombreClave = clave;
    }

    void setSalud(int valorSalud) {
        salud = valorSalud;
    }

    void setCombinacionHabilidades(char* combinacion) {
        for (int i = 0; i < 10; i++) {
            combinacionHabilidades[i] = combinacion[i];
        }
    }
    //metodo nuevo jiji
    void fraseTipica() {
        cout << "It's me, Mario!" << endl;
    }


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