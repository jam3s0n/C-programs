//print a histogram of the length of words in the input and make it verticle
#include <stdio.h>

#define IN 1
#define OUT 0
#define SIZE 50

int main(){
    int state, hit, wCount, lCount;
    char c;
    int wordNumList[SIZE];


    //initialize variables
    state = OUT;
    hit = wCount, lCount = 0;
    //initialize the array
    for(int i=0; i<50; i++){
	wordNumList[i] = 0;
    }
    

    //Collect the chars
    
    while((c = getchar()) != EOF){

	
	if(c == ' ' || c == '\t' || c == '\n'){
	    state = OUT;

	    //if there is a space after a word increase wCount and update array
	    if(hit == 1){
		wCount++;
		wordNumList[lCount-1]++;
		//after updating array reset the letter count
		lCount = 0;
	    }
	    //make hit zero again until another non-space char is entered
	    hit =0;
	}else{
	    state = IN;
	    lCount++;
	    hit = 1;
	    
	}
    }

    if(hit == 1){
	wCount++;
	wordNumList[lCount-1]++;
    }
     
    //Now print out the histogram with a vertical orientation

    //make a 50 by 50 grid of char space
    for(int i=50; i>0; i--){
	for(int j=0; j<50; j++){

	    //print a star if the array value is greater than the verticle height
	    if(wordNumList[j]>=i){
		printf("%-3s","*");
	    }else{
		//otherwise print a space
		printf("%-3s"," ");

	    }
	}
	printf("\n");
    }


    for(int i=0; i<150; i++){
	printf("-");

    }

    printf("\n");
    for(int i=1; i<51; i++){
	printf("%-3d", i);
    }


    printf("\n\n");

    printf("Word Count: %d\n",wCount);


}
