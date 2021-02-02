#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *v,int *x,int *y,int *z)
{
	for(int i=0;i<4;i++)
	{
		int k = rand()%3,temp = *v;
		if(k==0)
		{
			*v = *x;
			*x = temp;
		}		
		else if(k==1)
		{
			*v = *y;
			*y = temp;
		}
		else if(k==2)
		{
			*v = *z;
			*z = temp;
		}
	}
}
