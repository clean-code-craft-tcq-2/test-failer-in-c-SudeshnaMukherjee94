#include <stdio.h>

// NOTE :- 
// This file is for switching between the test env to integration env
// An OR Logic can be added here to switch between the Stub code and the code for sending the ALERT over network

int networkAlertStub(float celcius) {
    printf("ALERT: Temperature is %.1f celcius.\n", celcius);
    // Return 200 for ok
    // Return 500 for not-ok
    // stub always succeeds and returns 200
    // Let us consider the range for temperature to be "ok" as 35(=95F) Celcius to 37.5Celcius(=99.5F) 
    // -> Beyond this range the stub should sent 500 for "not-ok" -> but it does not do so due to faulty coding
    return 200;
}
