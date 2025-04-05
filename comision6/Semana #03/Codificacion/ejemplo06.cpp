#include <iostream>
/**
ACTIVIDAD:
Un estudiante de Programación debe dar una defensa oral de un Trabajo Practico,
pero no se siente bien de salud.
Tiene que decidir si está en condiciones de dar la defensa basándose en varios
factores:
- su estado de salud,
- el tiempo (estado del clima en ese momento)
- y su estado de ánimo.
Se considera que:
A. si tiene dolor de garganta (estado de salud false), no puede hablar, por lo
tanto, no puede hacer la defensa.
B. si el estado de ánimo es bajo (estado de ánimo false), es mejor que no
de la defensa.
C. si el tiempo está lluvioso (el tiempo es false), prefiere descansar en vez
de dar la defensa.


Se requiere un programa que pueda ingresar la información de un estudiante y
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
