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
        } else if (estUneLettre(caractere)) {
            compteurLettre++;

        } else if (estUnEspacement(caractere)) {
            compteurEspacement++;
        }

        saisieCaractere(caractere);
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
    return isdigit(caractere);
}

bool estUneLettre(char caractere) {
    return isalpha(caractere);
}

bool estUnEspacement(char caractere) {
    return isspace(caractere);
}

void afficheCodeCaractere(char caractere) {
    cout << "Code ASCII : " << (int)caractere << endl;
}

bool estUneMajuscule(char caractere) {
    return isupper(caractere);
}

char minus2majusc(char caractere) {
    return toupper(caractere);
}

char majusc2minusc(char caractere) {
    return tolower(caractere);
}
