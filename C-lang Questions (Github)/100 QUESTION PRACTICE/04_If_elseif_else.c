
/* Q31. Leap Year Checker */

#include <stdio.h>

int main()
{
    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    if (year <= 0)
        printf("Invalid Year");
    else if (year % 400 == 0 ||
             (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year");
    else
        printf("Not a Leap Year");

    return 0;
}

/* Q32. Valid Triangle Checker */

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the three angles of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 &&
        a + b + c == 180)
        printf("Valid Triangle");
    else
        printf("Invalid Triangle");

    return 0;
}

/* Q33. Triangle Type */

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a)
        printf("Invalid Triangle");
    else if (a == b && b == c)
        printf("Equilateral Triangle");
    else if (a == b || b == c || a == c)
        printf("Isosceles Triangle");
    else
        printf("Scalene Triangle");

    return 0;
}

/* Q34. Electricity Bill Calculator */

#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if (units < 0)
        printf("Invalid Units");
    else if (units <= 100)
        bill = units * 2;
    else if (units <= 200)
        bill = 200 + (units - 100) * 3;
    else
        bill = 500 + (units - 200) * 5;

    if (units >= 0)
        printf("Total Electricity Bill = Rs. %.2f", bill);

    return 0;
}

/* Q35. ATM Withdrawal */

#include <stdio.h>

int main()
{
    int balance, amount;

    printf("Enter your account balance: ");
    scanf("%d", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    if (balance < 0 || amount <= 0)
        printf("Invalid Input");
    else if (amount % 100 != 0)
        printf("Amount must be a multiple of 100");
    else if (amount > balance)
        printf("Insufficient Balance");
    else
        printf("Withdrawal Successful");

    return 0;
}

/* Q36. ATM Withdrawal Check */
#include <stdio.h>
int main()
{
    int balance, amount;
    printf("Enter balance: ");
    scanf("%d", &balance);
    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    if (balance < 0 || amount <= 0 || amount % 100 != 0)
        printf("Invalid input");
    else if (amount > balance)
        printf("Insufficient balance");
    else
        printf("Remaining balance = Rs. %d", balance - amount);

    return 0;
}

/* Q37. Grocery Bill Discount */
#include <stdio.h>
int main()
{
    float bill;
    printf("Enter bill amount: ");
    scanf("%f", &bill);

    if (bill < 0)
        printf("Invalid amount");
    else if (bill >= 1000)
        printf("Final bill = Rs. %.2f", bill * 0.95);
    else
        printf("Final bill = Rs. %.2f", bill);

    return 0;
}

/* Q38. Online Order Delivery Fee */
#include <stdio.h>
int main()
{
    float amount;
    printf("Enter order amount: ");
    scanf("%f", &amount);

    if (amount < 0)
        printf("Invalid amount");
    else if (amount >= 500)
        printf("Free delivery");
    else
        printf("Total bill = Rs. %.2f", amount + 50);

    return 0;
}

/* Q39. Student Pass or Fail */
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter marks in three subjects: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a < 0 || a > 100 || b < 0 || b > 100 || c < 0 || c > 100)
        printf("Invalid marks");
    else if (a >= 33 && b >= 33 && c >= 33)
        printf("Pass");
    else
        printf("Fail");

    return 0;
}

/* Q40. Bus Fare Calculator */
#include <stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 0)
        printf("Invalid age");
    else if (age < 5)
        printf("Fare = Rs. 0");
    else if (age <= 17)
        printf("Fare = Rs. 20");
    else
        printf("Fare = Rs. 40");

    return 0;
}

/* Q41. Employee Overtime Pay */
#include <stdio.h>
int main()
{
    int hours;
    printf("Enter working hours: ");
    scanf("%d", &hours);

    if (hours < 0)
        printf("Invalid hours");
    else if (hours <= 8)
        printf("No overtime pay");
    else
        printf("Overtime pay = Rs. %d", (hours - 8) * 150);

    return 0;
}

