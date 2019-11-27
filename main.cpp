/**
 *
	1 * 2 + 2 * 1 = 4
	2 * 2 + 3 * 1 = 7
	3 * 2 + 4 * 1 = 10
	4 * 2 + 5 * 1 = 13
	5 * 2 + 6 * 1 = 16
 *
 * */

#include <stdio.h>
#include <vector>
#include <iostream>

int main()
{
	std::vector<int> A {1,2,3,4,5};
	std::vector<int> B {1,2,3,4,5};
	std::vector<int> results(A.size()+B.size()-1);  // size of A - 1 , should be 5
	std::vector<int> rev(A.size());      // size of A , should be 6
	int i = 0;

	for(int n = A.size()-1; n != -1; i++, n--)
	{
		rev[i] = A[n];
	}
	std::cout << std::endl << "Rev index" << std::endl;
	for(auto n : rev)
		std::cout << n << " ";
	std::cout << std::endl;

	/* Insert Zeros */

	std::vector<int> NewA(B.size()*2 + A.size() - 2,0);
	size_t j = B.size()-1;
	std::cout << std::endl;
	for(size_t n = 0; A.size() != n; n++, j++)
	{
		NewA[j] = A[n];
	}
	for(auto n : NewA)
		std::cout << n << " ";
	
	/* end of Insert */

	for(int n = 0; n != NewA.size()-B.size()+1; n++) // 1 , 2 , 3 , 4 , 5 , 6
	{
		int total = 0;
		int i = B.size()-1; 
		size_t k = n;
		for( ; i != -1; i--, k++)  // 2 , 1
			total += NewA[k] * B[i];
		results[n] = total;
	}

	std::cout << std::endl << "Results " << std::endl;
	for(auto n : results)
	{
		std::cout << n << " ";
	}
	std::cout << std::endl;

	return 0;
}

