#include <stdio.h>

int main(){
    printf("EOF is equivalent to: %d\n", EOF);

    if(getchar() != EOF){
	printf("this is 1\n");
    }else{
	printf("this is 0\n");
    }
	
}

