================================================================================================================================================
//This is the program for using const operator.
================================================================================================================================================
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

================================================================================================================================================
//This is aprogram for array declaration and initialization.
================================================================================================================================================
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

================================================================================================================================================
//This is a program for initial and declaration of vectors.
================================================================================================================================================
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

================================================================================================================================================
//This is a program to demonstrate the use of .push_back and .at() commmand.
================================================================================================================================================

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

================================================================================================================================================
//This program demonstrates the use of increment/decrement operator
================================================================================================================================================
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

================================================================================================================================================
//This Program demonstrates the use of static_case<datatype>(Variable_name) command.
================================================================================================================================================

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

================================================================================================================================================
//This program demonstrates the use of boolalpha command.
================================================================================================================================================
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

================================================================================================================================================
//This is a program for switch case statements.
================================================================================================================================================
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

================================================================================================================================================
//This is a program for Ternary operators.
================================================================================================================================================
#include<iostream>
using namespace std;

int main()
{
	int score;
	cout << "Enter the score: ";
	cin >> score;
	cout << ((score > 90) ? "Excellent Score" : "Not bad") << endl;
}

================================================================================================================================================
//This is a program for Loop with vectors
================================================================================================================================================
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> nums{ 10,20,30,40,50 };

	for (unsigned int i = 0; i < nums.size(); i++)
		cout << nums.at(i) << endl;
}

================================================================================================================================================
//This is a code for range based for loop
================================================================================================================================================

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

================================================================================================================================================
//This is a program for while loop
================================================================================================================================================

#include<iostream>
using namespace std;
int i = 0;

int main()
{

	while (i <= 10)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
		}

		i++;
	}

}

================================================================================================================================================
//This is a code for displaying Histogram
================================================================================================================================================
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int no_of_days{ 0 };

	cout << "Enter the no. of days you want the data for: ";
	cin >> no_of_days;

	vector <int> logged_in{ 0 };

	for (int i{ 1 }; i <= no_of_days; i++)
	{
		int day;
		cout << "The number of times you've logged in on " << i << ":";
		cin >> day;
		logged_in.push_back(day);
	}

	cout << "The Histogram for your time period is: " << endl;

	for (auto val : logged_in)
	{
		for (int i{ 1 }; i <= val; i++)
		{
			cout << "-";
		}
		cout << endl;
	}

	cout << endl;
	return 0;

}

================================================================================================================================================
//This program demonstrates the use of c style strings.
================================================================================================================================================
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main()
{
	char first_name[20];
	char last_name[20];
	char full_name[50];
	char temp[50];

	cout << "Please insert your first name: ";
	cin >> first_name;

	cout << "Please insert your last name: ";
	cin >> last_name;

	cout << "Hello" << first_name << "your name has " << strlen(first_name) << "characters" << endl;
	cout << "Hello" << last_name << "your name has " << strlen(last_name) << "characters" << endl;

}

================================================================================================================================================
//This is a program for .find () function in string
================================================================================================================================================
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1 = "The word to find is boo";

	string word;
	cout << "Enter the word you want to find: ";
	cin >> word;

	int position = s1.find(word);

	if (position != string::npos)
		cout << "Word found at position: " << position << endl;
	else
	{
		cout << "Sorry word not foound" << endl;

	}


}

================================================================================================================================================
//This is a program for pointers
================================================================================================================================================

#include<iostream>
using namespace std;

int main()
{
	int scores[] = { 10,20,30,40,-1 };
	int* ptr_to_scores(scores);

	while (*ptr_to_scores != -1)
	{
		cout << *ptr_to_scores << endl;
		*ptr_to_scores++;
	}

}

================================================================================================================================================
//This is a program for classes and objects
================================================================================================================================================

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Player
{
public:
	string name;
	int health;
	int xp;

	void talk(string text_to_say)
	{
		cout << name  << " says " << text_to_say << endl;
	}
};



int main()
{
	Player Player1;
	Player Player2;

	Player1.name = "RohitRaider";
	Player1.health = 100;
	Player1.xp = 34;

	cout << "========================================" << endl;
	cout << "The Name of player is: " << Player1.name << endl;
	cout << "The Health of player is: " << Player1.health << endl;
	cout << "The XP of player is: " << Player1.xp << endl;
	Player1.talk("I'll Kill You!!");
	cout << "========================================" << endl;

	Player* enemy = new Player;
	(*enemy).name = "Anshuman";
	enemy->health = 100;
	enemy->xp = 50;

	cout << "========================================" << endl;
	cout << "The Name of enemy is: " << (*enemy).name << endl;
	cout << "The Health of enemy is: " << enemy->health << endl;
	cout << "The XP of enemy is: " << enemy->xp << endl;
	enemy->talk("Daddy's Home Boy!!");
	cout << "========================================" << endl;

}

================================================================================================================================================
//This is a program to demonstrate Public inheritance from a base class Account to a derived class Savings_account
================================================================================================================================================
#include<iostream>
#include<string>
using namespace std;

class Account
{
public:
	double balance;
	string name;
	void deposit(double amount);
	void withdraw(double amount);
	Account();
	~Account();
};

Account::Account()
{
	balance = 0;
	name = "An account";
	cout << "This ia constructor call" << endl;

}

Account::~Account()
{
	cout << "This is a destructor call" << endl;
}

void Account::deposit(double amount)
{
	cout << "Account deposit called with " << amount << endl;

}

void Account::withdraw(double amount)
{
	cout << "Account withdraw called with " << amount << endl;
}


class Savings_account :public Account
{
public:
	double intrest_rate;
	Savings_account();
	~Savings_account();
	void deposit(double amount);
	void withdraw(double amount);
};

Savings_account::Savings_account()
{
	intrest_rate = 3.0;
	cout << "This is a constructor call for savings account" << endl;
}

Savings_account::~Savings_account()
{
	cout << "This is a destructor call for savings account" << endl;
}

void Savings_account::deposit(double amount)
{
	cout << "Savings account deposit called with " << amount << endl;
}

void Savings_account::withdraw(double amount)
{
	cout << "Saving's account withdraw called with " << amount << endl;
}


int main()
{
	Account acc;
	acc.deposit(5000);
	acc.withdraw(2000);
	cout << endl;

	Account* pointer_to_account = nullptr;
	pointer_to_account = new Account;
	pointer_to_account->deposit(5000);
	pointer_to_account->withdraw(1000);
	delete pointer_to_account;
	cout << endl;

	Savings_account sav_acc;
	sav_acc.deposit(3000);
	sav_acc.withdraw(1000);
	sav_acc.balance = 1000;
	cout << "The balance in the savings account is: " << sav_acc.balance << endl;

	cout << endl;
}

================================================================================================================================================
//This is a code for Inheritance of constructor and destructor
================================================================================================================================================

#include<iostream>
#include<string>
using namespace std;

class Base
{
public:
	Base()
	{
		cout<< "This is a base constructor" << endl;
	}
	~Base()
	{
		cout << "This is a base destructor" << endl;
	}


};

class Derived :public Base
{
private:
	int doubled_value;

public:
	Derived()
	{
		cout << "This is is a derived constructor" << endl;
	}

	~Derived()
	{
		cout << "This is a derived destructor" << endl;
	}
};

int main()
{
	Base b;
	Derived d;
}
























