// SA2.1 WAP to perform the adittion of two integers and display the result
/*
#include<stdio.h>

int main(){
    int a,b,sum=0;
    printf("Enter First num to find summation:");
    scanf("%d",&a);
    printf("Enter Second num to find summation:");
    scanf("%d",&b);
    sum=a+b;
    printf("Summation of two numbers are : %d",sum);
}
*/

// SA2.2 WAP to find the centigrade for a given Farenhite temperature.
/*
#include<stdio.h>

int main(){
    float c,f;
    printf("Enter Temp in degree Farenhite:");
    scanf("%f",&f);
    c= ((f-32)*5)/9;
    printf("Temp in degree Celsius : %f",c);
}
*/

// SA2.3 WAP to calculate the area of a circle.
/*
#include<stdio.h>

int main(){
    float r,area;
    printf("Enter radius of a circle :");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("Area of the Circle : %f",area);
}
*/

//SA2.4 WAP to calcuate area of a triangle whose base and height is given.
/*

#include<stdio.h>

int main(){
    int b,h;
    float area=0;
    printf("Enter base of a triangle :");
    scanf("%d",&b);
    printf("Enter height of a triangle :");
    scanf("%d",&h);
    area = 0.5*b*h;
    printf("Summation of two numbers are : %f",area);
}

*/

// WAP to swap two integer numbers using third variable.
/*

#include<stdio.h>

int main(){
    int a,b,c;
    float area=0;
    printf("Enter first num to swap (A):");
    scanf("%d",&a);
    printf("Enter second num to swap (B):");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("The Swapped numbers are (A): %d",a);
    printf("The Swapped numbers are (B): %d",b);
}

*/

//WAP to convert given paisa into equivalent rupee and paisa as per the following format. Example. 550 paisa = 5 Rupee and 50 paisa.
/*

#include<stdio.h>

int main(){
    int p,q,r;
    printf("Enter paisa to conver it to rupee: ");
    scanf("%d",&p);
    q=p/100;
    r=p%100;
    printf("%d Paise = %d Rupee and %d Paisa ",p,q,r);
}
*/

//WAP to convert given second into its equivalent hour,minute and second as per the following format. Example. 7560 second = 2 Hour,27 Minute and 40 Second.
/*

#include<stdio.h>

int main(){
    int t,h,m,s;
    printf("Enter Seconds to Convert to HH/MM/SS \n");
    scanf("%d",&t);
    h=t/3600;
    m=(t-(3600*h))/60;
    s=(t-(3600*h)-(m*60));

    printf("H.M.S - %d:%d:%d \n",h,m,s);
}

*/


// ______________ LAB Assignments __________________


// LA2.1 WAP to subtract a number from another number and disply the result
/*
#include<stdio.h>

int main(){
    int a,b,sub=0;
    printf("Enter a Number: ");
    scanf("%d",&a);
    printf("Enter a Number: ");
    scanf("%d",&b);
    sub=b-a;
    printf("Subtraction of two numbers:  %d",sub);

}
*/

//LA2.2 WAP to convert temperature from Centigrade to Farenhite Scale.

/*
#include<stdio.h>

int main(){
    float c,f;
    printf("Enter Temp in degree Celcius:");
    scanf("%f",&c);
    f=(c*(9/5))+32;
    printf("Temp in degree Farenhite : %f",f);
}
*/

//LA2.3 WAP to calculate perimeter of circle
/*
#include<stdio.h>

int main(){
    float r,peri=0;
    printf("Enter the radius of a circle: ");
    scanf("%f",&r);
    peri=2*3.14*r;
    printf("Perimeter of the Circle is: %f",peri);
}
*/



//--------------------------- Assignment 2 ---------------------

//LA3.1 WAP to input any two integers distinct and display the greater of two integers.
/*

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter first distinct integer: ");
    scanf("%d",&a);
    printf("Enter second distinct integer: ");
    scanf("%d",&b);
    if(a>b){
        printf("The greater integer is: %d",a);
    }
    else{
        printf("The greater integer is: %d",b);
    }
}

*/

//LA3.2 WAP to input any three integers distinct and display the greater of the three integers.


/* 

#include<stdio.h>

int main(){
    int a,b,c;
    int big=0;
    printf("Enter first distinct integer: ");
    scanf("%d",&a);
    printf("Enter second distinct integer: ");
    scanf("%d",&b);
    printf("Enter third distinct integer: ");
    scanf("%d",&c);
    if(a>big){
        big=a;
    }
    if(b>big){
        big=b;
    }
    if(c>big){
        big=c;
    }
    printf("The greatest of three integer: %d \n",big);
}

*/


//LA3.3 WAP to test whether a number entered through keyboard is ODD or EVEN.
/*

#include<stdio.h>

int main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    if(a%2==0){
        printf("Inputed Number is EVEN. \n");
    }
    else{
        printf("Inputed number is ODD. \n");
    }
}

*/

//LA3.4 WAP to read an alphabet from the user and convert it into lowercase if the entered alphabet is in uppercase, otherwise display an appropriate message.

/*

#include<stdio.h>
#include <ctype.h>

int main(){
    char a,b;
    printf("Enter an Alphabet : ");
    scanf("%c",&a);
    if(isupper(a)){
        b=tolower(a);
        printf("Alphabet in lowercase is: %c \n",b);
    }
    else{
        printf(" Inputed Alphabet is not in UpperCase \n");
    }
}

*/

