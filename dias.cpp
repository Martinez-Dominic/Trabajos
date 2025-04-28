#include"iostream"
int main(){
	int num;
	std::cout<<"Ingrese un numero del 1 al 7 \n";
	std::cin>>num;
	switch(num)
	{
	        case 1: std::cout<<"El dia es lunes";
		 break;
		 	case 2: std::cout<<"El dia es martes";
		 break;
		 	case 3: std::cout<<"El dia es miercoles";
		 break;
		 	case 4: std::cout<<"El dia es jueves";
		 break;
		 	case 5: std::cout<<"El dia es viernes";
		 break;
		 	case 6: std::cout<<"El dia es sabado";
		 break;
		 	case 7: std::cout<<"El dia es domingo";
		 break;
		 default: std::cout<<"El numero no se encuentra dentro del rango establecido";
	}
	return 0;
}
