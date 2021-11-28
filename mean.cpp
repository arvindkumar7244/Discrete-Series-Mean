//Program to Calculate Mean of Discrete Series

#include<iostream.h>
#include<conio.h>

void main(){
	//Declaration of x, f, and n;
	int n , x [ 50 ] , f [ 50 ] ;
	
	//entering value of n
	cout<<"How many elements are there? :";
	cin>> n;
	
	//entering values of x and f
	cout<<"Enter elements & frequencies : ";
	int i;
	for( i = 0 ; i < n ; i++){
		cin>> x [ i ];
		cin>> f [ i ];
	}


	// calculating Σfx and Σf
	int sum_fx = 0;
	int sum_f = 0;
	for ( i = 0 ; i < n ; i++ ){
		sum_fx = sum_fx + f [ i ] * x [ i ];
		sum_f = sum_f + f [  i  ] ;
	}
	
	//calculating mean
	float mean=(float) sum_fx / sum_f;
	
	//priting mean
	cout<<"Mean is : "<<mean;
	
	getch();
}
