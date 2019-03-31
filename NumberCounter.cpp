#include <iostream> 
	using namespace std;

	int getSize(int n)
	{
		int count = 0;
		if(n<0)
		{
		n= n * -1;
		}
		else if (n==0)
		{
			n=1;
		}
		while (n>0) 
		{
			n = n / 10;
			++count;
		}
		return count;
	}

	int main(void)
	{
		int n;
		cout << "Enter The Number\n";
		cin >> n;
		cout << getSize(n);
		return 0;
	}
