#include <stdio.h>
#include <assert.h>
#include "networkAlert.c"

int alertFailureCount = 0;

// Shifted the stub part(the commented part below) to a seperated file so that it can be modified later during integration without disturbing the main production code

float ConvertFahrenheitToCelsius(float farenheit)
{
      float celsius = (farenheit - 32) * 5 / 9;
    return celsius;
}

void alertInCelcius(int NetworkResponse) {
    if (NetworkResponse != 200) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 0;
    }
}

int main() {
    printf("Enter the temperature");
    float TempInput = 0;
    scanf("%f", &TempInput);
    float TempInCelsius = ConvertFahrenheitToCelsius(TempInput);
    assert (alertInCelcius(TempInCelsius,networkAlertStubOk(TempInCelsius)) == 0); // Test for "ok" value
    assert (alertInCelcius(TempInCelsius,networkAlertStubOk(TempInCelsius) > 0); // Test for "not-ok" value
    printf("%d alerts failed.\n", alertFailureCount);
    printf("All is well (maybe!)\n");
    return 0;
}
