# Pi_Montecarlo
Se trata de una aproximacion de π mediante el método de Monte Carlo.

En este método se utiliza un cuadrado y una circunferencia en su interior.
La idea es generar N puntos aleatoriamente e ir contando cuantos caen
dentro de la circunferencia (P_d).

Área de un cuadrado (A_s): (2*r)^2 = 4*r^2 (Notar que el radio seria la mitad de su ancho).

Área de un círculo (A_c): pi*(r^2).

Razón de las áreas: A_c/A_s = (pi * r^2)/(4* r^2) = pi/4.

Tenemos entonces que la razón de las áreas es igual a la razón
entre los puntos que "caen" dentro de la circunferencia y los totales.

Es decir: P_d/N = A_c/A_s = pi/4. 

Entonces: pi = (4* P_d)/N. 
