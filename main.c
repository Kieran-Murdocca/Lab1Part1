// Author: Kieran Murdocca kkm5754@psu.edu
// Collaborator: Tanner Piotrowski tmp5779@psu.edu
// Collaborator: James Overmoyer jpo5322@psu.edu
#include <stdio.h> 
#include <stdlib.h>
#include <readline/readline.h>
int main(void) {
  char *celsius = readline("Enter temperature in celsius: ");
  double temperature = atof(celsius);
  double fahrenheit = (temperature * 9/5 +32);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", temperature, fahrenheit);
  return 0;
}