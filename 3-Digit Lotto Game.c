#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    char name[50];
    char name1[50];
    int guess[50];
    int i,j=1,k=0,l=0;
    int random;
    char cont;
    
    printf("Welcome to the 3-Digit Lotto Game\n\n");
    printf("Please enter your name: ");
    scanf("%s",name);
    
    for(i=0;i<3;i++){
        name1[i]=name[i];
    }
    
    name[3]='\0';
    srand(time(NULL));
    
    do{
    
	    getchar();
	    random=(1+rand()%5)*2;
	    printf("Generating random numbers.....\n\n");
	    Sleep(2000);
	    
	    printf("Hi %s, you have 3 chances to guess an EVEN number(from 2-10)\n\n", name1);
	    
	    
	    for(i=0;i<3;i++){
		    printf("Guess #%d: ",j++);
		    scanf("%d", &guess[i]);
		    if(guess[i]==random){
		        printf("Congratulations, %s: You have won the lottery\n", name1);
		        k=k+1;
		        l=1;
		        break;
		    }
		    else if(guess[i]!=random){
		        printf("Sorry, %s: the number you enter is incorrect\n", name1);
		        k=k+1;
		        l=0;
		    }
	    }
	    printf("\n");
	    if (l==1){
	        printf("You had a total of %d guesses\n",k);
	        printf("The numbers you entered were:");
	        for(i=0;i<k;i++){
	        printf(" %d", guess[i]);
	        }
	        printf("\nHi %s, do you want to continue[y/n]: ", name);
		    scanf("%s", &cont);
		
			if (cont == 'y'){
			    k=0;
			    j=1;
			    l=0;
				system("cls");
				continue;
		    }
			else{
				break;
			}
	    }  
	    else if(l==0){
	        printf("You lost. The correct number is: %d\n", random);
	        printf("You had a total of %d guesses\n",k);
	        printf("The numbers you entered were:");
	        for(i=0;i<k;i++){
	        	printf(" %d", guess[i]);
	        }
	        printf("\nHi %s, do you want to continue[y/n]: ", name1);
			scanf("%s", &cont);
		
		if (cont == 'y'){
		    k=0;
		    j=1;
		    l=0;
			system("cls");
			continue;
		}
		else{
			break;
		}
    }    
}
    while(cont=='y');
}

//11-07-2015
