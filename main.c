#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int second;
    int hour, min, sec;
    
    printf("Input the second : ");
    scanf("%i", &second);
    
    min = second / 60;
    hour = min / 60;
    sec = second % 60;
    min = min % 60;
    
    printf("\nThe time for %d second is %d : %d : %d", second, hour, min, sec);
    
	return 0;
}	
