#include <stdio.h>
#include <math.h>
/*This is the program that conatins my all of tha programs i have made*/
/*I will made these programs in one file using the functions*/
/*The fuctions will work saparately for every task*/
/*I have used the void type functions*/

void printnums() // To print the numbers with different types
{
    int a, w;
    int i = 1, fact = 1;

    printf("\n\nEnter The Value Of Terms:");
    scanf("%d", &a);

    int j = a;

    printf("Enter 1 To print number from 1 To nth terms\n");
    printf("Enter 2 For print numbers from the terms to 1\n");
    printf("Enter 3 For print even numbers from 1 to the term enterd\n");
    printf("Enter 4 For print odd numbers from 1 to the term you entered\n");
    printf("Enter 5 to get the factorial of nth term you entered:");

    scanf(" %d", &w);

    switch (w)
    {
    case 1:
        while (i <= a)
        {
            printf("%3d", i);
            i++;
        }
        break;

    case 2:
        do
        {
            printf("%3d", j);
            j--;
        } while (j >= 1);
        break;

    case 3:
        for (int k = 1; k <= a; k++)
        {
            if ((k % 2) == 0)
            {
                printf("%3d", k);
            }
        }
        break;

    case 4:
        for (int l = 1; l <= a; l++)
        {
            if ((l % 2) != 0)
            {
                printf("%3d", l);
            }
        }
        break;

    case 5:
        while (a > 1)
        {
            fact = fact * a;
            a--;
        }
        printf("\n\nThe value of factorial is %d", fact);
        break;

    default:
        printf("Choose form the numbers given in the instrictions!");
        break;
    }
    return;
}

void calculator() // This is the function to use the calculator
{
    int a, b;
    char w; // We will use the character calculator

    printf("Enter the first and 2nd number:");
    scanf("%d%d", &a, &b);

    printf("Press + for sum\n - for subtract\n * for multiplicatin\n / for division\n%% for remainder:\n");
    scanf(" %c", &w);

    switch (w)
    {
    case '+':
        printf("The sum of numbers %d and %d id %d", a, b, a + b);
        break;

    case '-':
        printf("The sub of numbers %d and %d is %d", a, b, a - b);
        break;

    case '*':
        printf("The product of numbers %d and %d is %d", a, b, a * b);
        break;

    case '/':
        if (b == 0)
        {
            printf("undefined!");
        }
        printf("The divison of %d and %d is %f", a, b, a / b);
        break;

    case '%':
        if (b == 0)
        {
            printf("undefined!");
        }
        printf("The remainder of %d and %d is %f", a, b, a % b);
        break;

    default:
        printf("Select form the given symbols!");
    }
    return;
}

void bill() // This is the function to calculate the electricity bill on the basis of hpow maany units are consumed
{
    int units;

    printf("How Many Units Are Comsumed?:");
    scanf("%d", &units);

    if (units < 100)
    {
        printf("Your Bill Is %f", 2.5 * units);
    }
    else if ((units > 100) && (units < 200))
    {
        printf("Your Bill Is %f", ((units * 3.5) - 250));
    }
    else if (units > 200)
    {
        printf("Your Bill Is %f", ((units * 4.5) - 600));
    }
    return;
}

void weekdays() // To print the weekdays corresponding to the user's input
{
    int a;

    printf("Enter The Number Between 1 To 7:");
    scanf(" %d", &a);

    switch (a)
    {
    case 1:
        printf("Sunday!");
        break;

    case 2:
        printf("Monday!");
        break;

    case 3:
        printf("Tuesday!");
        break;

    case 4:
        printf("Wednesday!");
        break;

    case 5:
        printf("Thursday!");
        break;

    case 6:
        printf("Friday!");
        break;

    case 7:
        printf("Saturaday!");
        break;

    default:
        printf("Enter A Num Between 1 To 7!");
        break;
    }
    return;
}

