#include <stdio.h>
#include <assert.h>

const char* FormColorMap()  {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    const char* ColorPairsTable[25][3] = {}; //Defining a 2D array to store the 25 color pairs 
    
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            //Storing the color table values from the buggy printf statement to test later
            ColorPairsTable[i*5+j][0] = majorColor[i]; //Column 1 for storing major colors
            ColorPairsTable[i*5+j][1] = minorColor[i]; //Column 2 for storing minor colors
            }
    }
    return ColorPairsTable;
}

const char* printColorMap(const char* ColorPairsTable) {
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d | %s | %s\n", i * 5 + j, ColorPairsTable[i*5+j][0], ColorPairsTable[i*5+j][1]);
            }
    }
    if (((ColorPairsTable)[0][0] == majorColor[0]) & (ColorPairsTable[0][1] == minorColor[0])) //Checking if the first color pair in the table is White and Blue
        return 1; // Implies that test failed
    else if (((ColorPairsTable)[1][0] == majorColor[0]) & (ColorPairsTable[1][1] == minorColor[1])) //Checking if the second color pair in the table is White and Orange
        return 1; // Implies that test failed
    else if (((ColorPairsTable)[2][0] == majorColor[0]) & (ColorPairsTable[2][1] == minorColor[2])) //Checking if the third color pair in the table is White and Green
        return 1; // Implies that test failed
    else if (((ColorPairsTable)[3][0] == majorColor[0]) & (ColorPairsTable[3][1] == minorColor[3])) //Checking if the forth color pair in the table is White and Brown
        return 1; // Implies that test failed
    else if (((ColorPairsTable)[4][0] == majorColor[0]) & (ColorPairsTable[4][1] == minorColor[4])) //Checking if the fifth color pair in the table is White and Slate
        return 1; // Implies that test failed
    else if (((ColorPairsTable)[5][0] == majorColor[0]) & (ColorPairsTable[5][1] == minorColor[0])) //Checking if the sixth color pair in the table is Red and Blue
        return 1; // Implies that test failed
    else
        return 0;
    //return i * j;
}

int main() {
    const char* ColorMap = FormColorMap();
    int result = printColorMap(ColorMap);
    assert(result == 0);
    printf("All is well (maybe!)\n");
    return 0;
}
