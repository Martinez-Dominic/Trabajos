#include"iostream"
int main(){
	int cont;
	int num;
	int acum;
	std::cout<<"Ingrese un numero";
	std::cin>>num;
	while(num>0){
	cont=cont+1;

	acum=acum+num;
	
	std::cout<<"Ingrese un numero";
	std::cin>>num;
}


std::cout<<"El total de la suma de los numeros es de: "<<acum<<std::endl;
std::cout<<"El total de la suma de los numeros es de: "<<cont<<std::endl;
	return 0;

}