/* Q42. Mobile Recharge Bonus */
#include <stdio.h>
int main()
{
    int amount;
    printf("Enter recharge amount: ");
    scanf("%d", &amount);

    if (amount < 0)
        printf("Invalid amount");
    else if (amount >= 299)
        printf("2 GB bonus data");
    else
        printf("No bonus data");

    return 0;
}

/* Q43. Water Usage Bill */
#include <stdio.h>
int main()
{
    int units, bill;
    printf("Enter water units: ");
    scanf("%d", &units);

    if (units < 0)
        printf("Invalid units");
    else if (units <= 100)
        printf("Bill = Rs. %d", units * 5);
    else
    {
        bill = 500 + (units - 100) * 8;
        printf("Bill = Rs. %d", bill);
    }

    return 0;
}

/* Q44. Parking Fee Calculator */
#include <stdio.h>
int main()
{
    int hours, fee;
    printf("Enter parking hours: ");
    scanf("%d", &hours);

    if (hours <= 0)
        printf("Invalid duration");
    else if (hours <= 2)
        printf("Fee = Rs. 30");
    else
    {
        fee = 30 + (hours - 2) * 20;
        printf("Fee = Rs. %d", fee);
    }

    return 0;
}

/* Q45. Electricity Bill */
#include <stdio.h>
int main()
{
    int units, bill;
    printf("Enter electricity units: ");
    scanf("%d", &units);

    if (units < 0)
        printf("Invalid units");
    else if (units <= 100)
        printf("Bill = Rs. %d", units * 4);
    else
    {
        bill = 400 + (units - 100) * 6;
        printf("Bill = Rs. %d", bill);
    }

    return 0;
}

/* Q46. Bank Minimum Balance */
#include <stdio.h>
int main()
{
    float balance;
    printf("Enter account balance: ");
    scanf("%f", &balance);

    if (balance < 0)
        printf("Invalid balance");
    else if (balance >= 1000)
        printf("Minimum balance maintained");
    else
        printf("Maintain Rs. 1000 minimum balance");

    return 0;
}

/* Q47. Shopping Coupon */
#include <stdio.h>
int main()
{
    float bill;
    printf("Enter shopping bill: ");
    scanf("%f", &bill);

    if (bill < 0)
        printf("Invalid amount");
    else if (bill >= 2000)
        printf("Final bill = Rs. %.2f", bill - 200);
    else
        printf("Coupon not applicable");

    return 0;
}

/* Q48. Daily Step Goal */
#include <stdio.h>
int main()
{
    int steps;
    printf("Enter today's steps: ");
    scanf("%d", &steps);

    if (steps < 0)
        printf("Invalid input");
    else if (steps >= 8000)
        printf("Daily goal completed");
    else
        printf("Steps remaining = %d", 8000 - steps);

    return 0;
}

/* Q49. Fuel Cost Calculator */
#include <stdio.h>
int main()
{
    float litres, price;
    printf("Enter litres of fuel: ");
    scanf("%f", &litres);
    printf("Enter price per litre: ");
    scanf("%f", &price);

    if (litres < 0 || price < 0)
        printf("Invalid input");
    else
        printf("Total cost = Rs. %.2f", litres * price);

    return 0;
}

/* Q50. Train Ticket Concession */
#include <stdio.h>
int main()
{
    int age;
    printf("Enter passenger age: ");
    scanf("%d", &age);

    if (age < 0)
        printf("Invalid age");
    else if (age >= 60)
        printf("Eligible for concession");
    else
        printf("Not eligible for concession");

    return 0;
}

/* Q51. Internet Data Limit */
#include <stdio.h>
int main()
{
    float used;
    printf("Enter data used in GB: ");
    scanf("%f", &used);

    if (used < 0)
        printf("Invalid usage");
    else if (used >= 2)
        printf("Daily data limit reached");
    else
        printf("Remaining data = %.2f GB", 2 - used);

    return 0;
}