void checkweekdays() // To check if the weekday is weekend or the normal weekday corresponding to the users input
{
    int a;

    printf("Emter a number between 1 to 7:");
    scanf(" %d", &a);

    if ((a > 7) || (a < 1))
    {
        printf("Enter a num between 1 to 7!");
    }
    else if ((a == 1) || (a == 7))
    {
        printf("The Would Be A Weekend!");
    }
    else
        printf("The Day is A Normal Weekday!");

    return;
}

void grade() // To give grade to a student based on his marks
{
    int marks;

    printf("How many marks do you get out of 100?:");
    scanf("%d", &marks);

    if (marks > 100)
    {
        printf("Enter the marks from 100!");
    }
    else if (marks >= 90)
    {
        printf("You got Grade A!");
    }
    else if (marks >= 80)
    {
        printf("You gor Grade B!");
    }
    else if (marks >= 65)
    {
        printf("You got Grade C!");
    }
    else if (marks >= 50)
    {
        printf("You Got Grade D!");
    }
    else if (marks < 50)
    {
        printf("You're Failed!");
    }

    return;
}

void temp_units() // To convert the units of temarature
{
    float temp;
    char w, x, y, z;

    printf("\n\nWhta is the value of temparature?:\n");
    scanf("%f", &temp);

    printf("\n\nWhat is the current unit?\n\nselect c for celcius\nslect f fahrenheit\nslect k for kelvin:");
    scanf(" %c", &w);

    switch (w)
    {
    case 'c':
        printf("\n\nSelect a to convert in fahrenhite\nSelect b to convert in kelvin:");
        scanf(" %c", &x);

        switch (x)
        {
        case 'a':
            printf("\n\nThe value of temarature in fahrenhite if %f", (1.8 * temp) + 32);
            break;

        case 'b':
            printf("\n\nThe value of temparature in kelvin is %f", temp + 273.15);
            break;

        default:
            printf("Kindely Select from a and b!");
            break;
        }
        break;

    case 'f':
        printf("\n\nSelect a to convert in celcius\nSelect b to convert in kelvin:");
        scanf(" %c", &y);

        switch (y)
        {
        case 'a':
            printf("\n\nThe value of temparature in celcius is %f", (temp - 32) * 5.0 / 9.0);
            break;

        case 'b':
            printf("\n\nThe value of temparatyre in kelvin is %f", (temp + 459.67) * 5.0 / 9.0);
            break;

        default:
            printf("Slec from a and b!");
            break;
        }
        break;

    case 'k':
        printf("\n\nSelect a to convert in celcius\nSelect b to convert in fahrenheit:");
        scanf(" %c", &z);

        switch (z)
        {
        case 'a':
            printf("\n\nThe value of the temparature in celcius is %f", temp - 273.15);
            break;

        case 'b':
            printf("\n\nThe value of temparature in fahrenheit is %f", (temp * 1.8) - 459.67);
            break;

        default:
            printf("Kindly select from a and b!");
            break;
        }
        break;

    default:
        printf("Kindly select from c, f and k!");
        break;
    }

    return;
}

void greter() // To check which number is greter netween 3 nums
{
    int a, b, c;

    printf("\n\nEnter the 3 nums:");
    scanf(" %d%d%d", &a, &b, &c);

    if ((a > b) && (a > c))
    {
        printf("\n%d is largest!", a);
    }
    else if ((b > a) && (b > c))
    {
        printf("\n%d is largest!", b);
    }
    else
        printf("\n%d is largest!", c);

    return;
}

void addnums() // To get the sum of nth term
{
    int term, sum = 0;

    printf("\n\nWhat is value of term?:");
    scanf(" %d", &term);

    for (int i = 1; i <= term; i++)
    {
        sum = sum + i;
    }
    printf("\n\nThe sum of n nums is %d", sum);

    return;
}

void fibonccie() // To print fibonccie series upto nth term
{
    int n;
    long long a = 0, b = 1, sum;

    printf("\n\nat how many terms you want to print the fibonccie series?:");
    scanf(" %d", &n);

    for (int p = 1; p <= n; a = b, b = sum, p++)
    {
        sum = a + b;
        printf("%5lld", a);
    }
    return;
}

