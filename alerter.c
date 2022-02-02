#include <stdio.h>
#include <assert.h>
#include "networkAlert.c"

int alertFailureCount = 0;

// Shifted the stub part(the commented part below) to a seperated file so that it can be modified later during integration without disturbing the main production code

int alertInCelcius(float farenheit, int NetworkResponse) {
    float celcius = (farenheit - 32) * 5 / 9;
    int returnCode = networkAlertStub(celcius);
    if (returnCode != 200) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 0;
    }
}

int main() {
    assert (alertInCelcius(303.6,networkAlertStubOk(303.6)) == 0); // Test for "ok" value
    assert (alertInCelcius(400.5,networkAlertStubNotOk(400.5)) > 0); // Test for "not-ok" value
    printf("%d alerts failed.\n", alertFailureCount);
    printf("All is well (maybe!)\n");
    return 0;
}
