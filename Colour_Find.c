#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two numbers (1-36): ");
    scanf("%d %d", &num1, &num2);

 // Green Square

    if ((num1==1 || num1==6 || num1==7 || num1==12 || num1==17 || num1==20 || num1==28 || num1==33) &&
        (num2==1 || num2==6 || num2==7 || num2==12 || num2==17 || num2==20 || num2==28 || num2==33))
    {
        printf("\nColour is matched which is (GREEN)\n");
    }

 // Red Square
    else if ((num1==2 || num1==11 || num1==13 || num1==18 || num1==19 || num1==24 || num1==29 || num1==32) &&
             (num2==2 || num2==11 || num2==13 || num2==18 || num2==19 || num2==24 || num2==29 || num2==32))
    {
        printf("\nColour is matched which is (RED)\n");
    }

 // Orange Square 
    else if ((num1==4 || num1==9 || num1==15 || num1==22 || num1==26 || num1==35) &&
             (num2==4 || num2==9 || num2==15 || num2==22 || num2==26 || num2==35))
    {
        printf("\nColour is matched which is (ORANGE)\n");
    }

 // Sky Blue Square
    else if ((num1==3 || num1==10 || num1==14 || num1==23 || num1==25 || num1==30 || num1==31 || num1==36) &&
             (num2==3 || num2==10 || num2==14 || num2==23 || num2==25 || num2==30 || num2==31 || num2==36))
    {
        printf("\nColour is matched which is (SKY-BLUE)\n");
    }

 // Grey Square   
    else if ((num1==5 || num1==8 || num1==16 || num1==21 || num1==27 || num1==34) &&
             (num2==5 || num2==8 || num2==16 || num2==21 || num2==27 || num2==34))
    {
        printf("\nColour is matched which is (GREY)\n");
    }
    
    else
    {
        printf("\nColour not matched!\n");
    }

    return 0;
}
