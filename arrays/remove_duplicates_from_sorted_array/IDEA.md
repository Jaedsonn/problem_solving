# Problem

Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.
Custom Judge:

The judge will test your solution with the following code:

```int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
```
If all assertions pass, then your solution will be accepted.

## Minha ideia de solução  

O problema não é complexo; no LeetCode, ele é classificado como *easy*. Por isso, decidi explorar uma abordagem que não fosse totalmente baseada em **força bruta**.  

Seja **A um array ordenado de tamanho n**. Para encontrar duplicatas em A, devemos considerar dois casos:  

    1. Há, no mínimo, dois números repetidos no array. Ex: `{1,1,2,2}`  
    2. Há apenas um número repetido no array. Ex: `{1,1}`  

É essencial levar esses casos em conta para garantir que a solução funcione corretamente.  

A ideia central da abordagem é **fixar um número e encontrar suas aparições para eliminá-las**. Para isso, usamos dois ponteiros **i** e **j**, ambos começando em zero e percorrendo o array. Além disso, utilizamos um array auxiliar **B** para armazenar os números sem repetições.  

O funcionamento é o seguinte:  
- O ponteiro **i** fixa um elemento no array, enquanto **j** avança até encontrar um número diferente de **A[i]**.  
- Quando isso acontece, adicionamos **A[i]** ao array **B**, movemos **i** para a posição de **j** e incrementamos **j**.  

No entanto, essa abordagem não lida corretamente com os casos citados acima, pois apenas adicionamos um número a **B** quando **j** encontra um valor diferente de **A[i]**. Para corrigir isso, adicionamos ao final do array **A** um número **fora do seu range de valores possíveis**. Assim, garantimos que o último número do array seja sempre processado corretamente e adicionado a **B**.  

Essa foi a minha solução. Espero que tenham gostado e **deêm uma passada na implementação**, a ideia ocupa 80% da resolução de um problema, mas nem por causa disso os outros 20% são desnecessário!