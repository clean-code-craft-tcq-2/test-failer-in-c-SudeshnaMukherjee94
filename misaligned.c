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
    int Misaligned_Pairs = 0;
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if (!(ColorPairsTable[i*5+j][0] == majorColor[i]) && (ColorPairsTable[i*5+j][1] == minorColor[j]))
            {
               Misaligned_Pairs++;
            }
        }
    }
    assert(totalItems == 25);
    assert(result == 25);
    assert (ColorPairsTable[0][0] == majorColor[0]);
    assert (Misaligned_Pairs == 0);
    printf("All is well (maybe!)\n");
    return 0;
}
