#include <iostream>
#include <ctime>
#include <cstdlib>

int k,a;

auto main() -> int
{
	int T [50];
	
	std::cout<<"Podaj zakres liczb: "; //<<"\n";
	std::cin>>k;
	
	srand(time(NULL));
	
	for(int i=0; i<50; i++)
	{
	
	a = rand()%(k+1);
	
	T[i]=a;
	std::cout<< T[i]<<std::endl;
    }
    
	return 0;
}	
	
	
	
