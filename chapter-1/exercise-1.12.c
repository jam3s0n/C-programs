//Write a program that prints one word per line
#include <stdio.h>

#define IN  1;
#define OUT 0;

int main(){

    char c;
    int state;
    int hit; //lets me know when I hit the finish words
    
    while((c = getchar()) != EOF){
	if(c == ' ' || c == '\t' || c == '\n'){
	    state = OUT;

	    //if we hit the end of a word we need to add a new line ONCE
	    if(hit == 1){
		putchar('\n');
		hit = 0;
	    }
	}else{
	    state = IN;
	    putchar(c);

	    hit = 1;
	}
    }

}
