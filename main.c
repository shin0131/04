#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int second;
    int min, sec;
    
    printf("input the second : ");
    scanf("%i", &second);
    
    min = second / 60;
    sec = second % 60;
    
    printf("\nThe time is %d : %d\n", min, sec); 
    
	return 0;
}
