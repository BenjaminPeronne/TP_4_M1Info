/**
 * @author Benjamin Peronne
 * @email contact@benjaminperonne.fr
 * @create date 2022-10-25 22:53:20
 * @modify date 2022-10-25 22:53:20
 * @desc [TP_4 - transformlib_char]
 */

#include <iostream>
#include <string.h>

using namespace std;

void saisieCaractere(char &caractere);
bool estUnChiffre(char caractere);
bool estUneLettre(char caractere);
bool estUnEspacement(char caractere);
void afficheCodeCaractere(char caractere);
bool estUneMajuscule(char caractere);
char minus2majusc(char caractere);
char majusc2minusc(char caractere);

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
        // Vide le buffer
        cin.clear();
        cout << "" << endl;
        afficheCodeCaractere(caractere);
    }

    cout << "Il y a " << compteurChiffre << " chiffres" << endl;
    cout << "Il y a " << compteurLettre << " lettres" << endl;
    cout << "Il y a " << compteurEspacement << " espacements" << endl;

    return 0;
}

void saisieCaractere(char &caractere) {
    cout << "Saisir un caractere : ";
    cin >> noskipws >> caractere;
    // cin >> caractere;
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

void afficheCodeCaractere(char caractere) {
    cout << "Le caractere " << caractere << " a pour code ASCII : " << endl;
    cout << "En hexadecimale : " << hex << "0x" << (int)caractere << endl;
    cout << "En decimale : " << dec << (int)caractere << endl;

    if (estUneMajuscule(caractere)) {
        cout << "Le caractere " << caractere << " est une majuscule" << endl;
        cout << "Le caractere " << caractere << " en minuscule est : " << majusc2minusc(caractere) << endl;
    } else {
        cout << "Le caractere " << caractere << " est une minuscule" << endl;
        cout << "Le caractere " << caractere << " en majuscule est : " << minus2majusc(caractere) << endl;
    }
}

bool estUneMajuscule(char caractere) {
    return (caractere >= 'A' && caractere <= 'Z');
}

char minus2majusc(char caractere) {
    return (caractere - 32);
}

char majusc2minusc(char caractere) {
    return (caractere + 32);
}
