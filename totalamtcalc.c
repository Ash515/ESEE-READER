#include <stdio.h>
int main()
int unit;
printf("Enter total units consumed: ");
if(unit <= 100)float amt, total_amt;
scanf("%d", &unit);	           
{
amt = (0+(unit *0))	;
  }   	           
 else if(unit>100 && unit<=200)           
 {
    amt = (20+(unit * 2.50));
 }
else if(unit>200&&unit<=500)
{
    amt = (30+(unit * 4.50)
}
else
{
    amt= (50+(unit * 6.60));
}
total_amt  = amt ;
printf("Electricity Bill = Rs. %.2f", total_amt);
 return 0;                                  
}
