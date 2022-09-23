/*9. Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.*/
#include<iostream>
using namespace std;
class Bill
{
	private:
		int unit;
		float price;
	public:
		void get(int u)
		{
			unit=u;
		}
		double calculateBill()
		{
			int price;
			if(unit<=100)
				price=unit*1.20;
			else if(unit>=100 && unit<=200)
			    price=(100*1.2)+(unit-100)*2;	    
			else(unit>=300)
				price=(100*1.2)+(200*2)+(unit-200)*3;		
		return price;
		}
		void display()
		{
			cout<<"Electric Bill :-"<<price;
		}
};
int main()
{
	Bill b;
	b.get(120);
	b.calculateBill();
	b.display();
}
