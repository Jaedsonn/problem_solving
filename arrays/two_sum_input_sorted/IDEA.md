# Problema

Given a 1-indexed array of integers numbers that is already **sorted in non-decreasing order**, find two numbers such that they add up to a specific target number. Let these two numbers be `numbers[index1]` and `numbers[index2]` where `1 <= index1 < index2 <= numbers.length`.

Return the indices of the two numbers, `index1 and index2`, **added by one** as an integer array `[index1, index2]` of length 2.

The tests are generated such that there is exactly one solution. You may not use the same element twice.

Your solution must use only constant extra space.

 

**Example 1:**
```
Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. 
Therefore, index1 = 1, index2 = 2. We return [1, 2].
```


# Minha Ideia  
#### Complexidade do Algoritmo  
A complexidade dessa solução é **O(n log n)**, pois percorremos o array uma vez (**O(n)**) e realizamos uma busca binária (**O(log n)**) para cada elemento.  

Bem, para mim que, no momento, apenas conheço um algoritmo o qual descobri lendo algumas ideias de soluções, caiu bem a calhar nesse problema, e este algoritmo é a **busca binária**.  

Seja **A um array de inteiros ordenado de forma não crescente**, e **n um inteiro tal que -1000 ≤ n ≤ 1000**, temos que achar dois números em A tal que sua soma seja igual a n. Para isso, fixamos um ponteiro **i (i < |A|)** no nosso array. Fixado o ponteiro, iremos pegar o elemento `A[i]` e **subtrair** de **n**; nisso, acharemos o **complemento** de `A[i]` para que sua soma seja igual a **n**.  

Achado o complemento, iremos realizar uma busca binária no array com o intuito de verificar se este número está presente. Caso ele não seja encontrado, avançamos o ponteiro **i**, ou seja, fazemos `i = i + 1`, e repetimos o processo até encontrar o complemento.  

Note que há uma pequena sutileza nesta solução que devemos ter cuidado: pode haver um caso em que a busca binária encontre nosso próprio `A[i]`, caso ele seja o complemento. Assim, precisamos ajustar a busca binária para evitar esse cenário. Deixarei essa parte para o leitor verificar na implementação; é uma simples condição que recalcula um dos extremos da busca binária caso ele seja igual a **i**.  

---  
E esta foi a minha solução! Ela não é a solução ótima do problema, porém é uma solução melhor que a "força bruta". Caso tenha interesse em ver qual a solução ótima para esse problema, pode verificar as soluções no **LeetCode** do problema **Two Sum II - Input is Sorted**.  

Obrigado e espero que tenham aproveitado a leitura.  