void prime_num() // To check the number weather it is a prime number OR not
{
    int num, count = 0;

    printf("\n\nEnter any number:");
    scanf(" %d", &num);

    for (int i = 1; i <= num; i++)
    {
        if ((num % i) == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("\n\nThe number is a prime number!");
    }
    else
        printf("\n\nThe number is not a prime number!");

    return;
}

void armstrong_num() // To check if a number id an armstrong number OR not
{
    int a, i = 1, sum = 0, origin;

    printf("Enter Any No Of 3 Digits:");
    scanf("%d", &a);

    origin = a;

    if ((a < 1000) && (a > 99))
    {
        while (i <= 3)
        {
            int rem = a % 10;
            sum += rem * rem * rem;
            a = (a / 10), i++;
        }
        if (sum == origin)
        {
            printf("\n\nhe No. Is An Armstrong No!\n");
        }
        else
            printf("\n\nThe No Is Not An Armstrong No!\n");
    }
    else
        printf("\n\nEnter A No. Of 3 Digits!");

    return;
}

void shapes() // To print different shapes using nesting of loops|
{
    int w, n;

    printf("\n\nSelect form 1 to 9 to print different patterns:");
    scanf(" %d", &w);

    switch (w)
    {
    case 1:
        printf("\n\nEnter The No. Of Rows:");
        scanf(" %d", &n);

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%3c", '*');
            }
            printf("\n");
        }
        break;

    case 2:
        printf("\n\nEnter The No. Of Rows:");
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%3d", i + j);
            }
            printf("\n");
        }
        break;

    case 3:
        printf("\n\nEnter The No. Of Rows:");
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if ((i + j) % 2 == 0)
                {
                    printf("%3d", 1);
                }
                else
                    printf("%3d", 0);
            }
            printf("\n");
        }
        break;

    case 4:
        printf("\n\nEnter The No. Of Rows:");
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            for (int j = n; j >= i; j--)
            {
                printf("%3c", '*');
            }
            printf("\n");
        }
        break;

    case 5:
        for (int i = 5; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%3d", i);
            }
            printf("\n");
        }
        break;

    case 6:
        for (int i = 5; i >= 1; i--)
        {
            for (int j = 0; j < i; j++)
            {
                printf("%3d", j + 1);
            }
            printf("\n");
        }
        break;

    case 7:
        for (int i = 6; i >= 1; i--)
        {
            for (int j = 1; j < i; j++)
            {
                printf("%3d", i - j);
            }
            printf("\n");
        }
        break;

    case 8:
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 5; j >= i; j--)
            {
                printf("%3d", i);
            }
            printf("\n");
        }
        break;

    default:
        printf("Enter the number between 1 to 9!");
        break;
    }

    return;
}

void area() // To calculate the area of different shapes
{
    int r, rad_cylinder, h;
    char w;
    printf("\n\nSelect the shape, enter a for circle and b for cylinder:");
    scanf(" %c", &w);

    switch (w)
    {
    case 'a':
        /*To calculate the area of the circle*/

        printf("\n\nEnter the value of radius:");
        scanf(" %d", &r);

        printf("\n\nThe area of the circle is %f", 3.14 * r * r);
        printf("\nAnd the circumference of the circle is %f\n", 2 * 3.14 * r); // To get the circumference of the circle
        break;

    case 'b':
        /*To calculate the area of the cylinder*/
        printf("\n\nEnter the value of the readius of cylinder:");
        scanf(" %d", &rad_cylinder);

        printf("\nEnter the hight of the cyinder:");
        scanf(" %d", &h);

        printf("\n\nThe volume of the cylinder is %f", 3.14 * rad_cylinder * rad_cylinder * h); // To calculate the volume of the cylinder

        printf("\nThe toal surface area of the cylinder is %f", (h + rad_cylinder) * 2 * 3.14 * rad_cylinder); // To calculate the total surface area of the cylinder
        break;

    default:
        printf("Kindly select from a and b!");
        break;
    }

    return;
}

