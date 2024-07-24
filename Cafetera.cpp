#include <iostream>

using namespace std;

/* Tipo de Dato Abstracto para las Cafeteras */
class Cafetera {
public:
    virtual void Capuchino() = 0;
    virtual void Tinto() = 0;
    virtual void Aromatica() = 0;
    virtual void Mochaccino() =0;
};

/* Implementación del TAD para OSTER */
class Oster: public Cafetera {
public:
    void Capuchino() override {
        cout << "Oster haciendo capuchino!!!" << endl;
    }
    void Tinto() override {
        cout << "Oster haciendo tinto!!!" << endl;
    }
    void Aromatica() override {
        cout << "Oster haciendo aromatica!!!" << endl;
    }
    void Mochaccino() override {
        cout << "Oster haciendo mochaccino!!!" << endl;
    }
};

/* Implementación del TAD para HACEB */
class Haceb: public Cafetera {
public:
    void Capuchino() override {
        cout << "Haceb haciendo capuchino!!!" << endl;
    }
    void Tinto() override {
        cout << "Haceb haciendo tinto!!!" << endl;
    }
    void Aromatica() override {
        cout << "Haceb haciendo aromatica!!!" << endl;
    }
    void Mochaccino() override {
        cout << "Haceb haciendo mochaccino!!!" << endl;
    }
};

/* Implementación del TAD para NESPRESSO */
class Nespresso: public Cafetera {
public:
    void Capuchino() override {
        cout << "Nespresso haciendo capuchino!!!" << endl;
    }
    void Tinto() override {
        cout << "Nespresso haciendo tinto!!!" << endl;
    }
    void Aromatica() override {
        cout << "Nespresso haciendo aromatica!!!" << endl;
    }
    void Mochaccino() override {
        cout << "Nespresso haciendo mochaccino!!!" << endl;
    }
};

int main() {

    /* Creación de objetos Oster, Haceb y Nespresso */
    Cafetera* c_Oster = new Oster();
    Cafetera* c_Haceb = new Haceb();
    Cafetera* c_Nespresso = new Nespresso();

    /* numero de eleccion para interacctuar con los switch de los menus */
    int eleccion = 0;
    int tipooster = 0;
    int tipohaceb = 0;
    int tiponespresso = 0;


    /* Menu para seleccionar la cafetera que se desea utilizar */
    cout << "Que cafetera quiere usar?" << endl;
    cout << "1. Oster" << endl << "2. Haceb" << endl << "3. Nespresso" << endl << "4. Salir" << endl << endl;
    cin >> eleccion;

    switch(eleccion){

        /* switch para manejar los casos de las diferentes cafeteras cada una con 4 opciones de bebidas manejadas por otros switches que se encargan de llamar las funciones correspondientes*/

        case 1:

            cout << endl << "Que tipo de cafe desea?" << endl << "1. capuchino" << endl << "2. tinto" << endl << "3. Aromatica" << endl << "4. Mochaccino" << endl << endl;
            cin >> tipooster;

            switch(tipooster){

                case 1:
                    c_Oster->Capuchino();
                    break;

                case 2:
                    c_Oster->Tinto();
                    break;

                case 3:
                    c_Oster->Aromatica();
                    break;

                case 4:
                    c_Oster->Mochaccino();
                    break;

                default:
                    cout << endl << "Opcion invalida" << endl;
                    exit(0);
            }

            break;
        

        case 2:

            cout << endl << "Que tipo de cafe desea?" << endl << "1. capuchino" << endl << "2. tinto" << endl << "3. Aromatica" << endl << "4. Mochaccino" << endl << endl;
            cin >> tipohaceb;

            switch(tipohaceb){

                case 1:
                    c_Haceb->Capuchino();
                    break;

                case 2:
                    c_Haceb->Tinto();
                    break;

                case 3:
                    c_Haceb->Aromatica();
                    break;

                case 4:
                    c_Haceb->Mochaccino();
                    break;

                default:
                    cout << endl << "Opcion invalida" << endl;
                    exit(0);
            }

            break;

        case 3:

            cout << endl << "Que tipo de cafe desea?" << endl << "1. capuchino" << endl << "2. tinto" << endl << "3. Aromatica" << endl << "4. Mochaccino" << endl << endl;
            cin >> tiponespresso;

            switch(tiponespresso){

                case 1:
                    c_Nespresso->Capuchino();
                    break;

                case 2:
                    c_Nespresso->Tinto();
                    break;

                case 3:
                    c_Nespresso->Aromatica();
                    break;

                case 4:
                    c_Nespresso->Mochaccino();
                    break;

                default:
                    cout << endl << "Opcion invalida" << endl;
                    exit(0);
            }

            break;

        case 4:

            cout << endl << "Hasta la proxima!!!" << endl;
            exit(0);

        default:

            cout << endl << "Opcion Invalida!!!" << endl;
            exit(0);

    }
    

    /* Liberar memoria */
    delete c_Oster;
    delete c_Haceb;
    delete c_Nespresso;

    return 0;
}