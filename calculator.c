#include<stdio.h>
#include<math.h>
struct Calculator
{
    int choice;
    double number,first_variable,multi_per_result,result1,degree,radian,result,a,b,c;
};

//function part

//addition function
double add(double num1,double num2)
{
    return num1+num2;
}

//subtraction function
double sub(double num1,double num2)
{
    return num1-num2;
}

//Multiplication function
double multi(double num1, double num2)
{
    return num1*num2;
}

//division function
double div(double num1,double num2)
{
    return num1/num2;
}

//percentage function
double per(double num1,double num2)
{
    return num1*(num2/100);
}

//scientific calculator part in function

//logarithm function
double log(double number)
{
    return log10(number);
}
//Sin
double tri1(double degree, double radian)
{
    radian = degree * (3.1416/180.0);
    return sin(radian);
}
//cos
double tri2(double degree, double radian)
{
    radian = degree * (3.1416/180.0);
    return cos(radian);
}
//tan
double tri3(double degree, double radian)
{
    radian = degree * (3.1416/180.0);
    return tan(radian);
}
//square function
double square(double number)
{
    return number*number;
}
//square root
double squareroot(double number)
{
    return sqrt(number);
}
//equation solver
void solveQuadratic(double a, double b, double c)
{
    double discriminant, root1, root2;


    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1: %.2lf\n", root1);
        printf("Root 2: %.2lf\n", root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 and Root 2: %.2lf\n", root1);
    }
    else
    {
        printf("Roots are complex and imaginary.\n");
    }
}


