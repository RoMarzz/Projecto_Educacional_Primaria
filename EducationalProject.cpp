//Roberto Martinez
//Angelica Figueroa
//COMP2315
//Projecto Educacional_Primaria
//25 de abril de 2023

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int comtest, resp1, ready1, resp2, ready2, resp3, ready3, resp4, ready4, resp5, total;
    //Todos los valores usados.
    
    cout << "Bienvenidos al examen para estudiantes de primaria. \n";
    cout << "Presione 1 para comenzar el examen \n";
    cout << "*RECUERDA* Tienes UNA oportunidad \n";

    cin >> comtest;

    string nom;
    string apell;
    //strings aguantan los caracteres(texto).
    //string nom (nombre) y string apell (apellido).

    cout << "\n";
    cout << "Nombre y apellido: ";
    cin >> nom >> apell;
    cout << "\n";
    //nom y apell se ponen en el mismo input para que se vea el nombre completo.

    cout << "\n";
    cout << "I. Escoge cuantos cuadrados hay en la imagen.(2 pts.) \n";
    cout << "\n";
    cout << "  *************              *             ************  \n";
    cout << "  *************            * * *           ************  \n";
    cout << "  *************          * * * * *         ************  \n";
    cout << "  *************        * * * * * * *       ************  \n";
    cout << "  *************      * * * * * * * * *     ************  \n";
    cout << "\n";
    cout << "a) 1                   b) 2                  c) 3             d) 0 \n";
    cout << "\n";
    cin >> resp1;
    cout << "\n";
    //El usuario escoge la respuesta y la escibe en el imput.

    if (resp1 == 2) {
        cout << "CORRECTO \n";
        cout << "BRAVO!!! \n";
    }
    else {
        cout << "INCORRECTO \n";
        cout << "La respuesta era b) 2 \n";
    }//Dependiendo en que el usuario escoge, la condicion le dice si tuvo el ejercicio correcto o no.
    //Si el usuario escogio incorrectamente, se le dice cual era la respuesta correcta.

    if (resp1 == 2) {
        cout << "+2 puntos \n";
    }
    else {
        cout << "0 puntos \n";
    }
    /*Cada ejercicio tiene un valor de 2 puntos.
    Si escoge correctamente, obtiene +2 puntos,pero si escoge incorrectamente, no se le añade puntos*/
    
    cout << "\n";
    cout << "Listo/a para el proximo ejercicio? \n";
    cout << "Entra 1 para continuar \n";
    cin >> ready1;
    //Cuando el usuario esté listo, entrará 1 para continuar.

    cout << "\n";
    cout << "II.  Escoge cual de estas personas es la mas alta.(2 pts.) \n";
    cout << "\n";
    cout << "           1.   *****                                                         \n";
    cout << "                *****           2.   *****                                    \n";
    cout << "                *****                *****             3.   *****             \n";
    cout << "                  *                  *****                  *****             \n";
    cout << "                 ***                   *                    *****             \n";
    cout << "                * * *                 ***                     *               \n";
    cout << "               *  *  *               * * *                   ***              \n";
    cout << "                  *                 *  *  *                 * * *             \n";
    cout << "                  *                    *                      *               \n";
    cout << "                 * *                   *                      *               \n";
    cout << "                *   *                 * *                    * *              \n";
    cout << "               *     *               *   *                  *   *             \n";
    cout << "\n";
    cout << "            a) 1                 b) 2                   c) 3        \n";
    cout << "\n";
    cin >> resp2;
    cout << "\n";


    if (resp2 == 1) {
        cout << "CORRECTO \n";
        cout << "BRAVO!!! \n";
    }
    else {
        cout << "INCORRECTO \n";
        cout << "La respuesta era b) 1 \n";
    }

    if (resp2 == 1) {
        cout << "+2 puntos \n";
    }
    else {
        cout << "0 puntos \n";
    }


    cout << "\n";
    cout << "Listo/a para el proximo ejercicio? \n";
    cout << "Entra 1 para continuar \n";
    cin >> ready2;


    cout << "\n";
    cout << "III.  Que letras del abecedario no se encuentran?(2 pts.) \n";
    cout << "\n";
    cout << "    A    B    C    _    E    _    _    H    I    _   \n";
    cout << "\n";
    cout << "      1) D F G J     2)  D H P S       3) H N S U  \n";
    cout << "\n";
    cin >> resp3;
    cout << "\n";


    if (resp3 == 1) {
        cout << "CORRECTO \n";
        cout << "BRAVO!!! \n";
    }
    else {
        cout << "INCORRECTO \n";
        cout << "La respuesta era 1) D F G J \n";
    }

    if (resp3 == 1) {
        cout << "+2 puntos \n";
    }
    else {
        cout << "0 puntos \n";
    }


    cout << "\n";
    cout << "Listo/a para el proximo ejercicio? \n";
    cout << "Entra 1 para continuar \n";
    cin >> ready3;
    cout << "\n";


    int x = 10;
    int y = 14;
    cout << "V.  Que numero es el mayor, 10 o 14?(2 pts.) \n";
    cout << "\n";
    cin >> resp4;
    //El usuario tiene que escoger que numero del 10 o 14, es mayor.
    cout << "\n";
    cout << "La respuesta es: " << max(x, y) << "\n";
    //max(x, y) elige el numero con el valor mas alto.
    
    cout << "\n";
    if (resp4 == 14) {
        cout << "+2 puntos \n";
    }
    else {
        cout << "INCORRECTO \n";
        cout << "0 puntos \n";
    }
    //Si el usiario elige el valor mas alto, se le añaden +2 puntos.

    cout << "\n";
    cout << "Listo/a para el proximo ejercicio? \n";
    cout << "Entra 1 para continuar \n";
    cin >> ready4;
    cout << "\n";


    int x1 = 4;
    int y1 = 7;
    cout << "V.  Que numero es el menor, 4 o 7?(2 pts.) \n";
    cout << "\n";
    cin >> resp5;
    //El usuario tiene que escoger que numero del 4 o 7 , es menor.
    cout << "\n";
    cout << "La respuesta es: " << min(x1, y1)<<"\n";
    //min(x, y) elige el numero con menos valor.

    cout << "\n";
    if (resp5 == 4) {
        cout << "+2 puntos \n";
    }
    else {
        cout << "INCORRECTO \n";
        cout << "0 puntos \n";

    }
    //Si el usiario elige el valor mas alto, se le añaden +2 puntos.

    cout << "\n";
    cout << "Cual fue tu puntuacion final? \n";
    cout << "Entra la suma de los ejercicios que tuviste correctos! \n";
    cin >> total;
    //Ej. total = 8
    //(+2, +2, +2, +2)
    cout << "\n";

    if (total == 0) {
        cout << "F, 0/10 \n";
    }
    else if (total == 2) {
        cout << "F, 2/10 \n";
    }
    else if (total == 4) {
        cout << "F, 4/10 \n";
    }//Si el usuario finaliza con una puntuacion menor de 4, obtiene una F.

    else if (total == 6) {
        cout << "D, 6/10 \n";

    }//Si el usuario finaliza con una puntuacion de 6, obtiene una D.
    else if (total == 8) {
        cout << "B, 8/10 \n";
    }//Si el usuario finaliza con una puntuacion de 8, obtiene una B.

    else if (total == 10) {
        cout << "A, 10/10 \n";
    }//Si el usuario finaliza con una puntuacion de PERFECTA, obtiene una A.

    else {
        cout << "Nota no reconocida \n";
    }
    cout << "\n";
    cout << "Gracias por tomar el examen \n";
    return 0;
}