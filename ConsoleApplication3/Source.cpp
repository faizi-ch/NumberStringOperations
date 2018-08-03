#include <stdlib.h>
#include <iostream>
#include <stdio.h>
using namespace std;
void findPrime();
void countDigits();
void reverseNumber();
void sort_ascending();
void change_case();


void main()
{
	//sort_ascending();
	change_case();
	cout << endl;
	system("pause");
}

void findPrime()
{
	int n1, n2, i, j, flag;
	printf("Enter two numbers(intervals): ");
	scanf_s("%d %d", &n1, &n2);
	printf("Prime numbers between %d and %d are: ", n1, n2);
	for (i = n1 + 1; i < n2; ++i)
	{
		flag = 0;
		for (j = 2; j <= i / 2; ++j)
		{
			if (i%j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			printf("%d ", i);
	}
}
void countDigits()
{
	int n, count = 0;
	printf("Enter an integer: ");
	scanf_s("%d", &n);
	while (n != 0)
	{
		n /= 10;             /* n=n/10 */
		++count;
	}
	printf("Number of digits: %d", count);
}
void reverseNumber()
{
	int n, reverse = 0, rem;
	printf("Enter an integer: ");
	scanf_s("%d", &n);
	while (n != 0)
	{
		rem = n % 10;
		reverse = reverse * 10 + rem;
		n /= 10;
	}
	printf("Reversed Number = %d", reverse);
}
void sort_ascending()
{
	int num[10] = { 3,6,2,6,4,9,12,0,45,14 };
	int temp[10];
	for (int i = 0; i < 10;i++)
	{
		for (int j = 0; j < 10;j++)
		{
			if (num[i]<num[j])
			{
				temp[i] = num[i];
				num[i] = num[j];
				num[j] = temp[i];
			}
		}
	}
	cout << "Sorted array: ";
	for (int k = 0; k < 10;k++)
	{
		cout << num[k]<<" ";
	}
}
void change_case()
{
	char s[] = "FaiZi";

	for (int i = 0; i < 5;i++)
	{
		if (s[i]>=65 && s[i]<=90)
		{
			s[i] = s[i] + 32;
		}
		else if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	cout << "Case Inverted string:" << s;
}
