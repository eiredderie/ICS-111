#include <stdio.h>	
#include <conio.h>
#include <windows.h>


int main (){
	
	char guest[50];
	char oper;
	char cont;
	int sum = 0, dif=0, pro=1, ctr, num, intgr, num1, inp=1, inp1=2,inp2= 1;
	double quo;
	
	printf("CALCULATOR\n");
	
	printf("Please Enter Your Name: ");
	scanf("%s", guest);
	
	do {
	
		printf("Hi, %s! Please pick an operation from the menu below: ", guest);
		printf("OPERATIONS:\n\t + Addition\n\t - Subtraction\n\t * Multiplication\n\t / Division\n");
		
		printf("Please enter your choice: ");
		scanf("%s", &oper);
		
		if (oper == '+'){ //ADDITION
			printf("Enter the numbers of integer you want to add: ");
			scanf("%d", &intgr);
			
			for (ctr=1;ctr<=intgr;ctr++){
				printf("Please Enter Number %d: ", inp++);
				scanf("%d", &num);
				sum = sum + num;
			}
			printf("The Sum is = %d\n", sum);
		}
		else if (oper == '-'){ //SUBTRACTION
			
			printf("Enter the numbers of integer you want to subtract: ");
			scanf("%d", &intgr);
			printf("Please Enter Number 1: ");
			scanf("%d", &num);
			for (ctr=2;ctr<=intgr;ctr++){
				printf("Please Enter Number %d: ", inp1++);
				scanf("%d", &num1);
				num = num - num1;
			}
			dif = num;
			printf("The Difference is = %d\n", dif);
		}
		else if (oper == '*'){ //MULTIPLICATION
			printf("Enter the numbers of integer you want to multiply: ");
			scanf("%d", &intgr);
			
			for (ctr=1;ctr<=intgr;ctr++){
				printf("Please Enter Number %d: ", inp2++);
				scanf("%d", &num);
				pro = pro * num;
			}
			printf("The Product is = %d\n", pro);
		}	
		else if (oper == '/'){ // DIVISION
			printf("Enter Number 1: ");
			scanf("%d", &num);
			
			printf("Enter Number 2: ");
			scanf("%d", &num1);
			
			quo =(float) num / num1;
			
			printf("The Quotient is = %.2f\n", quo);
		}
		
		
		printf("Hi %s, do you want to continue[y/n]: ", guest);
		scanf("%s", &cont);
		
		if (cont == 'y'){
		system("cls");
		continue;
		}
		else{
		break;}
		
	    
	}
	while(cont == 'y');
	
	
	
	return 0;
}

//10-19-2015
