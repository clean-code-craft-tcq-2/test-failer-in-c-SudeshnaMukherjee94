#include <stdio.h>
#include <assert.h>
#include "networkAlert.c"

int alertFailureCount = 0;

// Shifted the stub part(the commented part below) to a seperated file so that it can be modified later during integration without disturbing the main production code

/*int networkAlertStub(float celcius) {
    printf("ALERT: Temperature is %.1f celcius.\n", celcius);
    // Return 200 for ok
    // Return 500 for not-ok
    // stub always succeeds and returns 200
    // Let us consider the range for temperature to be "ok" as 35(=95F) Celcius to 37.5Celcius(=99.5F) 
    // -> Beyond this range the stub should sent 500 for "not-ok" -> but it does not do so due to faulty coding
    return 200;
}*/ 

int alertInCelcius(float farenheit) {
    float celcius = (farenheit - 32) * 5 / 9;
    int returnCode = networkAlertStub(celcius);
    if (returnCode != 200) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 0;
    }
    //Test Case :- If input temperature range crosses the normal range of 35(=95F) Celcius to 37.5Celcius(=99.5F) 
    //             AND still alert failure counter is not greater than 0 --> Test case failed
    if (((farenheit<95) | (farenheit>99.5)) & !(alertFailureCount > 0))
        return 1; //Test failed
    else
        return 0; //Test passed
}

int main() {
    //alertInCelcius(100);
    //alertInCelcius(400.5);
    //alertInCelcius(303.6);
    assert (alertInCelcius(99)==0); // Test for "ok" value
    assert (alertInCelcius(96)==0); // Test for "ok" value
    assert (alertInCelcius(303.6)==0); // Test for "not-ok" value
    assert (alertInCelcius(90)==0); // Test for "not-ok" value
    printf("%d alerts failed.\n", alertFailureCount);
    printf("All is well (maybe!)\n");
    return 0;
}
