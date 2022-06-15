#include <stdio.h>  
#include <conio.h>  
#include <math.h>  
#include <stdlib.h>  
      
// function declarations   
int addition();  
int subtract();  
int multiply();  
int divide();  
int power();  
int sqrt1();  
void exit();  
char name[100];
int main()  
{  
    // declaration a local variable op;  
    int op;
    char u,s;
    FILE *f;
    printf("Enter your name\n");
    scanf("%s",name);
    do  
    {  
        // displays the multiple operations of the C Calculator 
        printf (" \nSelect an operation to perform the calculation in C Calculator: ");  
        printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Power \t \t 6 Square Root \n 7 Log \n 8 exit\n");
        scanf ("%d", &op); // accepts a numeric input to choose the operation  
      
    // use switch statement to call an operation  
    switch (op)  
    {  
        case 1:  
            addition(); //It call the addition() function  to add the given numbers
            break; // break the function  
              
        case 2:  
            subtract(); //It call the subtract() function  to subtract the given numbers
            break; // break the function  
              
        case 3:  
            multiply(); //It call the multiply() function  to multiply the given numbers
            break; // break the function  
              
        case 4:  
            divide(); // It call the divide() function  to divide the given numbers
            break; // break the function  
              
        case 5:  
            power(); // It call the power() function to get the power of a number
            break; // break the function  
              
        case 6:  
            sqrt1(); // It call the sqrt1() function  to get the square root of given numbers  
            break; // break the function  
              
        case 8:  
            exit(0); // It call the exit() function  to exit from the program  
            break; // break the function  
        case 7:  
            f=fopen("log.txt","r");
            while((s=fgetc(f))!=EOF) {
                printf("%c",s);}
            fclose(f);
            printf("Thanks for using the calculator");
            break;     
        default:  
            printf(" Something is wrong!! ");  
            break;                        
                } 
    printf (" \n \n ********************************************** \n ");  
    } 
    while (op != 8);
  
    return 0;        
} 
  
  
  
// function definition  

//use addition() function to add two numbers  
int addition()  
{  
    int n1,n2,res;
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    res = n1 + n2;    
    printf (" The addition of %d + %d is: %d", n1, n2, res);  
    FILE *ptr;
    ptr = fopen("log.txt","a");
    fprintf(ptr,"%s added %d and %d.\n",name,n1,n2);
    fprintf(ptr,"The result is %d\n",res);
    fclose(ptr);
    return 0;

    

}
// use subtract() function to subtract two numbers  
int subtract()  
{  
    int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    res = n1 - n2;    
    printf (" The subtraction of %d - %d is: %d", n1, n2, res);
    FILE *ptr;
    ptr = fopen("log.txt","a");
    fprintf(ptr,"%s subtracted %d and %d.\n",name,n1,n2);
    fprintf(ptr,"The result is %d\n",res);
    fclose(ptr); 
    return 0; 
}  
  
// use multiply() function to multiply two numbers  
int multiply()  
{  
    int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    res = n1 * n2;    
    printf (" The multiply of %d * %d is: %d", n1, n2, res);
    FILE *ptr;
    ptr = fopen("log.txt","a");
    fprintf(ptr,"%s multiplied %d and %d.\n",name,n1,n2);
    fprintf(ptr,"The result is %d\n",res);
    fclose(ptr); 
    return 0;
}  
  
// use divide() function to divide two numbers  
int divide()  
{  
    int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
      
    if (n2 == 0)  
    {  
        printf (" \n Divisor cannot be zero. Please enter another value ");  
        scanf ("%d", &n2);        
    }  
    res = n1 / n2;    
    printf (" \n The division of %d / %d is: %d", n1, n2, res);
    FILE *ptr;
    ptr = fopen("log.txt","a");
    fprintf(ptr,"%s devided %d and %d.\n",name,n1,n2);
    fprintf(ptr,"The result is %d\n",res);
    fclose(ptr);  
    return 0;
}  
  
// use power() function to get the square of the given number  
int power()  
{  
    int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    res = pow(n1,n2);    
    printf (" %d raised to %d is: %d", n1, n2, res);
    FILE *ptr;
    ptr = fopen("log.txt","a");
    fprintf(ptr,"%s raised %d by power %d.\n",name,n1,n2);
    fprintf(ptr,"The result is %d\n",res);
    fclose(ptr);
    return 0;
}  
  
// use sqrt1() function to get the square root of the given number   
int sqrt1()  
{  
    float res;  
    int n1;  
    printf (" Enter a number to get the Square Root: ");  
    scanf ("  %d", &n1);
    res = sqrt(n1);   
    printf (" \n The Square Root of %d is: %f", n1, res); 
    FILE *ptr;
    ptr = fopen("log.txt","a");
    fprintf(ptr,"%s took square root of %d.\n",name,n1);
    fprintf(ptr,"The result is %f\n",res);
    fclose(ptr); 
    return 0;
}  
