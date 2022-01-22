#include <stdio.h>
#include <assert.h>

const char* printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    const char* ColorPairsTable[25][3] = {}; //Defining a 2D array to store the 25 color pairs 
    //int PairNumber[25] = {}; //Defining a number array to store the pair numbers
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            //Storing the color table values from the buggy printf statement to test later
            //PairNumber[i * 5 + j] = (i * 5 + j);
            ColorPairsTable[j][i+1] = majorColor[i]; //Column 1 for storing major colors
            ColorPairsTable[j][i+2] = minorColor[i]; //Column 2 for storing minor colors
            printf("%d | %s | %s\n", i * 5 + j, majorColor[i], minorColor[i]);
            }
    }
    //printf(" %s | %s\n", ColorPairsTable[1][1], ColorPairsTable[1][2]); //Printing the first pair to remove warnings
    //return i * j;
    return ColorPairsTable;
}

int main() {
    const char result = printColorMap();
    //assert(result == 25);
    assert(result[1][1] == "White" & result[1][2] == "Blue") //Checking if the first color pair in the table is White and Blue
    printf("All is well (maybe!)\n");
    return 0;
}
