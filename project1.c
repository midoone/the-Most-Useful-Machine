/*
Aziyar Ahmed Slek

CIS 154 Project 1 – The Most Useful Machine
10/13/2020
This code let the user choose from the principale menu and then start doing a number of operations
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/* the function i am using */
void menu();
int check(char ch);
int isNotALetter(char c);
int even(int num);
int maxOfthe3Number(int num1,int num2,int num3);
double averg(double number1, double number2, double number3, double number4, double number5);
double closeEnough(double num_clo1, double num_clo2);
double powpow(int a, int b, int c);
int quit();

/* the main  function that calculat the  ASCII to integer, Is not a letter, Is Even, Max of three, average of five, Close enough, Pow Pow, and Quit*/
int main(int argc, char *argv[]) {
  {

	char selectedItemFromtheMenu, letterToTest, c;
 	int num1,num2,num3,num4,num5;
 	double num_clo1, num_clo2;

	menu(selectedItemFromtheMenu);

	scanf("%c" ,&selectedItemFromtheMenu);

  if(selectedItemFromtheMenu=='1'){
        printf("Please enter the letter to check");
        scanf("%c",&c);
        int result = check(c);
    	printf("the integer value is %d = %C", result, result);
    }
	else if(selectedItemFromtheMenu=='2'){
	  	printf("Please enter the letter to check");
	  	scanf("%c",&letterToTest);
	    int result = isNotALetter(letterToTest);
	    if(result == 1){
	    	printf("the letter entred is not a letter");
	    }else{
	    	printf("the letter is a letter");
	    }
	}
	else if(selectedItemFromtheMenu=='3'){
		printf("Please enter the number to check");
	  	scanf("%d",&num1);
		int result = even(num1);
		if(result==1){
			printf("%d is an even number", num1);
		}
		else{
			 printf("%d is an odd number", num1);
		}
	}
	else if(selectedItemFromtheMenu=='4'){
		printf("Enter your three numbers that you want to compare: ");
        scanf("%d %d %d", &num1, &num2, &num3);
	    int result = maxOfthe3Number(num1, num2, num3);
	    printf("%d is max of the three number", result);
	}
	else if(selectedItemFromtheMenu=='5'){
		printf("Enter your three numbers that you want to see the average of: ");
      scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4,&num5);
	    double result = averg(num1,num2,num3,num4,num5);
	    printf("%f is the average of the 5 numbers entered", result);

	}
	else if(selectedItemFromtheMenu=='6'){
		printf("please entre the two numbers that you want to compare:");
		scanf("%lf %lf", &num_clo1, &num_clo2);
	    int result = closeEnough(num_clo1, num_clo2);
	    if(result==1){
			printf("the two values are within a tolerance of .0001 ");
		}
		else{
			 printf("the two values are not within a tolerance of .0001 ");
		}
	}
	else if(selectedItemFromtheMenu=='7'){
		printf("please entre the three integers");
		scanf("%d %d %d",&num1,&num2 ,&num3);
	    double result = powpow(num1,num2,num3);
	    printf("%f is the result of the operation", result);
	}
	else{
		printf("Thank you for using our Machine Menu");
	    quit();}
}
}

/* the menu function that display and aske the user for the kind of operataion he is looking for*/

void menu()
{
  printf("The Most Useful Machine\n menu:\n (1) ASCII to integer\n (2)Is not a letter\n (3)Is Even\n (4)Max of three\n (5)average of five\n (6)Close enough\n (7)Pow Pow\n (8)Quit\n Select the operation wanted:");

}

/* the check function that reports the integer value of the ASCII */
int check(char ch){


    return (int)ch;

}

/* the even function that reports 1 if the integer is even, 0 if it is odd */
int even(int num)
{

   if ( num%2 == 0 ){
      return 1;}
   else{
    	return 0;}
}


/* the isNotALetter function that reports a 1 if the character is not an upper- or lower-case letter, A through Z. It returns 0 if the character is an upper*/
int isNotALetter(char letterToTest){
    if((letterToTest >= 'A' && letterToTest <= 'Z') || (letterToTest >= 'a' && letterToTest <= 'z')){
     	return 1;
    }
    else{
    	return 0;
    }
}

/* the maxOfthe3Number function that reports the greatest of the three*/
int maxOfthe3Number(int num1,int num2,int num3){

    if (num1 >= num2 && num1>= num3) {
        return num1; }

    if (num2 >= num1 && num2>= num3) {
        return num2;}

    if (num3 >= num1 && num3>= num2){
        return num3;}
  return 0;
}

/* the averg function that reports the Average of five*/
double averg(double number1, double number2, double number3, double number4, double number5)
{

  double averg1 = (number1+number2+number3+number4+number5)/5;
  return averg1;
}

/* the closeEnough function that reports 1 if the two values are within a tolerance of .0001 of each other, or 0 otherwise.*/
double closeEnough(double num1, double num2)
{
  double sum = num1 - num2;

  if(fabs(sum) < 0.0001 ){
    return 1;}
  else{
     return 0;}
}

/* the powpow function that raise a to the power of b raised to the power of c*/
double powpow(int a, int b, int c)
{
	int pow1, pow2;
	pow1 = pow(a,b);
	pow2 = pow(pow1,c);
	return pow2;
}

/* the quit function */
int quit()
{
  exit(0);
  return 0;
}
