/* 
* @file "Termino.h"
* @brief Fichero de cabecera de Termino.cpp (STL)
* @author Francisco Domínguez Lorente
*/

#ifndef terminoH
#define terminoH

#include <string>
#include <vector>
#include <utility>

using namespace std;

/*
* @brief TDA Termino
*/

class Termino{
private:
    pair <string, vector<string>> termino;
    int num_definiciones;
    
public:

/*
 * @brief Constructor por defecto
 */
	Termino();

/*
 * @brief Constructor por parámetros
 */
	Termino(string palabra, vector<string> definiciones);

/*
 * @brief Constructor por copia
 * @param El Término del que se hace la copia. No se modifica
 */
	Termino(const Termino& t);

/*
 * @brief Consultor de número de definiciones
 * @return Número de definiciones de la palabra
 */
	inline int getNumDefiniciones() const{return this->num_definiciones;};

/*
 * @brief Consultor de la palabra
 * @return La palabra
 */
	inline string getPalabra() const{return this->termino.first;};
	
/*
 * @brief Consultor de los significados
 * @return Significado
 */
	inline vector<string> getDefiniciones() const {return this->termino.second;};

/*
 * @brief Consultor del significado i
 * @param El índice del significado que queremos obtener 
 * @return Significado
 */        
        inline string getDefinicion(int i) const {return this->termino.second[i];} // Implementar el iterador
        
/*
 * @brief Establecer la palabra
 * @param La palabra
 */
	void setPalabra(string palabra);

/*
 * @brief Añade una definición a la palabra
 * @param La definición a añadir
 */
	void aniadeDefinicion(string def);

/*
 * @brief Iterador que puede modificar y recorrer los elementos del contenedor
 * @return El iterador
 */        
        typedef vector<string>::iterator iterator;
        
/*
 * @brief Iterador que puede recorrer los elementos del contenedor
 * @return El iterador
 */        
        typedef vector<string>::const_iterator const_iterator;

/*
 * @brief Devuelve el inicio del contenedor. Puede modificar.
 * @return Iterador apuntando al inicio del contenedor
 */
        iterator begin();
        
/*
 * @brief Devuelve el final del contenedor. Puede modificar.
 * @return Iterador apuntando al final del contenedor
 */
        iterator end();

/*
 * @brief Sobrecarga del operador incremento sobre el iterador
 * @return Referencia al iterador
 */
        iterator& operator++();

/*
 * @brief Sobrecarga del operador decremento sobre el iterador
 * @return Referencia al iterador
 */        
        iterator& operator--();

/*
 * @brief Sobrecarga del operador * sobre el iterador
 * @return Referencia al iterador
 */        
        iterator& operator*();

/*
 * @brief Sobrecarga del operador asignación sobre el iterador
 * @return Referencia al iterador
 */        
        iterator& operator=(const iterator& itr);

/*
 * @brief Sobrecarga del operador igualdad sobre el iterador
 * @return True si son iguales, false si no
 */        
        bool operator==(const iterator& itr);

/*
 * @brief Sobrecarga del operador desigualdad sobre el iterador
 * @return Referencia al iterador
 */        
        bool operator!=(const iterator& itr);
        
/*
 * @brief Devuelve el inicio del contenedor
 * @return Iterador apuntando al inicio del contenedor
 */
        const_iterator begin() const;

/*
 * @brief Devuelve el final del contenedor
 * @return Iterador apuntando al final del contenedor
 */
        const_iterator end() const;        

/*
 * @brief Sobrecarga del operador incremento sobre el iterador constante
 * @return Referencia al iterador
 */
        const_iterator& operator++();

/*
 * @brief Sobrecarga del operador decremento sobre el iterador constante
 * @return Referencia al iterador
 */        
        const_iterator& operator--();

/*
 * @brief Sobrecarga del operador * sobre el iterador constante
 * @return Referencia al iterador
 */        
        const_iterator& operator*();

/*
 * @brief Sobrecarga del operador asignación sobre el iterador constante
 * @return Referencia al iterador
 */        
        const_iterator& operator=(const const_iterator& itr);

/*
 * @brief Sobrecarga del operador igualdad sobre el iterador constante
 * @return Referencia al iterador
 */        
        bool operator==(const const_iterator& itr);

/*
 * @brief Sobrecarga del operador desigualdad sobre el iterador constante
 * @return Referencia al iterador
 */        
        bool operator!=(const const_iterator& itr);
        
/*
 * @brief Sobrecarga del operador de asignación de término
 * @return Referencia al término
 */
	Termino& operator =(const Termino& original);
        
/*
 * @brief Sobrecarga de operador de salida
 */
        friend ostream& operator <<(ostream& os, const Termino& d);        
};

#endif