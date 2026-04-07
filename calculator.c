#include<stdio.h>
#include<conio.h>
#include<math.h>

void basiccalculator();
void advancedcalculator();

int main(){

    int choice;
    while(1){
    printf("welcome to simple calculator\n");
    printf("1.basiccalculator\n");
    printf("2.advancedcalculator\n");
    printf("3.close calculator\n");

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
        printf("envalid choice\n");
        
    }

}
}

void basiccalculator(){
    int ch;
    float a,b;

    printf("basic calculator\n");
    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multplication\n");
    printf("4.division \n");

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

    printf("advanced calculator\n");
    printf("1.pow(x^y\n)");
    printf("2.square root\n");
    printf("3.modulus\n");

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
        printf("error: negative number\n");
break;

       case 3:{
        int a,b;
        printf("enter two integer:");
        scanf("%d %d ",&a,&b);

        if(b!=0)
        printf("result =%.2lf\n",a%b);
        else
        printf("error: modulus by zero\n");
        break;

       }

       default:
       printf("envalid choice\n");
       printf("don smart with me\n");
       printf("enter correct option\n");   

    }
}
