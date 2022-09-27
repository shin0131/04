#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int input1, input2;
    
    printf("input two integers : ");
    scanf("%i %i", &input1, &input2);
    
    printf("+ result is %i\n", input1 + input2);
    printf("- result is %i\n", input1 - input2);
    printf("* result is %i\n", input1 * input2);
    printf("/ result is %i\n", input1 / input2);
    printf("%% result is %i\n", input1 % input2);
	
	return 0;
}
