/**
 * @author Benjamin Peronne
 * @email contact@benjaminperonne.fr
 * @create date 2022-10-25 15:46:29
 * @modify date 2022-10-25 15:46:29
 * @desc [cpt_char.cpp]
 */

/*
    Objectif : Il s’agit ici de faire un programme qui permet de lire une suite de caractères au clavier puis de les analyser au fur à mesure. La suite est terminée lorsque l’utilisateur tape un point (‘.’).
*/

#include <iostream>
#include <string.h>

using namespace std;

void saisieCaractere(char &caractere);
bool estUnChiffre(char caractere);
bool estUneLettre(char caractere);
bool estUnEspacement(char caractere);

int main() {
    char caractere;
    int compteurChiffre = 0;
    int compteurLettre = 0;
    int compteurEspacement = 0;

    while (caractere != '.') {
        if (estUnChiffre(caractere)) {
            compteurChiffre++;
            // compteurEspacement--; // on enlève un espace afin de ne pas compter les espaces lors du enter 
        } else if (estUneLettre(caractere)) {
            compteurLettre++;
            // compteurEspacement--; // on enlève un espace afin de ne pas compter les espaces lors du enter 

        } else if (estUnEspacement(caractere)) {
            compteurEspacement++;
        }

        saisieCaractere(caractere);
    }

    cout << "Il y a " << compteurChiffre << " chiffres" << endl;
    cout << "Il y a " << compteurLettre << " lettres" << endl;
    cout << "Il y a " << compteurEspacement << " espacements" << endl;

    return 0;
}

void saisieCaractere(char &caractere) {
    cout << "Saisir un caractere : "; 
    cin >> noskipws >> caractere;
}

bool estUnChiffre(char caractere) {
    return (caractere >= '0' && caractere <= '9');
}

bool estUneLettre(char caractere) {
    return ((caractere >= 'a' && caractere <= 'z') || (caractere >= 'A' && caractere <= 'Z'));
}

bool estUnEspacement(char caractere) {
    return (caractere == ' ' || caractere == '\t' || caractere == '\n');
}