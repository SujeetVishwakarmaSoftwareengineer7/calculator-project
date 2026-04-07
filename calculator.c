#include<stdio.h>
#include<conio.h>
#include<math.h>

void basiccalculator();
void advancedcalculator();

int main(){

    int choice;
    while(1){
    printf("\n\033[31m==============================================================\n");
    printf("                     PROJECT  CALCULATOR \n");
    printf("FIRSTPROJECT IN C LANGUAGE\n");
    printf("\ndeveloper :  Sujeet Vishwakarma\n");
    printf("   course:      BCA (1st semester\n");
    printf("language:   C language\n");
    printf("  college:       maharishi mahesh yogi\n");
    printf("               ramayana vishwavidyalaya ayodhya\n");
    printf("==============================================================\n");
    printf("\n");





    printf("welcome to simple calculator\n");

    printf("\n\033[32m1.Basiccalculator\n");
    printf("2.Advancedcalculator\n");
    printf("3.Close calculator\n");

    printf("enter your choice\n");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        basiccalculator();
        break;

        case 2:
       advancedcalculator();
        break;

        case 3:
        printf("close calculator\n");
      return 0;

        default:
        printf(" WARNING ✂️✂️✂️ \n");
        printf("envalid choice\n");
        printf("please enter correct option \n");
        
    }

}
}

void basiccalculator(){
    int ch;
    float a,b;

    printf("basic calculator\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multplication\n");
    printf("4.Division \n");

    printf("enter your choice\n");
    scanf("%d",&ch);

    printf("enter two number\n");
    scanf("%f %f",&a,&b);


switch(ch){
    case 1:
    printf("result =%.2f\n",a+b);
    break;

    case 2:
    printf("result = %.2f\n",a-b);
    break;

    case 3:
    printf("result = %.2f\n",a*b);
    break;

    case 4:
    if(b!=0)
        printf("result = %.2f\n",a/b);
    else 
        printf("error: division by zero\n");
        break;
      
        default:
        printf("invalid choice\n");

    }
}

void advancedcalculator(){
    int ch;
    double x,y;

    printf("Advanced calculator\n");
    printf("1.Pow(x^y\n");
    printf("2.Square root\n");
    

    printf("enter your choice\n");
    scanf("%d",&ch);


    switch(ch){
        case 1:
        printf("enter base and power\n");
        scanf("%lf %lf",&x,&y);
        printf("result =%.2lf\n",pow(x,y));
        break;

        case 2:
        printf("enter number:");
        scanf("%lf",&x);
        if(x>=0)
        printf("result =%.2lf\n",sqrt(x));
        else
        printf("error ✂️: negative number\n");
break;

 
       default:
       printf(" WARNING ✂️✂️✂️\n");
       printf("envalid choice\n");
       printf("don smart with me\n");
       printf("enter correct option\n");   

    }
}

