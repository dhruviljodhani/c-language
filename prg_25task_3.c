#include <stdio.h>
int main() {
    double amt;

    unsigned int int_amt, frac_amt;
    printf("Input the currency value (floating point with two decimal places):\n");

    scanf("%lf", &amt);

    int_amt = (int) amt;
    amt -= int_amt;

    frac_amt = round((amt * 100));

    printf("\nCurrency Notes:");
    printf("\n100 number of Note(s): %d", int_amt / 100);

    int_amt -= (int_amt / 100) * 100;

    if (int_amt > 50) {
        printf("\n50 number of Note(s): 1");
        int_amt -= 50;
    } 

    if (int_amt/20 > 0)   
    printf("\n20 number of Note(s): %d", int_amt / 20);

    int_amt -= (int_amt / 20) * 20;
    if (int_amt/10 > 0)   
    printf("\n10 number of Note(s): %d", int_amt / 10);

    int_amt -= (int_amt / 10) * 10;
    if (int_amt/5 > 0)   
    printf("\n5 number of Note(s): %d", int_amt / 5);
		
	
    int_amt -= (int_amt / 5) * 5;
    
    if (int_amt > 0)   
    printf("\n2 number of Note(s): %d", int_amt / 2);
    
    
    int_amt -= (int_amt / 2) * 2;
   
    if (int_amt > 0)           
    printf("\n1 number of Note(s): %d", int_amt);