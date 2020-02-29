========================================================================================================================================
//This is the program for using const operator.
========================================================================================================================================
#include<iostream>
using namespace std;

const double price_per_room = 30.0;
const double tax_per_room = 0.06;


int main()
{
	int number_of_rooms;
	cout << "Enter the number of rooms: ";
	cin >> number_of_rooms;

	cout << "The price per room is:$ " << price_per_room << endl;
	double cost = number_of_rooms * price_per_room;
	cout << "The total price of room is:$ " << cost << endl;

	double total_tax = cost * tax_per_room;
	cout << "The tax is:$ " << total_tax << endl;

	double total_cost = cost + total_tax;
	cout << "The total expense is:$ " << total_cost << endl;

	return 0;
}

========================================================================================================================================
//This is aprogram for array declaration and initialization.
========================================================================================================================================
#include<iostream>
using namespace std;

int main()
{
	//This is the program for declaring and initializing an array
	int test_scores[] = { 10,20,30,40,50 };
	cout << "Enter the marks that Roll Number 0 expected: ";
	cin >> test_scores[0];

	//Setting the value of marks scored by Roll number 0 to 35
	test_scores[0] = 35;
	cout << "The marks scored by Roll Number 0 is: " << test_scores[0] << endl;

}

========================================================================================================================================
//This is a program for initial and declaration of vectors.
========================================================================================================================================
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <char> vowels{ 'a','e','i','o','u' };
	vector <int> test_scores{ 10,20,30,40 };
	vector <double> days_in_year(365, 90);

	//array syntax
	cout << days_in_year[9] << endl;

	//vector syntax
	cout << test_scores.at(0) << endl;

	//use of push_back command
	test_scores.push_back(80);
	cout << test_scores[4] << endl;

	//use of size() command
	cout << "The size of test_score vector is: " << test_scores.size() << endl;


}

========================================================================================================================================
//This is a program to demonstrate the use of .push_back and .at() commmand.
========================================================================================================================================

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> vector1;
	vector <int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);

	cout << "The element at index 0 is: " << vector1.at(0) << endl;
	cout << "The element at index 1 is: " << vector1.at(1) << endl;
	cout << "The total elements in vector1 are: " << vector1.size() << endl;

	vector2.push_back(100);
	vector2.push_back(200);

	cout << "The element at index 0 is: " << vector2.at(0) << endl;
	cout << "The element at index 1 is: " << vector2.at(1) << endl;
	cout << "The total elements in vector2 are: " << vector2.size() << endl;

	vector <vector<int>> vector_2d;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	cout << "The elements in vector_2d at index(0,0) are: " << vector_2d.at(0).at(0) << endl;
	cout << "The elements in vector_2d at index(0,1) are: " << vector_2d.at(0).at(1) << endl;
	cout << "The elements in vector_2d at index(1,0) are: " << vector_2d.at(1).at(0) << endl;
	cout << "The elements in vector_2d at index(1,1) are: " << vector_2d.at(1).at(1) << endl;

	vector1.at(0) = 1000;

	cout << "The elements of vector 1 now are: " << vector1.at(0) << endl;
	cout << "The elements of vector 1 now are: " << vector1.at(1) << endl;

	return 0;

}

========================================================================================================================================
//This program demonstrates the use of increment/decrement operator
========================================================================================================================================
#include<iostream>
using namespace std;

int main()
{
	int counter = 10;
	int result = 0;

	cout << "Counter's value is: " << counter << endl;
	result = ++counter + 10;
	//The above result can be wriiten as;
	//counter=counter+1;pre increment of counter by 1
	//result=counter+10; the counter now contains value 11

	cout << "The value of result is: " << result;
	return 0;
}

========================================================================================================================================
//This Program demonstrates the use of static_case<datatype>(Variable_name) command.
========================================================================================================================================

#include<iostream>
using namespace std;

int main()
{
	const int count = 3;
	int num1, num2, num3;
	int sum;

	cout << "Enter three integers seperated by spaces";
	cin >> num1 >> num2 >> num3;

	sum = num1 + num2 + num3;
	cout << "The sum of numbers is: " << sum << endl;

	double average;
	average = static_cast<double>(sum) / count;

	cout << "The average of numbers is: " << average << endl;

}

========================================================================================================================================
//This program demonstrates the use of boolalpha command.
========================================================================================================================================
#include<iostream>
using namespace std;

int main()
{
	const int lower = 10;
	const int upper = 20;
	int number;
	cout << boolalpha;

	cout << "Enter a number between: " << lower << "and " << upper;
	cin >> number;

	bool in_bounds = false;

	in_bounds = (number < lower || number >= upper);

	cout << "The number is outside " << lower << "and " << upper << ":" << in_bounds << endl;


}

========================================================================================================================================
//This is a program for switch case statements.
========================================================================================================================================
#include<iostream>
using namespace std;

int main()
{
	char result;
	cout << "What is your expected grade in ADS between a to e: ";
	cin >> result;

	switch (result)
	{
	case 'a':
	case 'A':
		cout << "Great now you need to focus on your studies to score this grade" << endl;
		break;

	case 'b':
	case 'B':
		cout << "Okay but I guess you need to give some more efforts: " << endl;
		break;

	case 'c':
	case 'C':
		cout << "Okay!! Focus on studies from now" << endl;
		break;

	case 'd':
	case 'D':
		cout << "Expect More from life" << endl;
		break;

	case 'e':
	case 'E':
		cout << "If you can't score more, atleast you can expect lol" << endl;
		break;

	default:
		cout << "You failed here also!!";

	}

	return 0;
}

==========================================================================================================================================
//This is a program for Ternary operators.
==========================================================================================================================================
#include<iostream>
using namespace std;

int main()
{
	int score;
	cout << "Enter the score: ";
	cin >> score;
	cout << ((score > 90) ? "Excellent Score" : "Not bad") << endl;
}

=========================================================================================================================================== 
//This is a program for Loop with vectors
=========================================================================================================================================== 
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> nums{ 10,20,30,40,50 };

	for (unsigned int i = 0; i < nums.size(); i++)
		cout << nums.at(i) << endl;
}

============================================================================================================================================
//This is a code for range based for loop
============================================================================================================================================

#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main()
{
	vector<double>temperature{ 20.33,45.66,65.66 };
	double average{};
	double sum{};
	for (auto temp : temperature)
	{
		sum += temp;
		cout << "The sum of temperatures is: " << sum << endl;
	}

	average = sum / temperature.size();
	cout << fixed << setprecision(1);
	cout << "The average is: " << average << endl;

}

===============================================================================================================================================
//This is a program for while loop
===============================================================================================================================================

#include<iostream>
using namespace std;
int i = 0;

int main()
{

	while (i <= 10)
	{
		if (i % 2 == 0)
		{
			cout <<i<< endl; 
		}

		i++; 
	}

}

