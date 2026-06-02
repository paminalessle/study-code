#include <iostream>
#include <utility> // Für std::swap

// Funktion zur Ausgabe des Arrays im Terminal
void printArray(int arr[], int groesse) {
    std::cout << "[";
    for (int i = 0; i < groesse; ++i) {
        std::cout << arr[i];
        if (i < groesse - 1) std::cout << ", ";
    }
    std::cout << "]\n";
}


int main() {
    // Ein klassisches Array mit genau 4 Zahlen
    const int GROESSE = 4;
    int zahlen[GROESSE] = {5, 2, 8, 1};

    std::cout << "Ausgangsliste: ";
    printArray(zahlen, GROESSE);
    std::cout << "----------------------------------------\n";

    // Selection Sort Algorithmus
    for (int i = 0; i < GROESSE - 1; ++i) {
        int min_index = i;

        // Sucht die kleinste Zahl im restlichen unsortierten Teil
        for (int j = i + 1; j < GROESSE; ++j) {
            if (zahlen[j] < zahlen[min_index]) {
                min_index = j;
            }
        }

        // Tausch der Elemente
        if (min_index != i) {
            std::swap(zahlen[i], zahlen[min_index]);
        }

        // Terminal-Ausgabe nach jedem Schritt
        std::cout << "Schritt " << (i + 1) << ": Zahl " << zahlen[i] << " nach vorne getauscht.\n";
        std::cout << "Aktueller Stand: ";
        printArray(zahlen, GROESSE);
        std::cout << "----------------------------------------\n";
    }

    std::cout << "Sortierung abgeschlossen!\n";
    return 0;
}


/*
Genutzte KI: Gemini
Korrekt? ja
Unterschiede: 3 anstatt 4 durchläufe (gleich oft getauscht), weniger laufzeit
Wann benutzt man Selection Sort? Wenn der Schreibzugriff auf den Speicher teuer ist, da man beim Selection Sort deutlich weniger schreibzugriffe hat
Wie funktioniert Selection Sort? Er sucht sich immer die kleinste Zahl im unsortierten Teil des Arrays aus und schreibt sie nach vorne in dem es die Zahlen tauscht.

Z.B:
    5 2 8 1
    1 8 2 5
    1 2 8 5
    1 2 5 8
*/