#include <stdio.h>
#include <assert.h>
#include "networkAlert.c"

// Shifted the stub part(the commented part below) to a seperated file so that it can be modified later during integration without disturbing the main production code

float ConvertFahrenheitToCelsius(float farenheit)
{
      float celsius = (farenheit - 32) * 5 / 9;
    return celsius;
}

int alertInCelcius(int NetworkResponse) {
    int alertFailureCount = 0;
    if (NetworkResponse != 200) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount ++ ;
    }
      return alertFailureCount;
}

int main() {
      
    /*float TempInput = 0;
    printf("Enter the temperature");
    scanf("%f", &TempInput); //Not sure why this scanf part is not working */
      
    float TempInput = 300.6;
    float TempInCelsius = ConvertFahrenheitToCelsius(TempInput);
      
    int ResponseOk = networkAlertStubOk(TempInCelsius);
    assert (alertInCelcius(ResponseOk) == 0); // Test for "ok" value
    
    int ResponseNotOk = networkAlertStubNotOk(TempInCelsius);
    assert (alertInCelcius(ResponseNotOk) != 0); // Test for "not-ok" value
    
    printf("All is well (maybe!)\n");
    return 0;
}
