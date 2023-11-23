#include<iostream>
using namespace std;
int main()
{
	int initial_quan, rem_stock, restock_quan, n;
	int threshold = 0;                          
	char c;

	
	do {
		cout << "for selling product enter S or s" << endl << "to restock enter R or r=" << endl << "to quit enter q or Q=";
		cin >> c;
		if (c == 'S' || c == 's')
		{
			cout << endl;
			cout << "enter initial quantity of your product=";
			cin >> initial_quan;
			
			if (initial_quan > 0) {
				initial_quan--;
			}
			rem_stock = initial_quan;
			cout << "your remaining stock is=" << rem_stock;
			cout << endl;
		}
		else if (c == 'r' || c == 'R')
		{
			cout << endl;
			cout << "to restock your product";
			cout << "enter initial quantity of your product=";
			cin >> initial_quan;
			cout << "how many products you want to add=";
			cin >> n;
			rem_stock = initial_quan + n;
			cout << "your remaining stock is=" << rem_stock;
			cout << endl;


		}
		else if (c == 'q' || c == 'Q') {
			
			return 0;
		}
		else {
			cout << "invalid choice entered";
		
		}
	} while (threshold >= 0);

	return 0;
}