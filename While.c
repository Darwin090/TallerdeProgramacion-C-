//Ejercicio 1
#include <stdio.h>

int main() {
    int num = 13579;
    int sum = 0;

    // Usar un bucle while para recorrer los digitos del numero
    while (num > 0) {
        sum += num % 10; // Agregar el ultimo digito a la suma
        num /= 10;
    }

    printf("La suma de los digitos es: %d\n", sum);

    return 0;
}
   

//Ejercicio 2
#include <stdio.h>

int main() {
    int num = 2345;
    int inverso = 0;

    // Usar un bucle while para invertir el numero
    while (num != 0) {
        inverso = inverso * 10 + (num % 10);
        num /= 10;
    }

    printf("El inverso del numero es: %d\n", inverso);

    return 0;
}
//Ejercicio 3
#include <stdio.h>

int main() {
    int base = 4;
    int exponente = 3;
    int resultado = 1;
    int i = 0;

    // Usar un bucle while para calcular la potencia
    while (i < exponente) {
        resultado *= base;
        i++;
    }

    printf("%d^%d = %d\n", base, exponente, resultado);

    return 0;
}

//Ejercicio 4
#include <stdio.h>

int cubic_root(int n) {
    int result = 0;
    int sum = 1;
    
    while (n > 0) {
        n -= sum;
        sum += 3 * result * result + 3 * result + 1;
        result++;
    }
    
    return result - 1;
}

int main() {
    int number = 21;
    printf("La raiz cubica de %d es %d\n", number, cubic_root(number));
    return 0;
}

//Ejercicio 5
#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, next;
    int i = 0;

    while (i < n) {
        if (i <= 1) {
            next = i;
        } else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
        i++;
    }
    printf("\n");
}

int main() {
    int n = 12;
    printf("Los primeros %d elementos de la serie de Fibonacci son:\n", n);
    fibonacci(n);
    return 0;
}

//Ejercicio 6
#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    int i = 1;

    while (i <= n) {
        fact *= i;
        i++;
    }
    
    return fact;
}

int main() {
    int number = 7;
    printf("El factorial de %d es %llu\n", number, factorial(number));
    return 0;
}

//Ejercicio 7
#include <stdio.h>

int suma_aritmetica(int n) {
    int suma = 0;
    int i = 1;

    while (i <= n) {
        suma += i;
        i++;
    }
    
    return suma;
}

int main() {
    int n = 11;
    printf("La suma de los primeros %d terminos de la serie aritmetica es %d\n", n, suma_aritmetica(n));
    return 0;
}
 

//Ejercicio 8
#include <stdio.h>

unsigned long long producto_geometrico(int base, int n) {
    unsigned long long producto = 1;
    int i = 0;

    while (i < n) {
        producto *= base;
        base *= 2;
        i++;
    }
    
    return producto;
}

int main() {
    int base = 2;
    int n = 4;
    printf("El producto de los primeros %d terminos de la serie geometrica es %llu\n", n, producto_geometrico(base, n));
    return 0;
}
 

//Ejercicio 9 
#include <stdio.h>

int contar_digitos(int n) {
    int count = 0;
    
    while (n != 0) {
        n /= 10;
        count++;
    }
    
    return count;
}

int main() {
    int number = 134571;
    printf("El numero %d tiene %d digitos\n", number, contar_digitos(number));
    return 0;
}
 

//Ejercicio 10
#include <stdio.h>
#include <stdbool.h>

bool es_primo(int n) {
    if (n <= 1) return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

int main() {
    int number = 9;
    if (es_primo(number)) {
        printf("%d es primo\n", number);
    } else {
        printf("%d no es primo\n", number);
    }
    return 0;
}

//Ejercicio 11 
#include <stdio.h>

int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 54, b = 24;
    printf("El MCD de %d y %d es %d\n", a, b, mcd(a, b));
    return 0;
}

//Ejercicio 12 
#include <stdio.h>

