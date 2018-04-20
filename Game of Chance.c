#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE,WIN,LOST};

int rolldice(void);

int main (void){
    int sum;
    int mypoint;
    
    enum Status gameStatus;
    
    srand(time(NULL));
    
    sum=rolldice();
    
    switch (sum){
        case 7:
        case 11:
            gameStatus= 'WON';
            break;
        
        case 2:
        case 3:
        case 12:
            gameStatus= 'LOST';
            break;
            
        default:
            gameStatus= 'CONTINUE';
            mypoint=sum;
            printf("Point is %d\n",mypoint);
            break;
    }
    while (gameStatus=='CONTINUE'){
        sum=rolldice();
        
        if(sum==mypoint){
            gameStatus='WON';
        }
        else if (sum==7){
            gameStatus='LOST';
        }
    }
    if(gameStatus='WON'){
        printf("Player wins\n");
    }
    else{
        printf("Player lost\n");
    }
    return 0;
}

int rolldice(void){
    int die;
    int dice;
    int worksum;
    
    die=1+(rand()%6);
    dice=1+(rand()%6);
    
    worksum=die+dice;
    
    printf("Player rolled %d + %d = %d\n",die,dice,worksum);
    return worksum;
}

//11-16-2015
