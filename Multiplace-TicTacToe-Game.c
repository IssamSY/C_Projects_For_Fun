#include <stdio.h>
#include <stdbool.h>

void drawXOBoard() {
    char boardMatrix[3][3] = {
                            {'1','2','3'},
                            {'4','5','6'},
                            {'7','8','9'}
    };
    
    // For-loop to print the arrays
    int i = 0;
    for(i = 0; i < 3; i++) {
        printf(".---.---.---.\n");
        printf(". %c . %c . %c .\n", boardMatrix[i][0], boardMatrix[i][1], boardMatrix[i][2]);
    }
    printf(".---.---.---.\n");
}

bool spotChecker(char XOBoard[3][3], int choosenSpot) {
    char targetSpot = (char)choosenSpot;
    
    // Lookin' for the position of the targetSpot!
    int i, j;
    int x, y;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if (XOBoard[i][j] =! targetSpot) {continue;}
            else { x = i; y = j;}
        }
    }
    
    // Checking of the spot is isEmpty
    bool isEmpty;
    if(XOBoard[x][y] =! targetSpot) {
        isEmpty = false;
    } else {
        isEmpty = true;
    }
    
    return isEmpty;
}

int main() {
    char boardMatrix[3][3] = {
                            {'1','2','3'},
                            {'4','X','6'},
                            {'7','8','9'}
    };
    
    bool emptyOrNot = spotChecker(boardMatrix, 5);
    printf("%d", emptyOrNot);
    return 0;
}
