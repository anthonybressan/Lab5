//Author: Anthony Bressan
//CPSC 121 Lab 5
//03/5/18

#include "stdafx.h"
using namespace std;
#include <iostream>

//Adds up numbers in the array
void Sum(int number[], int SIZE)
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum = number[i] + sum;	
	}
	cout << "Total: " << sum << endl;
}

//Calculates the mean of the array
void Mean(int number[], int SIZE)
{
	double mean = 0.00;
	for (int i = 0; i < SIZE; i++)
	{
		mean = number[i] + mean;
	}
	mean = mean / SIZE;
	cout << "Mean: " << mean << endl;
}

//Displays numbers in the array
void Display(int number[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << number[i] << " ";
	}
	cout << "\n";
}

//Sequences the numbers in the array 
void Sequencing(int number[], int SIZE)
{
	int sequence = 0;
	int j = 1;
	for (int i = 0; i < SIZE -  1; i++)
	{
		sequence = number[j] - number[i];
		cout << sequence << " ";
		j++;
	}
	cout << "\n";
}

//Search for user inputted number in the array
bool Search(int number[], int SIZE)
{
	int num = 0;
	bool search;
	cout << "Enter a number to look for" << endl;
	cin >> num;
	for (int i = 0; i < SIZE; i++)
	{
		if (num == number[i])
		{
			search = true;
			return search;
		}
		else
		{
			search = false;
		}
	}
	return search;
}


int main()
{
	int test;
	const int SIZE = 5;
	int number[SIZE];
	bool searcher;
	char choice = 'f';
	for (auto &SIZE : number)
	{
		cout << "Enter an integer value: ";
		cin >> SIZE;
	}

	//If user inputs g the program closes
	while (choice!= 'g')
	{
		//Displays menu
		cout << "----------------------------\n"
			<< "Menu\n"
			<< "a) Display sum of array\n"
			<< "b) Display mean of array\n"
			<< "c) Display array\n"
			<< "d) Sequence the array\n"
			<< "e) Search for a number in array\n"
			<< "f) Edit the array\n"
			<< "g) Exit\n"
			<< "--------------------------------\n";
		cin >> choice;

		//Allows user to change numbers in the array
		if (choice == 'f')
		{
			for (auto &SIZE : number)
			{
				cout << "Enter an integer value: ";
				cin >> SIZE;
			}
		}

		//Runs Sum function
		if (choice == 'a')
		{
			Sum(number, SIZE);
		}

		//Runs Mean function
		if (choice == 'b')
		{
			Mean(number, SIZE);
		}

		//Runs Display function
		if (choice == 'c')
		{
			Display(number, SIZE);
		}

		//Runs Sequencing funtion
		if (choice == 'd')
		{
			Sequencing(number, SIZE);
		}

		//Runs Search function
		if (choice == 'e')
		{
			searcher = Search(number, SIZE);
			if (searcher == 1)
			{
				cout << "Number found\n";
			}
			else
			{
				cout << "Number not found\n";
			}

		}
	}
    return 0;
}

