#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

std::vector<std::string> const criaTeclado();
char const newLetter(std::vector<std::string> const &v, char const letter, 
        int const modifier);

int main() {
    char shifting;
    vector<string> const teclado = criaTeclado();

    cin >> shifting;
    int modifier = (shifting == 'R') ? -1 : 1;

    string message; 
    cin.ignore();
    getline(cin, message);

    for(size_t i = 0; i < message.size(); i++) {
        message[i] = newLetter(teclado, message[i], modifier);
    }

    cout << message << endl;
    return 0;
}

std::vector<std::string> const criaTeclado() {
    vector <string> v;

    string s("qwertyuiop");
    v.push_back(s);
    s = "asdfghjkl;";
    v.push_back(s);
    s = "zxcvbnm,./";
    v.push_back(s);
    return v;
}

char const newLetter(std::vector<std::string> const &v, char const letter, 
        int const modifier) {
    
    for(size_t i = 0; i < v.size(); i++) {
        for(size_t j = 0; j < v.at(i).size(); j++) {
            if(v.at(i).at(j) == letter) {
                return v.at(i).at(j+modifier);
            }
        }
    }
    return ' '; // to avoid warning (non reachable by the problem)
}