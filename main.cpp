/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *
 * Created on 22 de septiembre de 2022, 10:33
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
	int num_in, num_fn, rn_in, rn_fn, val_tot;
	int a=0;
	int rs=0;
	
	cout <<"Escribe el rango inicial para la multiplicación: ";
        
	cin>>num_in;
        
	cout <<" \n Escribe el rango final para la multiplicación: ";
        
	cin>>num_fn;
	cout<<"Número inicial de la tabla: ";
        
	cin>>rn_in;
        
	cout<<"Número final de la tabla: ";
        
	cin>>rn_fn;
        
        cout << endl;
	
	
    val_tot = (num_fn - num_in + 1) * (rn_fn - rn_in + 1);
	
	  
	int vals[val_tot];
	cout <<" Estos son los resultados:  " <<val_tot;
        
        cout << endl;
	
	
	for (int i = num_in; i <= num_fn; i++){
		
		for (int j= rn_in; j <= rn_fn; j++){
			
			rs = i * j;
			vals[a] = rs;
cout <<" \n" <<i <<" * " <<j <<" = " <<vals[a] << endl;		
			
			a = a + 1;
		}
	}

    return 0;
}

