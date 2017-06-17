# Algorithm
-----------
Es una colección de funciones que ayudan en la manipulación de un **rango de elementos** (ejemplo: un vector que tiene iteradores).
```c++
#include <algorithm>
```
Algunas de estas funciones son:
- for_each
- find_if
- **sort**

(La mas importante es sort)
# Sort
Puedes ordernar un rango de elementos (vector) según alguna función que le pases.
Dado este vector:
```c++
vector<string> v = {"foo", "bar", "fifo", "vps"};
```
Ordenamiento por default (*De menor a mayor*)
```c++
sort(v.begin(), v.end());
```
Ordenamiento de mayor a menor
```c++
bool custom_comparator (string i, string j) {
    return (i < j);
}
sort(v.begin(), v.end(), custom_comparator);
```
Ordenamiento por mayor longitud, de menor a mayor
```c++
bool custom_comparator (string i, string j) {
    return (i.length() > j.length());
}
sort(v.begin(), v.end(), custom_comparator);
```
# Funciones anónimas y lambdas
Muchas veces cuando se pasa una función como parámetro (como en el caso del sort) no se necesita guardar la función en un espacio; mas bien podemos declararla al vuelo (*on the fly*)
```c++
sort(v.begin(), v.end(), [](string i, string j) -> bool {
    return l.length() > j.length();
});
```
Esto es llama lambda.

## ¿Qué significan los símbolos en el lambda?
    [] --> captura de variables, si es que queremos usar variables declaradas fuera del lambda adentro de nuestro lambda (valga la redundancia) aquí deben ser registrados.

    () --> argumentos, supuestamente nos piden una función como parámetro, entonces la función que nos lo pide lo va a ejecutar en el momento que crea necesario (para el ejemplo, el sort pide una función para poder ejecutarla cuando ejecute el agoritmo) y la ejecutará con estos argumentos entre paréntesis.
    
    -> bool --> tipo de retorno, el lambda al fin y al cabo es una función, acá se especifica qué tipo de dato vamos a retornar.


![Meme c++](http://s2.quickmeme.com/img/85/850a61abc00b53f7c804cc85711cf7d1305da78e5a35aae0b230a660db160c92.jpg)