void interest() // To calculate the simple and the compund interest
{
    int t, p, n, x;
    float r, si, ci, amount;

    printf("Enter the Principal Amount:\n");
    scanf("%d", &p);
    printf("Enter the Rate of Interest (in %%):\n");
    scanf("%f", &r);
    printf("Enter the Time Period (in years):\n");
    scanf("%d", &t);
    printf("\n\nWhat you want to calculate?\nPress a for simple interest and b for compund interest:");
    scanf(" %c", &x);

    switch (x)
    {
    case 'a':
        // Calculation of Simple Interest
        si = (p * r * t) / 100.0;

        printf("\n\nThe Simple Interest is: %.2f\n", si);

        printf("How many times is the rate compounded per year?:\n");
        scanf("%d", &n);
        break;

    case 'b':
        // Calculation of Compound Interest
        amount = p * pow(1 + (r / (100 * n)), n * t);
        ci = amount - p;

        printf("\n\nThe Compound Interest is: %.2f\n", ci);
        printf("\nThe Total Amount with Compound Interest is: %.2f\n", amount);
        break;

    default:
        printf("\n\nKindly select from a and b!");
        break;
    }

    return;
}

void area_heron() // To calculate the area of a triangle by using the heron's formula
{
    int a, b, c;
    float s;

    printf("\n\nEnter The Value Of Sides Of Triangle:\n");
    scanf("%d%d%d", &a, &b, &c);

    s = (a + b + c) / 2.0;

    printf("\n\nThe Area Of Triangle Is %f", sqrt((s) * (s - a) * (s - b) * (s - c)));

    return;
}

int main() // To take outcomes form the user defined functions
{
    /*The main function is for selecting that what user wants to perform*/
    int w;
    printf("Enter 1 For Print Numbers According To Your Choice");
    printf("\nEnter 2 For Use The Calculator");
    printf("\nEnter 3 to calculate the elctricity bill");
    printf("\nEnter 4 for print the weekdays corresponding to the users input");
    printf("\nEnter 5 to check weather a weekday is weekend OR a normal weekday?");
    printf("\nEnter 6 to check which grade is a student get");
    printf("\nEnter 7 to convert the temperature units");
    printf("\nEnter 8 to check the largest num among 3 nums");
    printf("\nEnter 9 to get the factorial of the nth num");
    printf("\nEnter 10 for calculate the sum of n numbers");
    printf("\nEnter 11 to print fibonccei series upto nth term");
    printf("\nEnter 12 to check a number weather it's a prime number OR not?");
    printf("\nEnter 13 to check a number weather it's an armstrong number OR not?");
    printf("\nEnter 14 to print different patterns and combinations using nesting of loop");
    printf("\nEnter 15 to calculate the parameters of different shapes");
    printf("\nEnter 16 to calculate the simple OR the compound interest");
    printf("\nEnter 17 to calculate the area of triangle by using Heron's formula:");

    scanf(" %d", &w);

    switch (w) // Here i used the switch statement to give options to user
    {
    case 1:
        printnums(); // Calling printnum() function
        break;

    case 2:
        calculator(); // Calling calculator() function
        break;

    case 3:
        bill(); // Calling bill() function
        break;

    case 4:
        weekdays(); // Calling weekdays() function
        break;

    case 5:
        checkweekdays(); // Calling checkweekdays() function
        break;

    case 6:
        grade(); // Calling grade() function
        break;

    case 7:
        temp_units(); // calling tem_units() function
        break;

    case 8:
        greter(); // calling greter() function
        break;

    case 9:
        printnums(); // calling printnums() function
        break;

    case 10:
        addnums(); // calling addnums() function
        break;

    case 11:
        fibonccie(); // calling fibonccie() function
        break;

    case 12:
        prime_num(); // calling prime_num() function
        break;

    case 13:
        armstrong_num(); // calling armstrong_num() function
        break;

    case 14:
        shapes(); // Calling shapes function
        break;

    case 15:
        area(); // calling area() function
        break;

    case 16:
        interest(); // Calling interest() function
        break;

    case 17:
        area_heron(); // Calling area_hero() function
        break;

    default:
        printf("\n\nKindly select options from 1 to 17.");
        break;
    }

    return 0;
}
