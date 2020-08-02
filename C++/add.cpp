#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	if (argc == 0)
	{
		cout<<"Enter 2 numbers";
		return 1;
	}
	else if (argc == 1)
	{
		cout<<"Enter atleast 2 numbers";
		return 1;
	}

	int sum = 0;
	for (int i = 1; i < argc; ++i)
	{
		/* code */
		
		try 
		{ 
		    sum += std::stoi(argv[i]);
		    //if (i == 0) no need to check!
		    std::cout << i << endl;
		}
		catch(std::exception const & e)
		{
		    cout<<"error : " << e.what();
		    return 1;
		}
	}
	cout<<"Sum of all CLA's is "<<sum;
	return 0;
}
