#include <stdio.h>
main() 
{
	//30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
	//minimum bill should be of Rs. 256/-

    float bill, total_Bill, surcharge, Rate = 0.18, minimumBill = 256;
    
    printf("\n\n\t Enter the bill amount : ");
    scanf("%f", &bill);
    
    surcharge=bill*Rate;
    if (bill > 800) {
        total_Bill = bill + surcharge;
    } else {
        total_Bill = bill;
    }
    
    // Ensure minimum bill of Rs. 256
    if (total_Bill < minimumBill) {
        total_Bill = minimumBill;
    }
    
    printf("\n\n\t Total bill amount: Rs. %.2f", total_Bill);
    
}
