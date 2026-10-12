
# Especificaciones
Indica los condiciones de uso y restricciones de entrada y salida.

### Cuantificadores
R(i) :  describe el rango de i.
P(i) :  describe las propiedades de i.

**P.t i:  R(i): P(i)** => Para todo i dentro de un rago que cumpla una condcion.
**Ex. i:  R(i): P(i)** => Existe i dentro de un rango que cumpla una condicion.

e(i) expresion dependiente de i.
**Sum i: R(i): e(i)** => Suma los valores para todos los i que cumplen la condición. 0 si rango es vacio.
**Prod i: R(i): e(i)** => Multiplica los valores para todos los i que cumplen la condición. 1 si rango es vacio.

**Max i: R(i): e(i)** => Maximo valor de un rango de i's que cumple una condicion.
**Min i: R(i): e(i)** => Minimo valor de rango de i's que cumple una condicion.
**\# i: R(i): P(i)** => Contador en rango de i's que cumple una condicion.


```cpp
// { Pre: 0 <= n <= longitud(v) }
bool hayCeros(int const v[], int n); /* return ret */
// { Post: ret = Ex. i : 0 <= i < n : v[i] = 0 }

// { Pre: 0 <= n <= longitud(v) }
bool todoCeros(int const v[], int n); /* return ret */
// { Post: ret = P.t. i : 0 <= i < n : v[i] = 0 }

// { Pre: 0 <= n <= longitud(v) }
int cuantosCeros(int const v[], int n); /* return ret */
// { Post: ret = # i : 0 <= i < n : v[i] = 0 }
```
# Algoritmos iterativos
(Usaremos while para los bucles)

**Invariante de un bucle**: Cumple una condicion tanto antes como despues de ejecutarlo en bucle.

Generalmente la invariante se parece a la postcondicion.

**Funcion de cota**: Formula que determina cuantas iteraciones falta por realizar.

```cpp
// { Pre: n >= 0 }
void potencia(int x, int n); /* return ret */
{
    int ret = 1; //Hay que haber inicializacion de variables locales
    int i = 0;

    //{I : ret = Prod j: 1 <= j <= i: x ^(0 <= i <= n)}
    //{C: n - 1}
    while(i < n>){
        ret += x;
        i++
    }
    return ret;
}
// { Post: ret = Prod j: 1 <= j <= n: x}
```
# Busquedas secuenciales

```cpp
//Busqueda digna
//{Pre: 0<= n <= long(v)}
bool hayPares (int const v[], int n){/*return ret*/
int i = 0;
//{I: 0 <= i <= n ^ P.t a: 0 <= a <i: mod(v[a], 2) != 0}
//{C: n - pos}
while(i < n && v[i]%2 != 0){
    i++;
}

return (i < n);
}
//{Post: ret = Ex a; 0 <= a <n : mod(v[a],2) = 0}
```
```cpp
// { Pre: 0 <= n <= longitud(v) }
int posPrimerCero(int const v[], int n) /* return ret */ {
int i = 0;
// { I: (0 <= i <= n) ^ P.t. j : 0 <= j < i : v[j] /= 0 }
while (i < n && v[i] != 0)
++i;
return i;
}
// { Post:
// ret = Max a
// : 0 <= a <= n ^
// (P.t. j : 0 <= j < a : v[j] /= 0)
// : a }
//=======================================
// { Pre: 0 <= n <= longitud(v) ^ ordenado(v, n)
// donde
// ordenado(v, n) = P.t. j : 0 < j < n : v[j-1] <= v[j] }
int buscaPos(int const v[], int n, int x) /* return ret */ {
int pos = 0;
// { I: (0 <= pos <= n) ^ P.t. j : 0 <= j < pos : v[j] < x }
while (pos < n && v[pos] < x)
++pos;
return pos; // P.t. j : pos <= j < n : v[j] >= x
}
// { Post: ret = Min a : 0 <= a <= n ^
// P.t. j : a <= j < n : v[j] >= x
// : a }
```

# Acumuladores
Es una variable que permite condensar informacion procesada.


