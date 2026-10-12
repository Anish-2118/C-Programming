#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<int> customers;
	int token;

	// Store token numbers of 5 customers
	cout << "Enter token numbers of 5 customers:" << endl;
	
	for (int i = 1; i <= 5; i++)
	{
	    cout << "Enter token number for customer " << i << ": ";
	    cin >> token;
	    customers.push(token);
	}
	
	// Serve customers in the same order
	cout << "\nCustomers will be served in this order:" << endl;
	
	while (!customers.empty())
	{
	    cout << "Customer with token number: "	
	         << customers.front() << endl;
	
	    customers.pop();
	}

	return 0;
}