/* Q52. Parcel Weight Charge */
#include <stdio.h>
int main()
{
    int kg, charge;
    printf("Enter parcel weight in kg: ");
    scanf("%d", &kg);

    if (kg <= 0)
        printf("Invalid weight");
    else
    {
        charge = 50 + (kg - 1) * 20;
        printf("Parcel charge = Rs. %d", charge);
    }

    return 0;
}

/* Q53. Medicine Reminder */
#include <stdio.h>
int main()
{
    int taken;
    printf("Dose taken? (1 = Yes, 0 = No): ");
    scanf("%d", &taken);

    if (taken == 1)
        printf("Dose marked as taken");
    else if (taken == 0)
        printf("Reminder: Take your prescribed dose");
    else
        printf("Invalid choice");

    return 0;
}

/* Q54. Restaurant Service Charge */
#include <stdio.h>
int main()
{
    float bill;
    printf("Enter food bill: ");
    scanf("%f", &bill);

    if (bill < 0)
        printf("Invalid bill");
    else
        printf("Total bill = Rs. %.2f", bill * 1.05);

    return 0;
}

/* Q55. Delivery Rider Incentive */
#include <stdio.h>
int main()
{
    int deliveries;
    printf("Enter completed deliveries: ");
    scanf("%d", &deliveries);

    if (deliveries < 0)
        printf("Invalid input");
    else if (deliveries >= 10)
        printf("Incentive = Rs. 300");
    else
        printf("No incentive");

    return 0;
}

/* Q56. Shop Stock Checker */
#include <stdio.h>
int main()
{
    int stock, order;
    printf("Enter available stock: ");
    scanf("%d", &stock);
    printf("Enter order quantity: ");
    scanf("%d", &order);

    if (stock < 0 || order <= 0)
        printf("Invalid input");
    else if (order <= stock)
        printf("Remaining stock = %d", stock - order);
    else
        printf("Insufficient stock");

    return 0;
}

/* Q57. Room Temperature Alert */
#include <stdio.h>
int main()
{
    float temp;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);

    if (temp < 18)
        printf("Cold");
    else if (temp <= 30)
        printf("Comfortable");
    else
        printf("Hot");

    return 0;
}

/* Q58. Cab Fare Calculator */
#include <stdio.h>
int main()
{
    float km;
    printf("Enter distance in km: ");
    scanf("%f", &km);

    if (km <= 0)
        printf("Invalid distance");
    else
        printf("Cab fare = Rs. %.2f", 50 + km * 12);

    return 0;
}

/* Q59. Library Late Fine */
#include <stdio.h>
int main()
{
    int days, fine;
    printf("Enter late days: ");
    scanf("%d", &days);

    if (days < 0)
        printf("Invalid days");
    else if (days <= 5)
        printf("Fine = Rs. 0");
    else if (days <= 10)
        printf("Fine = Rs. %d", (days - 5) * 2);
    else
    {
        fine = 10 + (days - 10) * 5;
        printf("Fine = Rs. %d", fine);
    }

    return 0;
}

/* Q60. Employee Attendance */
#include <stdio.h>
int main()
{
    int days;
    printf("Enter present days out of 30: ");
    scanf("%d", &days);

    if (days < 0 || days > 30)
        printf("Invalid attendance");
    else if (days >= 24)
        printf("Attendance requirement met");
    else
        printf("Attendance requirement not met");

    return 0;
}

/* Q61. Shopping Bag Charge */
#include <stdio.h>
int main()
{
    int bags;
    printf("Enter number of bags: ");
    scanf("%d", &bags);

    if (bags < 0)
        printf("Invalid number");
    else
        printf("Bag charge = Rs. %d", bags * 5);

    return 0;
}

/* Q62. Monthly Savings Goal */
#include <stdio.h>
int main()
{
    int savings;
    printf("Enter monthly savings: ");
    scanf("%d", &savings);

    if (savings < 0)
        printf("Invalid amount");
    else if (savings >= 5000)
        printf("Goal met. Extra = Rs. %d", savings - 5000);
    else
        printf("Still needed = Rs. %d", 5000 - savings);

    return 0;
}
