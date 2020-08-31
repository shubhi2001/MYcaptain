#include<iostream>
using namespace std;

int isprime(int num)
{
	int count;
	int prime = 1;
	for(count = 2; count < num; count++)
	{
		if(num % count == 0)
		{
			prime = 0;
			break;
		}
		
	}
	return prime;
}
int nxtprime(int num)
{
	do
	{
		num++;
		
	}while(!isprime(num));
	return num;
}
int main()
{
	int num , count ,flag = 0;
	cout << "enter a positive number :" << endl;
	cin >> num;
	
	for(count = 2 ; count <= (num - count) ; count = nxtprime(count))
	{
		if(isprime(num - count))
		{
			flag = 1;
			cout << num<<" = "<< count <<"+"<< (num-count) << endl; 
		}
	}
	if(flag = 0)
	cout << num << "cant be represented as a sum of two prime numbers ."<<endl;
	return 0;
}
