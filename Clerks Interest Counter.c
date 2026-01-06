//Loan (or Debt) is actually a dangerous term, for the system which controls it can eat one whole.                         //
//But don't worry, clerks interest counter.c could never eat you whole (for it only can eat a single "byte" at a time)     //
//                                                                                                                         //
//This little buddy will count your monthly loan interst and make sure you won't fall victim to the bank clerk's coldness! //


#include <stdio.h>

int main (void)
{
    int month;
    double loan, interest, pay;

    //Input validation//
    do {
        printf("Loan amount: ");
        scanf("%lf", &loan);
    } while (loan <= 0);

    do {
        printf("Annual Interest rate (%%): ");
        scanf("%lf", &interest);
    } while (interest <= 0);

    do {
        printf("Monthly Payment amount: ");
        scanf("%lf", &pay);
    } while (pay <= 0);
  
    do {
        printf("Months to track: ");
        scanf("%d", &month);
    } while (month <= 0);
  
    printf("\n--- Repayment Schedule ---\n");

    for(int i = 1; i <= month; i++)
    {   
        if (loan <= 0)
        {
            //If loan was already cleared in a previous iteration//
            printf("Month %2d: Account Balance: 0.00 (Cleared)\n", i);
            continue; 
        }

        //Let's the machine calculate interest and subtract payment//
        double monthly_interest = (loan * (interest / 100)) / 12;
        loan = loan + monthly_interest - pay;

        if (loan <= 0)
        {
            printf("Month %2d: Loan Remaining: 0.00\n", i);
            printf("System Alert: Loan cleared Successfully!\n");
            loan = 0; //Ensure the world that it stays 0 for future prints//
        }
        else
        {    
            printf("Month %2d: Remaining: %.2lf\n", i, loan);
        }
    } //End of loop (It's temporary, for the true loop never ends)//

    return 0;
}
