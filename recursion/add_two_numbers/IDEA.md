# Add Two Numbers
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

___

# Minha abordagem

A abordagem recursiva aqui é provavelmente a forma mais intuitiva de enxergar a solução. Quando resolvi esse problema, eu não tinha muita prática com linked lists — conhecia apenas a estrutura e o básico sobre seu funcionamento — mas acredito que desenvolvi uma boa solução.

Sejam **A e B duas linked lists cujos valores x e y variam de 0 a 9, e carry uma variável inteira que pode assumir valores entre 0 e 1 (representando o "vai um" da soma)**. Queremos produzir C, uma nova linked list representando a soma dos dígitos correspondentes das listas A e B, como se estivéssemos somando dois números digitados "de trás para frente" (dígito menos significativo primeiro).

Para isso, definimos uma variável newHead que servirá como o nó inicial da nossa lista resultado, e uma função recursiva T(l1, l2, n), onde l1 e l2 são as cabeças das listas A e B, e n representa o carry, que inicia em 0.

### A função recursiva T seguirá estes passos:

**Calcula o valor do novo nó:**
`val = l1.valor + l2.valor + carry`

**Atualiza o carry:**
Se o valor de val for ≥ 10, o carry sobe:
``carry = val // 10``

**Cria o novo nó:**
O valor do novo nó será o dígito da unidade do resultado:
``newNode = Node(val % 10)``

**Avança para os próximos nós:**
Chamamos a recursão para o próximo par de nós das listas e passamos o carry atualizado:
`newNode.next = T(l1.next, l2.next, carry)`

**Retorna o nó atual:**
`return newNode`

Casos especiais a considerar:
Se uma lista for mais curta que a outra, tratamos os nós inexistentes como tendo valor 0.
- Se o carry final ainda for 1 (por exemplo, somando 9 + 9 dá 18), criamos um último nó com valor 1.
- A recursão termina quando ambas as listas acabam e o carry também chega a 0.