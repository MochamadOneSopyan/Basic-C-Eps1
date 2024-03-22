#include <iostream>
using namespace std;

int main() 
{
    int A, B, T, Minus, Multiple, Divided, Modulus, Increment, Decrement;
	A = 5;
	B = 2;
	T = A + B;
	Minus = A - B;
	Multiple = A * B;
	Divided = A / B;
	Modulus = A % B;
	Increment = A + 1;
	Decrement = A - 1;
	
	std::cout << "Nila A = 5\nNilai B = 2"<< std::endl;
	std::cout <<"Nilai T = A + B : " << T << std::endl;
	
	cout << "=============================\n";
	
  // std::cout << "\n" << T << std::endl;
  cout << "Variation Assignment\n";
  std::cout <<"A += B : " << T << std::endl;
  std::cout <<"A -= B : " << Minus << std::endl;
  std::cout <<"A *= B : " << Multiple << std::endl;
  std::cout <<"A /= B : " << Divided << std::endl;
  std::cout <<"A %= B : " << Modulus << std::endl;
  std::cout <<"A += 1 : " << Increment << std::endl;
  std::cout <<"A -= 1 : " << Decrement << std::endl;
  
  
}