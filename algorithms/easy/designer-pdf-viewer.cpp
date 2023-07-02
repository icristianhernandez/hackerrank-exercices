/*
Input: 
    array con el peso de las 25 letras del alfabeto
    el string del cual voy a calcular el área
Output:
    area es = letra de mayor peso por la cantidad de letras
*/

#include <vector>
#include <string>
using namespace std;

int designerPdfViewer(vector<int> h, string word) {
    int word_width = 0;
    int char_weightest= 0;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    for(int i = 0; i < alphabet.size(); i++) {
        char letter = alphabet[i];
        int letter_weight = h[i];

        for(int j = 0; j < word.size(); j++ ) {
            if(word[j] == letter and letter_weight > char_weightest) {
                char_weightest = letter_weight;
            }
        }
    }

    word_width = char_weightest * word.size();
    return word_width;
}
