#include <stdio.h>
#include <assert.h>

char size(int cms) {
    char sizeName = '\0';
    if(cms < 38) {
        sizeName = 'S';
    } else if(cms > 38 && cms < 42) {
        sizeName = 'M';
    } else if(cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}

int main() {
    assert(size(0) == '\0'); //Check if lower limit is defined
    assert(size(37) == 'S'); //Check any value within the range of S
    assert(size(38) == 'M'); //Check the boundary values
    assert(size(40) == 'M'); //Check any value within the range of M
    assert(size(42) == 'L'); //Check the boundary values
    assert(size(43) == 'L'); //Check any value within the range of L
    assert(size(100) == '\0'); //Check if upper limit is defined
    printf("All is well (maybe!)\n");
    return 0;
}
