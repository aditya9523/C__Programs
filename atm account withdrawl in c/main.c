#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount;
    float balance=5000.00;
    float charge=0.5;
    printf(" Maximum amount of Money You Can Withdraw IS Rs%f\n",balance);
    printf(" Enter the amount you Want to Withdraw\n");
    scanf(" %d",&amount);
    if (amount%5==0 && amount<=balance)
    {
    printf(" You Can Withdraw amount : Rs%d\n",amount);
    printf(" Charge Deducted is :Rs%f\n",charge);
    balance=balance-(amount+charge);

    printf(" Your balance is : Rs%f\n",balance);

    }
    {

     if(amount>=5000)
    {
        printf(" Your Account Does Not Have Sufficient Balance");
    }
    if(amount%5!=0)
    {
        printf(" Enter Amount Which is Multiple of 5");
    }
    }


    return 0;
}
