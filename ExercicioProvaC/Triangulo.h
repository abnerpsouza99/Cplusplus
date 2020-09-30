
typedef struct triangulo *Tri;

Tri* criar_tri(float lado1, float lado2, float lado3);

void libera(Tri* tri);

void perimetro(Tri* tri);
