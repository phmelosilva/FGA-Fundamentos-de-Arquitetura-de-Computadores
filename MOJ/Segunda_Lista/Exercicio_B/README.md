# Conta de Água

A empresa local de abastecimento de água, a Saneamento Básico da Cidade (SBC), está promovendo uma campanha de conservação de água, distribuindo cartilhas e promovendo ações demonstrando a importância da água para a vida e para o meio ambiente.

Para incentivar mais ainda a economia de água, a SBC alterou os preços de seu fornecimento de forma que, proporcionalmente, aqueles clientes que consumirem menos água paguem menos pelo metro cúbico. Todo cliente paga mensalmente uma assinatura de R$ 7, que inclui uma franquia de 10 m³ de água. Isto é, para qualquer consumo entre 0 e 10 m³, o consumidor paga a mesma quantia de R$ 7 reais (note que o valor da assinatura deve ser pago mesmo que o consumidor não tenha consumido água). Acima de 10 m³ cada metro cúbico subsequente tem um valor diferente, dependendo da faixa de consumo. A SBC cobra apenas por quantidades inteiras de metros cúbicos consumidos. A tabela abaixo especifica o preço por metro cúbico para cada faixa de consumo:

Faixa de Consumo (m³)	Preço
até 10	incluso na franquia
11 a 30	R$ 1
31 a 100	R$ 2
101 em diante	R$ 5
Assim, por exemplo, se o consumo foi de 120 m³ , o valor da conta é:

7 reais da assinatura básica;
20 reais pelo consumo no intervalo 11 - 30 m³;
140 reais pelo consumo no intervalo 31 - 100 m³;
100 reais pelo consumo no intervalo 101 - 120 m³.
Logo o valor total da conta de água é R$ 267.

Escreva um programa que, dado o consumo de uma residência em m³, calcula o valor da conta de água daquela residência.

## Entrada
---
A entrada é composta por uma única linha contendo um inteiro N ( 0 <= N <= 10³ ) que indica o consumo de água da residência em m³.

## Saída
---
A saída é composta de uma única linha, contendo o valor da conta de água naquela residência.

### Exemplo de Entrada 1
---
    68
### Exemplo de Saída 1
---
    103
### Exemplo de Entrada 2
---
    14
### xemplo de Saída 2
---
    11
### Exemplo de Entrada 3
---
    42

### Exemplo de Saída 3
---
    51
Author: John L. Gardenghi, adaptado do problema SPOJ CONTA1 de Wanderley Guimarães