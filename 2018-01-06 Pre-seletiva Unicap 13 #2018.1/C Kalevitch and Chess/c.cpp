#include <iostream>
#define SIZE 8

using std::cin;
using std::cout;
using std::endl;

int main() {
    std::ios::sync_with_stdio(false);
    char chess[SIZE][SIZE];
    int strokes = 0;

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            cin >> chess[i][j];
        }
    }

    for(int i = 0; i < SIZE; i++) {
        bool lin = true, col = true;
        for(int j = 0; j < SIZE; j++) {
            if(lin && chess[i][j] != 'B') {
                lin = false;
            }
            if(col && chess[j][i] != 'B') {
                col = false;
            }
            if(!col && !lin) { // performance IF
                break;
            }
        }
        if(col) {
            ++strokes;
        }
        if(lin) {
            ++strokes;
        }
    }

    if(strokes == 16) {
        strokes = 8;
    }

    cout << strokes << endl;
    return 0;
}
