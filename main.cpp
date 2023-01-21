//Alejandro Hidalgo Badillo A01423412
// 1 de octubre del 2022
//Actividad 2.2 Implementacion de Sufix Array
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


//para resolver el trabajo SuffixArray lo realize todo en el main.
int main() {
	//declaracion de variables
  vector<string> Suffix;
	vector<string> Suffix2;
  string text;
  cin >> text;//se realiza el input

  for (int i = 0; i < text.size();
       i++) // itera la cantidad de caracteres en el texto
  {
    Suffix.push_back(text.substr(i, text.size() - i));
		//cout<<Suffix[i]<<endl;
		//almacenamos todos los substrings en suffix 
		Suffix2.push_back(text.substr(i, text.size() - i));
	//creamos un vector paralelo al vector que almacena todos los substrings para comparar su posicion en un futuro
	//se almacenan todos los sufijos del texto utilizando substr. en el vector Suffix
	
  }
  sort(Suffix.begin(), Suffix.end()); //Se ordenan todos los datos recopilados de manera alfabetica
	//por el momento nuestra funcion tiene una complejidad On

  // se imprime
  for (int i = 0; i < Suffix.size(); i++) {
		int pos = 0; //creamos una variable que nos dira la posicion en la que inicia nestra salida con respecto a la entrada inicial
		for(int b = 0; b <Suffix2.size();b++){
			if(Suffix2[b]==Suffix[i]){
				pos = b; //comparamos el vector secundario con el vector ordenado alfabeticamente para saber su posicion inicial y poder imprimirlo
			}
			else{
				continue; //cuelquier excepcion la ignora debido a la dificultad de que ocurra un error aqui
			}
		}
		
			
		cout<<pos<<" "<<Suffix[i]<< endl;
		//se imprime el Sufijo y su posicion
      
  }
  return 0;
}
//el codigo en general tiene una complejidad de O(n*n) debido a que tiene un for anidado para imprimir el resultado