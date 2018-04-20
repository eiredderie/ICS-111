#include <stdio.h>

long fibonacci();

int main(void){
    long result, number;
    char cont;
    do{
		printf("\nEnter a integer: ");
	    scanf("%d",&number);
	    result=fibonacci(number);
	    printf("fibonacci(%d)= %d\n",number,result);
	    
	    printf("\nDo you want to continue[y=yes|n=no]: ");
		scanf("%s", &cont);
	}while(cont=='y');
}

long fibonacci(long n){
    if(n==0||n==1){
        return n;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

//11-16-2015