int suma_impares(int n) {
    int suma = 0;
    int i = 1;

    while (i <= n) {
        suma += i;
        i += 2;
    }
    
    return suma;
}

int main() {
    int n = 12;
    printf("La suma de los numeros impares hasta %d es %d\n", n, suma_impares(n));
    return 0;
} 

//Ejercicio 13
#include <stdio.h>

int suma_pares(int n) {
    int suma = 0;
    int i = 2;

    while (i <= n) {
        suma += i;
        i += 2;
    }
    
    return suma;
}

int main() {
    int n = 14;
    printf("La suma de los números pares hasta %d es %d\n", n, suma_pares(n));
    return 0;
}

//Ejercicio 14
#include <stdio.h>

int suma_cuadrados(int n) {
    int suma = 0;
    int i = 1;

    while (i <= n) {
        suma += i * i;
        i++;
    }
    
    return suma;
}

int main() {
    int n = 6;
    printf("La suma de los cuadrados de los primeros %d numeros es %d\n", n, suma_cuadrados(n));
    return 0;
}

//Ejercicio 15 
#include <stdio.h>

int suma_cubos(int n) {
    int suma = 0;
    int i = 1;

    while (i <= n) {
        suma += i * i * i;
        i++;
    }
    
    return suma;
}

int main() {
    int n = 6;
    printf("La suma de los cubos de los primeros %d numeros es %d\n", n, suma_cubos(n));
    return 0;
}

 
//Ejercicio 16 
#include <stdio.h>

double suma_fraccionarios(int n) {
    double suma = 0.0;
    int i = 1;

    while (i <= n) {
        suma += 1.0 / i;
        i++;
    }
    
    return suma;
}

int main() {
    int n = 3;
    printf("La suma de la serie fraccionaria hasta 1/%d es %f\n", n, suma_fraccionarios(n));
    return 0;
}

//Ejercicio 17 
#include <stdio.h>

double producto_fraccionarios(int n) {
    double producto = 1.0;
    int i = 1;

    while (i <= n) {
        producto *= 1.0 / i;
        i++;
    }
    
    return producto;
}

int main() {
    int n = 3;
    printf("El producto de la serie fraccionaria hasta 1/%d es %f\n", n, producto_fraccionarios(n));
    return 0;
}
 

//Ejercicio 18
#include <stdio.h>
#include <stdbool.h>

bool es_primo(int n) {
    if (n <= 1) return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

int contar_primos(int n) {
    int count = 0;
    int i = 2;

    while (i <= n) {
        if (es_primo(i)) {
            count++;
        }
        i++;
    }
    
    return count;
}

int main() {
    int n = 12;
    printf("Hay %d numeros primos hasta %d\n", contar_primos(n), n);
    return 0;
}


//Ejercicio 19 
#include <stdio.h>

int numero_triangular(int n) {
    int suma = 0;
    int i = 1;

    while (i <= n) {
        suma += i;
        i++;
    }
    
    return suma;
}

int main() {
    int n = 4;
    printf("El %d-esimo numero triangular es %d\n", n, numero_triangular(n));
    return 0;
}
 

//Ejercicio 20 
#include <stdio.h>

// Funcion para calcular el factorial de un número
int factorial(int num) {
    int resultado = 1;
    int i = 1;

    while (i <= num) {
        resultado *= i;
        i++;
    }
    return resultado;
}

// Funcion para calcular la suma de los factoriales de los primeros n numeros
int suma_de_factoriales(int n) {
    int suma_total = 0;
    int i = 1;

    while (i <= n) {
        suma_total += factorial(i);
        i++;
    }
    
    return suma_total;
}

int main() {
    int n;

    // Solicitar al usuario el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Calcular y mostrar la suma de los factoriales
    int suma = suma_de_factoriales(n);
    printf("La suma de los factoriales de los primeros %d numeros es: %d\n", n, suma);

    return 0;
}


