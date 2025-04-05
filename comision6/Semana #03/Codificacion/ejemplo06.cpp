#include <iostream>
/**
ACTIVIDAD:
Un estudiante de Programaci�n debe dar una defensa oral de un Trabajo Practico,
pero no se siente bien de salud.
Tiene que decidir si est� en condiciones de dar la defensa bas�ndose en varios
factores:
- su estado de salud,
- el tiempo (estado del clima en ese momento)
- y su estado de �nimo.
Se considera que:
A. si tiene dolor de garganta (estado de salud false), no puede hablar, por lo
tanto, no puede hacer la defensa.
B. si el estado de �nimo es bajo (estado de �nimo false), es mejor que no
de la defensa.
C. si el tiempo est� lluvioso (el tiempo es false), prefiere descansar en vez
de dar la defensa.


Se requiere un programa que pueda ingresar la informaci�n de un estudiante y
muestre por pantalla si puede hacer la defensa o no puede.

*/

using namespace std;

int main()
{
    /// DECLARACION
    bool salud, animo, tiempo;
    string mensaje;

    /// ED
    cout << "Ingrese salud (1-BUENA, 0-MALA): ";
    cin >> salud;

    cout << "Ingrese animo (1-BUENA, 0-MALA): ";
    cin >> animo;

    cout << "Ingrese tiempo (1-BUENA, 0-MALA): ";
    cin >> tiempo;

    /// DECISIONES
    /// 1er IF
    if(salud==false){
        mensaje = "NO RINDE";
    }
    else{
        /// 2do IF
        if(animo==false){
            mensaje = "NO RINDE";
        }
        else{
             /// 3er IF
             if(tiempo==false){
                mensaje = "NO RINDE";
             }
             else{
                mensaje = "RINDE";
             }

        }
    }

    ///
    cout << "EL ESTUDIANTE: " << mensaje << endl;



    return 0;
}
