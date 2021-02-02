#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &a,int &b,int &c,int &d)
{
	for(int i=0;i<4;i++)
	{
		int k = rand()%3,temp = a;
		if(k == 0)
		{
			a = b;
			b = temp;
		}
		else if(k == 1)
		{
			a = c;
			c = temp;
		}
		else if(k == 2)
		{
			a = d;
			d = temp;
		}
	}
}
