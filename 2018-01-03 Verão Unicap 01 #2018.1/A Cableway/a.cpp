// R G B R

#include <iostream>

using namespace std;

int main() {
    int tempo = 29, r, g, b, car = -1;



    cin >> r >> g >> b;

    while(r || g || b) {
        if(car == 2) {
            car = -1;
        }
        ++car;
        switch(car) {
            case 1://carro verde
                if(g > 1) {
                    g -= 2;
                }
                else {
                    g = 0;
                }
                break;
            case 2: // azul
                if(b > 1) {
                    b -= 2;
                }
                else {
                    b = 0;
                }
                break;
            default: // carro vermelho
                if(r > 1) {
                    r -= 2;
                }
                else {
                    r = 0;
                }
                break;
        }
        ++tempo;
    }

    cout << tempo << endl;
    return 0;
}