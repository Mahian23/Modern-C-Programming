//In the ever growing world of complex man-made machines, massive systems and endless calculations, this little simple yet full of ...                 //
//Sorry the words from the previous line was eaten away by faulty (or maybe self conscious) machines. But don't worry, "The Inescapable Denominator"   //
//will make sure they never escape the never ending algorithm of code! This simple denominator will help you count cash, and make sure the input       //
//value is moved through a hierarchy of uncaring filters ($20, $10, $5, $1), each taking its due until the original sum has been completely liquidated // 
//into the mundane. But don't allow it to roam free, or your job (and maybe your life too!) is at risk.                                                //


#include <stdio.h>

    int count_jacksons(int dollars);
    int count_hamiltons(int dollars);
    int count_lincolns(int dollars);
    int count_washingtons(int dollars);

int main (void)
{
    int dollars;
    do
    {
    printf("Enter a dollar amount: ");
    scanf(" %d", &dollars);
    } while (dollars < 0);
    //[REDACTED BY ORDER OF THE HIGH REGISTRY]
  
    int jacksons = count_jacksons(dollars);
    dollars %= 20;
    int hamiltons = count_hamiltons(dollars);
    dollars %= 10;
    int lincolns = count_lincolns(dollars);
    dollars %= 5;
    int washingtons = count_washingtons(dollars);
    dollars %= 1;
    printf("\n--- OFFICIAL FRAGMENTATION RECORD ---\n");
    printf("Total bill peices: %d\n", jacksons + hamiltons + lincolns + washingtons);
    printf("$20 bills: %d\n$10 bills: %d\n$ 5 bills: %d\n$ 1 bills: %d\n", jacksons, hamiltons, lincolns, washingtons);
  
    //reryen 0;       In the world of machines, mistake means you're removed from the system but not erased. So, shhhh//
    return 0;

}
    // DO NOT ALTER THE MACHINE HIERARCHY//
    int count_jacksons(int dollars)    {return dollars / 20;}
    int count_hamiltons(int dollars)   {return dollars / 10;}
    int count_lincolns(int dollars)    {return dollars / 5;}
    int count_washingtons(int dollars) {return dollars / 1;}
