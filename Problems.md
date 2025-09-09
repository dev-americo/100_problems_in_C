# 100 Problemas em C

---

## Bloco 1 — Fundamentos (Exercícios 1–10)

### Exercício 1 — Olá, Mundo e Variáveis Básicas

**Objetivos de aprendizagem**
- Compilar e executar um programa C simples (C11).
- Entender main, printf, scanf.
- Usar tipos básicos (int, float, char).

**Contexto lúdico / cenário:** Você é um robô que diz "Olá" e devolve soma de dois números que o usuário fornece — a primeira conversa do robô.

**Descrição detalhada do problema:**
- Ler dois inteiros do stdin, imprimir uma mensagem de saudação seguida da soma.
- Formato: solicitar valores e imprimir "Olá! Soma = X".

**Formato de entrada e saída:**
- Entrada (stdin): dois inteiros separados por espaço ou nova linha.
- Saída (stdout): Olá! Soma = <soma>\n

*Complexidade esperada: O(1) tempo e O(1) memória.*

**Casos teste**

```C
Entrada: 2 3
Saída: Olá! Soma = 5
```
```C
Entrada: 0 0
Saída: Olá! Soma = 0
```
```C
Entrada: -5 10
Saída: Olá! Soma = 5
```
```C
Entrada: 2147483647 0
Saída: Olá! Soma = 2147483647
```

```C
Entrada: 100000 200000
Saída: Olá! Soma = 300000
```
---

### Exercício 2 — Operadores e Precedência

**Objetivos de aprendizagem**
- Entender operadores aritméticos e precedência.
- Utilizar float e formatação com printf.
- Uso de casting.

**Contexto lúdico:** Uma lojinha calcula desconto e imposto sobre preço.

**Descrição detalhada:**
- Ler preço base (float), porcentagem de desconto (inteiro %) e taxa de imposto (inteiro %).
- Aplicar desconto, depois imposto sobre o resultado. Imprimir preço final com 2 casas decimais.

**Formato I/O:**
- Entrada: preco desconto imposto (ex.: 100.0 10 5)
- Saída: Preço final: 94.50\n

**Limites:** preço >= 0, desconto 0..100, imposto 0..100.

*Complexidade: O(1).*

**Casos teste**

```C
Entrada: 100.0 10 5
Saída: Preço final: 94.50
```
```C
Entrada: 0 50 10
Saída: Preço final: 0.00
```
```C
Entrada: 200.0 100 10
Saída: Preço final: 0.00
```
```C
Entrada: 1000000.0 0 0
Saída: Preço final: 1000000.00
```

```C
Entrada: 50.5 10 20
Saída: Preço final: 50.54
```
---
### Exercício 3 — Condicionais: Par / Ímpar e Mensagens

**Objetivos de aprendizagem**
- Uso de if/else, operador ternário.
- Trabalhar com mod e lógica booleana.

**Contexto lúdico:** Um guardião na porta permite entrada se número mágico for par.

**Descrição:** Ler um inteiro e imprimir PAR ou IMPAR. Se número = 0, imprimir ZERO.

**Formato I/O:**
- Entrada: um inteiro;
- Saída: PAR\n / IMPAR\n / ZERO\n.

**Limites:** int normal.

**Complexidade: O(1).**

**Casos teste**
```C
Entrada: 4
Saída: PAR
```
```C
Entrada: 7
Saída: IMPAR
```
```C
Entrada: 0
Saída: ZERO
```
```C
Entrada: -2
Saída: PAR
```

```C
Entrada: 2147483647
Saída: IMPAR
```
---
### Exercício 4 — Laços: Soma de 1..N

**Objetivos:**
- Usar for/while.
- Entender acumulação e overflow potencial.

**Contexto:** Cofrinho que soma moedas até N.

**Descrição**: Ler N (não-negativo). Imprimir soma 1+2+...+N.

**Formato I/O:**
- Entrada: N (uma linha).
- Saída: Soma = <valor>\n.

**Limites:** 0 ≤ N ≤ 10^7 (mas cuidado com desempenho). Recomenda-se usar fórmula para N grande.

**Complexidade:** O(N);
**Casos teste**
```C
Entrada: 5
Saída: 15
```
```C
Entrada: 0
Saída: 0
```
```C
Entrada: 1
Saída: 1
```
```C
Entrada: -2
Saída: INVALIDO
```

```C
Entrada: 100000
Saída: 5000050000
```
---
### Exercício 5 — Funções: fatorial iterativo

**Objetivos**
- Criar e chamar funções.
- Entender retorno e parâmetros.

**Contexto:** Cozinha que empilha caixas (fatorial = permutações).

**Descrição:** Implementar função unsigned long long fatorial(unsigned int n) iterativa. Ler n e imprimir n!. Para n>20 indicar overflow (pois 20! cabe em 64-bit).

**Formato I/O:**
- Entrada: n (inteiro);
- Saída: n! ou Overflow para n>20.

**Limites:** 0 ≤ n ≤ 20 para resultado seguro.

**Complexidade:** O(n) tempo, O(1) memória.