//LA3.5 WAP to input any two integer, and provide a menu to the user to select any of the option as ass,subtract,multiply,divide and display the result accordingly.

/*

#include<stdio.h>

int main(){
    int a,b;
    float ans=0;
    char ch;
    printf("\n\nEnter the Character (+,-,*,/): ");
    scanf("%c", &ch);
    printf("Enter first distinct integer: ");
    scanf("%d",&a);
    printf("Enter second distinct integer: ");
    scanf("%d",&b);
    if(ch=='+'){
        ans=a+b;
    }
    else if(ch=='-'){
        ans=a-b;
    }
    else if(ch=='*'){
        ans=a*b;
    }
    else if(ch=='/'){
        ans=(float)a/b;
    }
    else{
        printf("Invalid Inputed Operator. \n");
    }
    printf("Required Result is : %f \n",ans);
}

*/

//LA3.6 WAP to display the grade system of KIIT University based on total marks secured by a student in a semister, Use else...if statement.


// HA3.1  WAP to check whether a character entred through keyboard is a digit,letter,special character etc or not.

/*

#include<stdio.h>
#include <ctype.h>

int main(){
    char a;
    printf("Enter an Character : ");
    scanf("%c",&a);
    if(isdigit(a)){
        printf("Character is Digit \n");
    }
    else if(isalpha(a)){
        printf("Character is Letter  \n");
    }
    else{
        printf("Character is Special Character \n");
    }
}

*/

//HA3.3 WAP whaich takes two integer operands and one operator from the user, performs the opearation and then prints the result. (Consider the operators +,-,*,/,%,etc).


/*

#include<stdio.h>

int main(){
    int a,b;
    float ans=0;
    char ch;
    printf("\n\nEnter the Character (+,-,*,/,%%): ");
    scanf("%c", &ch);
    printf("Enter first distinct integer: ");
    scanf("%d",&a);
    printf("Enter second distinct integer: ");
    scanf("%d",&b);
    if(ch=='+'){
        ans=a+b;
    }
    else if(ch=='-'){
        ans=a-b;
    }
    else if(ch=='*'){
        ans=a*b;
    }
    else if(ch=='/'){
        ans=(float)a/b;
    }
    else if(ch=='%'){
        ans=a%b;
    }
    else{
        printf("Invalid Inputed Operator. \n");
    }
    printf("Required Result is : %f \n",ans);
}

*/


//HA3.3 WAP to find the roots of a quadratic equation ax^2+bx+c=0 using switch-case statement.
/*
#include<stdio.h>
#include <math.h>

int main(){
    float a,b,c,root1,root2,disc;
    printf("Enter a,b,c of the quadratic equation ax^2+bx=c=0 : \n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    disc=(b*b)-(4*a*c);
    switch(disc>0){
        case 1:
            root1=((b*b)-sqrt(disc))/(2*a);
            root2=(-(b*b)-sqrt(disc))/(2*a);
        case 2:

        case 3:
    }
    root=((-b)+ sqrt((b*b)-(4*a*c)))/(2*a);
}
*/


//WAP to find sum of n numbers where n is inputed by the user.
/*
#include <stdio.h>
int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
}
*/

//Write a c program to find the avg of n numbers.
/*
#include<stdio.h>

int main(){
    int i,n,sum=0;
    float avg=0;
    printf("Enter n number to find avg:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    avg=sum/n;
    printf("Average of n inputed number is: %f",avg);
}
*/
//WAP to find the factorial of a number.
/*
#include<stdio.h>

int main(){
    int i,f=1,n;
    printf("Enter a number to find the Factorial: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    printf("Factorial= %d",f);
}
*/
//WAP to find the HCF and LCM of two positive integer numbers.
/*
#include<stdio.h>

int main(){
    int a,b;
    printf("Enter 2 positive integer: %d %d",&a,&b);
    if(a>b){
        for(int i=1;i<=a;i++){
            
        }
    }
    else{
        for(int j=1;j<=b;j++){
            
        }
    }
    
}
*/
//WAP in C to print the smallest divisor of an integer Eg:77 -> 7
//WAP to print the digit one by one Least significant digit will be printed fast. Eg: 121 -> 1+2+1
// W a C program to reverse the digits of an integer.
/*
#include<stdio.h>

int main(){
    int n;
    printf("Enter a Number: ");
    
}

*/
//WAP to accept an integer number and print the multiplication of the digits.
//WAP to accept a number and sum of individual digits repeatedly till the result is a single digit.

//print 1-20 with 5 digit in each row using nested loops
/*
#include <stdio.h>

int main(){
    int c=1;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=5;j++){
            printf("%d \t",c);
            c++;
        }
        printf("\n");
    }
}
*/

//prime number of n range
/*
#include<stdio.h>

int main(){
    int n,range,c=0;
    printf("Enter an range: \n");
    scanf("%d",&range);
    for(int j=2;j<=range;j++){
        for(int i=1;i<=j;i++){
            if(j%i==0){
                c++;
            }
        }
        if(c==2){
            printf("%d \t",j);
        }
        c=0;
    }
}
*/

//print only prime numbers whose unit or tenth digit is 3

#include<stdio.h>

int main(){
    
}