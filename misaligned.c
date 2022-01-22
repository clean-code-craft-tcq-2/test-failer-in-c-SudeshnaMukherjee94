#include <stdio.h>
#include <assert.h>

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    char ColorPairsTable[25][3] = {}; //Defining a 2D array to store the 25 color pairs along with pair numbers
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            ColorPairsTable[j][i]= (i * 5 + j); //Storing the pair numbers for each pair
            ColorPairsTable[j][i+1] = &majorColor[i]; //Column 1 for storing major colors
            ColorPairsTable[j][i+2] = &minorColor[j]; //Column 2 for storing minor colors
            printf("%d | %s | %s\n", i * 5 + j, majorColor[i], minorColor[i]);
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    assert(ColorPairsTable[1][1] == "1" & ColorPairsTable[1][2] == "White" & ColorPairsTable[1][3] == "Blue") //Checking if the first color pair in the table is White and Blue
    printf("All is well (maybe!)\n");
    return 0;
}
