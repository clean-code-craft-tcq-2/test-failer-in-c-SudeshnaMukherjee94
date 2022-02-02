#include <stdio.h>
#include <assert.h>

const char* ColorPairsTable[25][3] = {}; //Defining a 2D array to store the 25 color pairs 
const char* majorColor[] = {"White ", "Red   ", "Black ", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

int FormColorMap()  {
    int i = 0, j = 0; 
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            //Storing the color table values from the buggy printf statement to test later
            ColorPairsTable[i*5+j][0] = majorColor[i]; //Column 1 for storing major colors
            ColorPairsTable[i*5+j][1] = minorColor[j]; //Column 2 for storing minor colors
            }
    }
    return i * j;
}

int printColorMap() {
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if ((i * 5 + j +1)<10)
            printf(" %d | %s | %s\n", i * 5 + j +1, ColorPairsTable[i*5+j][0], ColorPairsTable[i*5+j][1]);
            else
            printf("%d | %s | %s\n", i * 5 + j +1, ColorPairsTable[i*5+j][0], ColorPairsTable[i*5+j][1]);
            }
    }
            return i*j;
}

int main() {
    int totalItems = FormColorMap();
    int result = printColorMap();
    assert(totalItems == 25);
    assert(result == 25);
    assert ((ColorPairsTable[0][0] == majorColor[0]) && (ColorPairsTable[0][1] == minorColor[0])); //Checking if the first color pair in the table is White and Blue
    assert ((ColorPairsTable[1][0] == majorColor[0]) && (ColorPairsTable[1][1] == minorColor[1])); //Checking if the second color pair in the table is White and Orange
    assert ((ColorPairsTable[2][0] == majorColor[0]) && (ColorPairsTable[2][1] == minorColor[2])); //Checking if the third color pair in the table is White and Green
    assert ((ColorPairsTable[3][0] == majorColor[0]) && (ColorPairsTable[3][1] == minorColor[3])); //Checking if the forth color pair in the table is White and Brown
    assert ((ColorPairsTable[4][0] == majorColor[0]) && (ColorPairsTable[4][1] == minorColor[4])); //Checking if the fifth color pair in the table is White and Slate
    assert ((ColorPairsTable[5][0] == majorColor[0]) && (ColorPairsTable[5][1] == minorColor[0])); //Checking if the sixth color pair in the table is Red and Blue
    printf("All is well (maybe!)\n");
    return 0;
}
