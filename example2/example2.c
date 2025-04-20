# include <stdio.h>

/* Function to calculate from Celsius to Fahrenheit temperature */
void celsius_to_fahrenheit();

/* Print the values of the Fahrenheit to Celsius temperature */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    printf("=====================\n");
    printf("Fahrenheit to Celsius\n");
    printf("=====================\n");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("=====================\n");
    printf("   \n");
    printf("   \n");

    /* Call the function to print from Celsius to Fahrenheit */
    celsius_to_fahrenheit();
    return 0;
}

/* Now we print the values of the Celsius to Fahrenheit temperature */
void celsius_to_fahrenheit()
{
    int celsius;

    printf("=====================\n");
    printf("Celsius to Fahrenheit\n");
    printf("=====================\n");
    for (celsius = 0; celsius <= 300; celsius = celsius + 20)
        printf("%3d %6.1f\n", celsius, (celsius * (9.0 / 5.0)) + 32.0);
    printf("=====================\n");
}