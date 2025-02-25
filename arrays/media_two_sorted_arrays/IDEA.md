# Problema

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

## Example 1:

**Input:**  
```plaintext
nums = [2,7,11,15], target = 9
```
**Output:**  
```plaintext
[0,1]
```
**Explanation:** Because `nums[0] + nums[1] == 9`, we return `[0, 1]`.

## Example 2:

**Input:**  
```plaintext
nums = [3,2,4], target = 6
```
**Output:**  
```plaintext
[1,2]
```

## Example 3:

**Input:**  
```plaintext
nums = [3,3], target = 6
```
**Output:**  
```plaintext
[0,1]
```

# Minha ideia de resolução

Ao analisar o problema, percebi que os dois arrays fornecidos já estão ordenados. Isso me levou a evitar uma abordagem de força bruta, que se baseava em:
- Fazer o merge dos arrays  
- Ordenar o resultado  
- Encontrar a média  

Essa abordagem seria ineficiente, pois a ordenação teria complexidade **O((n + m) log(n + m))**. Então, busquei uma alternativa mais eficiente.

Em vez de reordenar o array, podemos simplesmente **fazer o merge mantendo a ordenação**, pois as partes já vêm ordenadas. A ideia é utilizar **dois ponteiros** para percorrer os arrays e construir o array final diretamente.

Sejam **A e B dois arrays de tamanhos n e m**, com **n ≥ m ou m ≥ n**, e seja **C o array resultante da junção de A e B**. Para construir C, usamos dois ponteiros:
- **i = 0** para percorrer o array A  
- **j = 0** para percorrer o array B  

Agora, seguimos a seguinte estratégia:
1. Comparamos `A[i]` e `B[j]`.  
2. Se `A[i] < B[j]`, adicionamos `A[i]` a `C` e incrementamos `i`. Caso contrário, adicionamos `B[j]` e incrementamos `j`.  
3. Repetimos esse processo até que um dos arrays seja completamente percorrido.  
4. Quando isso acontecer, copiamos os elementos restantes do outro array para C.  

Dessa forma, o array `C` permanece ordenado e conseguimos realizar a fusão em **O(n + m)**.

5. Agora basta fazer a média no vetor C e o problema está resolvido!
---
**OBS**: A implementação da minha solução foi feita de forma **recursiva**, o que de longe é a melhor forma de implementar essa ideia, além de outros aspectos que pecam em complexidade de memória, aconselho a tentar implementar esse ideia de forma interativa usando loops para um melhor desempenho. Porém essa foi a implementação mais rápida e de fácil entendimento que consegui fazer. Espero que tenha gostado!
