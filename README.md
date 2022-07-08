## Estrutura
`thing.cpp` é onde está definido as coisas que vão ser colocadas no mundo.  
Na classe Thing, há uma matrix de transformação onde é guardado a posição, rotação e escala do objeto.  
Também há funções de translação, rotação e escala.  
**Não é possível desenhar uma Thing**, pois ela apenas representa um objeto qualquer. 
Para isso, crie uma classe derivada de Thing e implemente a função `draw`.
Todas as funções necessárias para se manipular um objeto em um espaço 2D estarão definidas na Thing.

`utils/transform2.cpp` é onde está definido uma matriz de transformação em 2D.  
A matrix de transformação é representada por uma matrix 3x3.  
Dentro do Transform2, há funções para multiplicar matrizes de transformação para modificar sua posição, rotação e escala.  
Também é possível criar matrizes de transformações que tem objetos específicos, como uma matriz de translação, de rotação e de escala.  

`utils/matrix3.cpp` é onde está definido uma matriz 3x3.  
Como a posição, rotação e escala de objetos 2D são representados utilizando uma matriz 3x3, a matriz 3x3 foi abstraida para esse tipo.  
Dentro, está definido uma matriz 3x3, e todas as operações possíveis com uma matriz 3x3, como soma, subtração e multiplicação.
