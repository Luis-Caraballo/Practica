#include <iostream>
using namespace std;  // Se debe usar 'std' para acceder a las bibliotecas estándar

// Declaración de funciones
void print_game_instructions();  // Función para imprimir las instrucciones
int main_menu();  // Función para mostrar el menú principal

int main() {
    print_game_instructions(); // Muestra el tutorial del juego.

    // Menú principal
    int option_selected = main_menu(); // Llama al menú principal y guarda la opción seleccionada
    // Aquí iría el código para manejar la opción seleccionada.
    
    // Por ejemplo, si la opción seleccionada es 1, iniciaríamos el juego
    if (option_selected == 1) {
        cout << "Iniciando el juego...\n";
        // Aquí iría el código para iniciar el juego.
    } else if (option_selected == 2) {
        cout << "Saliendo del juego...\n";
        // Aquí iría el código para salir del juego
    } else {
        cout << "Opción no válida.\n";
    }

    return 0;
}

void print_game_instructions() {
    cout << "\033[34m+--------------------------------------------------------------+\n"
         << "  |                     Bienvenido al Blackjack!              |\n"
         << "  |                                                          |\n"
         << "  |             El objetivo del juego es acercarse a 21       |\n"
         << "  |                sin pasarse. El jugador con el valor      |\n"
         << "  |                más cercano a 21 gana la mano.            |\n"
         << "  |                                                          |\n"
         << "  |          Cada jugador recibe 2 cartas al principio.      |\n"
         << "  |  Luego puede elegir entre 'Pedir' (Hit) para recibir     |\n"
         << "  |  otra carta o 'Plantar' (Stand) para terminar su turno. |\n"
         << "  |                                                          |\n"
         << "  |                  Reglas principales:                     |\n"
         << "  |                                                          |\n"
         << "  |  1. El valor de las cartas va de 2 a 10 según el número. |\n"
         << "  |  2. Las cartas J, Q y K valen 10 puntos.                |\n"
         << "  |  3. El As puede valer 1 o 11 puntos, según sea conveniente.|\n"
         << "  |  4. Si el valor de las cartas del jugador supera 21,     |\n"
         << "  |     el jugador pierde (se pasa).                         |\n"
         << "  |  5. El jugador gana si su puntaje es mayor al del dealer |\n"
         << "  |     o si el dealer se pasa de 21.                        |\n"
         << "  |  6. El dealer debe pedir carta hasta tener al menos 17.  |\n"
         << "  |                                                          |\n"
         << "  |  Al finalizar cada ronda, puedes elegir si continuar o   |\n"
         << "  |  no. El juego termina si un jugador alcanza los 200     |\n"
         << "  |  dólares o si todos los jugadores se quedan sin dinero. |\n"
         << "  |                                                          |\n"
         << "  |              Modos de juego:                             |\n"
         << "  |                                                          |\n"
         << "  |  - En el modo **Singleplayer**, juegas solo contra el dealer.  |\n"
         << "  |  - En el modo **Multiplayer**, es un formato **'pass and play'** |\n"
         << "  |    donde los jugadores se turnan en el mismo dispositivo.|\n"
         << "  |    Cada jugador toma su turno, juega su mano, y luego    |\n"
         << "  |    pasa el dispositivo al siguiente jugador.              |\n"
         << "  |                                                          |\n"
         << "  +----------------------------------------------------------+\033[0m\n";
}

// Función para mostrar el menú principal y obtener la opción seleccionada
int main_menu() {
    int option;
    cout << "Seleccione una opción:\n";
    cout << "1. Jugar\n";
    cout << "2. Salir\n";
    cout << "Opción: ";
    cin >> option;

    return option;  // Devuelve la opción seleccionada
}