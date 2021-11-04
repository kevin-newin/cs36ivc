#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

/*
	This program will get and calculate employee data such as name, their department, current yearly income, and raise percentage.
	Written by Kevin Nguyen
	9/2/2021
*/

int main()
{
	char name[20];
	char department[20];
	float cyi, raise, raiseAmt, newPay, totalCyi = 0, totalRaiseAmt = 0, totalNewPay = 0;

	//Employee 1
	printf("Please enter the employee name:");
	gets_s(name);
	printf("Please enter the employee's department:");
	gets_s(department);
	printf("Please enter the employee's current yearly income:");
	scanf("%f", &cyi);
	if (cyi <= 70000)
	{
		raise = 8.6;
	}
	else if (cyi >= 70000.1 && cyi <= 80000)
	{
		raise = 7.4;
	}
	else if (cyi >= 80000.1 && cyi <= 90000)
	{
		raise = 5.8;
	}
	else if (cyi >= 90000.1)
	{
		raise = 4.9;
	}

	raiseAmt = (cyi * raise) / 100;
	newPay = cyi + raiseAmt;
	totalCyi = totalCyi + cyi;
	totalRaiseAmt = totalRaiseAmt + raiseAmt;
	totalNewPay = totalNewPay + newPay;

	printf("\nEmployee %s in department of %s earns $%0.2f per year with a raise percentage of %0.1f%%. \nThis employee now earns $%0.2f more for a total of $%0.2f", name, department, cyi, raise, raiseAmt, newPay);

	//Employee 2
	getchar();
	printf("\n\nPlease enter the employee name:");
	gets_s(name);
	printf("Please enter the employee's department:");
	gets_s(department);
	printf("Please enter the employee's current yearly income:");
	scanf("%f", &cyi);
	if (cyi <= 70000)
	{
		raise = 8.6;
	}
	else if (cyi >= 70000.1 && cyi <= 80000)
	{
		raise = 7.4;
	}
	else if (cyi >= 80000.1 && cyi <= 90000)
	{
		raise = 5.8;
	}
	else if (cyi >= 90000.1)
	{
		raise = 4.9;
	}

	raiseAmt = (cyi * raise) / 100;
	newPay = cyi + raiseAmt;
	totalCyi = totalCyi + cyi;
	totalRaiseAmt = totalRaiseAmt + raiseAmt;
	totalNewPay = totalNewPay + newPay;

	printf("\nEmployee %s in department of %s earns $%0.2f per year with a raise percentage of %0.1f%%. \nThis employee now earns $%0.2f more for a total of $%0.2f", name, department, cyi, raise, raiseAmt, newPay);

	//Employee 3
	getchar();
	printf("\n\nPlease enter the employee name:");
	gets_s(name);
	printf("Please enter the employee's department:");
	gets_s(department);
	printf("Please enter the employee's current yearly income:");
	scanf("%f", &cyi);
	if (cyi <= 70000)
	{
		raise = 8.6;
	}
	else if (cyi >= 70000.1 && cyi <= 80000)
	{
		raise = 7.4;
	}
	else if (cyi >= 80000.1 && cyi <= 90000)
	{
		raise = 5.8;
	}
	else if (cyi >= 90000.1)
	{
		raise = 4.9;
	}

	raiseAmt = (cyi * raise) / 100;
	newPay = cyi + raiseAmt;
	totalCyi = totalCyi + cyi;
	totalRaiseAmt = totalRaiseAmt + raiseAmt;
	totalNewPay = totalNewPay + newPay;

	printf("\nEmployee %s in department of %s earns $%0.2f per year with a raise percentage of %0.1f%%. \nThis employee now earns $%0.2f more for a total of $%0.2f", name, department, cyi, raise, raiseAmt, newPay);

	//Employee 4
	getchar();
	printf("\n\nPlease enter the employee name:");
	gets_s(name);
	printf("Please enter the employee's department:");
	gets_s(department);
	printf("Please enter the employee's current yearly income:");
	scanf("%f", &cyi);
	if (cyi <= 70000)
	{
		raise = 8.6;
	}
	else if (cyi >= 70000.1 && cyi <= 80000)
	{
		raise = 7.4;
	}
	else if (cyi >= 80000.1 && cyi <= 90000)
	{
		raise = 5.8;
	}
	else if (cyi >= 90000.1)
	{
		raise = 4.9;
	}

	raiseAmt = (cyi * raise) / 100;
	newPay = cyi + raiseAmt;
	totalCyi = totalCyi + cyi;
	totalRaiseAmt = totalRaiseAmt + raiseAmt;
	totalNewPay = totalNewPay + newPay;

	printf("\nEmployee %s in department of %s earns $%0.2f per year with a raise percentage of %0.1f%%. \nThis employee now earns $%0.2f more for a total of $%0.2f", name, department, cyi, raise, raiseAmt, newPay);

	//Employee 5
	getchar();
	printf("\n\nPlease enter the employee name:");
	gets_s(name);
	printf("Please enter the employee's department:");
	gets_s(department);
	printf("Please enter the employee's current yearly income:");
	scanf("%f", &cyi);
	if (cyi <= 70000)
	{
		raise = 8.6;
	}
	else if (cyi >= 70000.1 && cyi <= 80000)
	{
		raise = 7.4;
	}
	else if (cyi >= 80000.1 && cyi <= 90000)
	{
		raise = 5.8;
	}
	else if (cyi >= 90000.1)
	{
		raise = 4.9;
	}

	raiseAmt = (cyi * raise) / 100;
	newPay = cyi + raiseAmt;
	totalCyi = totalCyi + cyi;
	totalRaiseAmt = totalRaiseAmt + raiseAmt;
	totalNewPay = totalNewPay + newPay;

	printf("\nEmployee %s in department of %s earns $%0.2f per year with a raise percentage of %0.1f%%. \nThis employee now earns $%0.2f more for a total of $%0.2f", name, department, cyi, raise, raiseAmt, newPay);

	printf("\n\n\nCalculated totals\n---------------------------\n");
	printf("Total Current Yearly Income: $%0.2f\nTotal Raise Amount: $%0.2f\nTotal New Pay Amount:$%0.2f\n", totalCyi, totalRaiseAmt, totalNewPay);

	system("PAUSE");
}
/*
Please enter the employee name:Mike Ohtani
Please enter the employee's department:Accounting
Please enter the employee's current yearly income:66111.54

Employee Mike Ohtani in department of Accounting earns $66111.54 per year with a raise percentage of 8.6%.
This employee now earns $5685.59 more for a total of $71797.13

Please enter the employee name:Shohei Trout
Please enter the employee's department:Marketing
Please enter the employee's current yearly income:89224.17

Employee Shohei Trout in department of Marketing earns $89224.17 per year with a raise percentage of 5.8%.
This employee now earns $5175.00 more for a total of $94399.17

Please enter the employee name:Jared Rendon
Please enter the employee's department:Management
Please enter the employee's current yearly income:75123.25

Employee Jared Rendon in department of Management earns $75123.25 per year with a raise percentage of 7.4%.
This employee now earns $5559.12 more for a total of $80682.37

Please enter the employee name:Anthony Walsh
Please enter the employee's department:Sales
Please enter the employee's current yearly income:69644.44

Employee Anthony Walsh in department of Sales earns $69644.44 per year with a raise percentage of 8.6%.
This employee now earns $5989.42 more for a total of $75633.86

Please enter the employee name:Justin Fletcher
Please enter the employee's department:Management
Please enter the employee's current yearly income:96222.77

Employee Justin Fletcher in department of Management earns $96222.77 per year with a raise percentage of 4.9%.
This employee now earns $4714.92 more for a total of $100937.69


Calculated totals
---------------------------
Total Current Yearly Income: $396326.19
Total Raise Amount: $27124.05
Total New Pay Amount:$423450.25
Press any key to continue . . .
	*/