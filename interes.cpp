#include"iostream"
int main(){
	int interes, capital, division, suma;
	std::cout<<"ingrese su capital inicial \n";
	std::cin>>capital;
	std::cout<<"ingrese el tipo de interes \n";
	std::cin>>interes;
	division = capital/interes;
	suma = capital+division;
	std::cout<<"La suma del interes es de: "<<suma<<std::endl;
	return 0;
}
