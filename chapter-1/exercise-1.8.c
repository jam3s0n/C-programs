//1.8:Write a program to count blanks, tabs, and new lines

#include <stdio.h>

int main(){
    char c;
    int count = 0;
    
   
    while((c = getchar()) != EOF){
	if(c == ' ' || c == '\t' || c == '\n'){
	    count++;
	}
    }


    printf("The number of blanks, tabs & newlines: %d\n", count);
    
    
}
