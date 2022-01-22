#include <stdio.h>
#include <assert.h>

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    const char* ColorPairsTable[25][3] = {}; //Defining a 2D array to store the 25 color pairs 
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            //Storing the color table values from the buggy printf statement to test later
            ColorPairsTable[j][i] = majorColor[i]; //Column 1 for storing major colors
            ColorPairsTable[j][i+1] = minorColor[i]; //Column 2 for storing minor colors
            printf("%d | %s | %s\n", i * 5 + j, majorColor[i], minorColor[i]);
            }
    }
    if (((ColorPairsTable)[0][0] == majorColor[0]) & (ColorPairsTable[0][1] == minorColor[0])) //Checking if the first color pair in the table is White and Blue
        return 1; // Implies that test failed
    else
        return 0;
    //return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 0);
    printf("All is well (maybe!)\n");
    return 0;
}