int main()
{
    struct Calculator calculator;

    calculator.first_variable=0,calculator.multi_per_result=1;
    // double number,
    //                             ;
    // int choice;

    printf("\n\n\n");
    printf("\t\t\t\t\t********************************\t\t\t\n");
    printf("\t\t\t\t\t--------------------------------\t\t\t\n");
    printf("\t\t\t\t\t| Welcome     to    Calculator |\n");
    printf("\t\t\t\t\t| Created by Team Parentheses  |\t\t\t\n");
    printf("\t\t\t\t\t--------------------------------\t\t\t\n");
    printf("\t\t\t\t\t********************************\t\t\t\n\n\n");
    
    
    printf("Enter a Number: ");
    scanf("%lf",& calculator.number);
    calculator.first_variable=calculator.number;


    do
    {
        printf("\nSelect an operation to perform the calculation in c calculator:\n");
        printf("0. About Team          6. logarithm\n");
        printf("1. Addition            7. Trigonometry\n");
        printf("2. Subtraction         8. Square\n");
        printf("3. Multiplication      9. square root\n");
        printf("4. Division           10. Equation Solver\n");
        printf("5. Percentage         11. Exit\n");


        printf("\n\n");

        printf("\n\nEnter your choice: ");
        scanf(" %d", &calculator.choice);
        printf("\n");


        switch(calculator.choice)
        {
        case 0:
            {
                printf("***********************************\n");
                printf("Md Rakibul Hasan\n");
                printf("ID: 0242310005101263\n\n");
                printf("Md: Bulbul Hasan\n");
                printf("ID: 0242310005101106\n\n");
                printf("Md: Arman Hossen\n");
                printf("ID: 0242310005101350\n\n");
                printf("Md: Mirazul Islam\n");
                printf("ID: 0242310005101190\n\n");
                printf("***********************************\n\n");
                break;
            }

        case 1:
            printf("You chose: Addition\n");
            printf("Take a number to addition: ");
            scanf("%lf",&calculator.number);
            calculator.result=add(calculator.first_variable,calculator.number);
            calculator.first_variable=calculator.result;
            printf("Addition is: %.2lf\n",calculator.result);
            printf("***********************************\n\n");
            break;

        case 2:
            printf("You chose: Subtraction\n");
            printf("Take a number to Subtract: ");
            scanf("%lf",&calculator.number);
            if(calculator.first_variable!=0)
            {
                calculator.result=sub(calculator.first_variable,calculator.number);
                calculator.first_variable=calculator.result;
                printf("\n\nSubtract result is: %.2lf\n", calculator.result);
            }
            else if(calculator.first_variable==0)
            {
                calculator.result=sub(calculator.number,calculator.first_variable);
                calculator.first_variable=calculator.result;
                printf("\n\nSubtract result is: %.2lf\n", calculator.result);
            }
            printf("***********************************\n\n");
            calculator.first_variable=calculator.result;
            break;

        case 3://multiplication
            printf("You chose: Multiplication\n");
            printf("Take a number to Multiplication: ");
            scanf("%lf", &calculator.number);
            if(calculator.first_variable!=0)
            {
                calculator.result=multi(calculator.first_variable,calculator.number);
                calculator.first_variable=calculator.result;
                printf("Multiplication result is: %.2lf\n", calculator.result);
                printf("***********************************\n\n");
            }
            else
            {
                calculator.first_variable=1;
                calculator.result = multi(calculator.first_variable,calculator.number);
                calculator.first_variable=calculator.result;
                printf("Multiplication result is: %.2lf\n", calculator.result);
            }
            printf("***********************************\n\n");
            break;

        case 4://division
            printf("You chose: Division\n");
            printf("Take a number to division: ");
            scanf("%lf",&calculator.number);

            if(calculator.first_variable!=0 && calculator.number==0)
            {
                printf("Math Error! Cannot divide by zero.\n");
                printf("***********************************\n\n");
            }
            else
            {
                calculator.result=div(calculator.first_variable,calculator.number);
                calculator.first_variable=calculator.result;
                printf("Division result is: %.2lf\n", calculator.result);
            }
            printf("***********************************\n\n");
            break;

        case 5://percentage
            printf("You chose: Percentage\n\n");
            printf("Take a number to percentage: ");
            scanf("%lf",&calculator.number);
            calculator.first_variable=1;
            calculator.result=per(calculator.first_variable,calculator.number);
            calculator.first_variable=calculator.result;
            printf("Percentage result is: %.2lf\n", calculator.result);
            printf("***********************************\n\n");
            break;

        case 6://Logarithm
            printf("You chose: Logarithm\n");
            printf("\nEnter a number: ");
            scanf("%lf",&calculator.number);
            if(calculator.number>0)
            {
                calculator.first_variable=calculator.number;
                calculator.result=log(calculator.first_variable);
                calculator.first_variable=calculator.result;
                printf("\nLogarithm is: %.2lf\n", log(calculator.number));
                printf("***********************************\n\n");
            }
            else
            {
                printf("Error: Invalid input for logarithm\n");
                printf("***********************************\n\n");
            }
            break;

        case 7:
            printf("You chose: Trigonometry\n");
            printf("\nEnter angle in degree: ");
            scanf("%lf",&calculator.degree);
            printf("sin(%.2lf) = %.2lf\n",calculator.degree, tri1(calculator.degree,calculator.radian));
            printf("cos(%.2lf) = %.2lf\n",calculator.degree, tri2(calculator.degree,calculator.radian));
            printf("tan(%.2lf) = %.2lf\n",calculator.degree, tri3(calculator.degree,calculator.radian));
            printf("***********************************\n\n");
            break;

        case 8:
        {
            printf("\nEnter a number: ");
            scanf("%lf",&calculator.number);
            calculator.first_variable=calculator.number;
            calculator.result=square(calculator.first_variable);
            calculator.first_variable=calculator.result;
            printf("\nSquare is: %.2lf\n",calculator.result);
            printf("***********************************\n\n");
            break;
        }

        case 9://square root
        {
            if(calculator.number<0)
            {
                printf("\nError! please enter positive number\n");
                printf("***********************************\n\n");
            }
            else
            {
                printf("Enter a number: ");
                scanf("%lf",&calculator.number);
                calculator.first_variable=calculator.number;
                calculator.result=squareroot(calculator.number);
                calculator.first_variable=calculator.result;
                printf("\nSquare root is: %.2lf\n", calculator.result);
                printf("***********************************\n\n");
            }
            break;
        }

        case 10:
        {
            printf("Enter the coefficients of the quadratic equation (a, b, c): ");
            scanf("%lf %lf %lf", &calculator.a, &calculator.b, &calculator.c);

            solveQuadratic(calculator.a, calculator.b, calculator.c);
            printf("***********************************\n\n");
            break;
        }
        case 11:
            {
            printf("Exiting....\n\n");
            break;
            }

        default:
            printf("Invalid choice. Please try again.\n");
            printf("***********************************\n\n");
            break;
        }
    }
    while(calculator.choice != 11);
    return 0;
}

