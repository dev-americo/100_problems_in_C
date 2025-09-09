# 100 Problemas em C

*breve resumo*

---

### 1. Olá, Mundo Personalizado  
👤 *Você foi contratado para programar um sistema de recepção de visitantes em uma empresa.*  
**Problema:** Peça o nome da pessoa e exiba “Olá, [nome]! Seja bem-vindo(a)”.  
**Conceito:** `printf`, `scanf`.  

```C
Entrada: João  
Saída: Olá, João! Seja bem-vindo(a)  
```
---

### 2. Média Simples de Notas  
🎓 *Um professor precisa calcular a média de 3 provas de um aluno.*  
**Problema:** Leia três notas e mostre a média aritmética.  
**Conceito:** Operações aritméticas.  

```C
Entrada: 7.0, 8.5, 6.0  
Saída: Média = 7.17  
```
---

### 3. Conversor de Temperatura  
🌡️ *Uma estação meteorológica envia dados apenas em Celsius, mas o público precisa em Fahrenheit.*  
**Problema:** Leia uma temperatura em Celsius e converta para Fahrenheit.  
**Conceito:** Expressões matemáticas.  

```C
Entrada: 25  
Saída: 77 °F  
```

---

### 4. Par ou Ímpar  
🎲 *No jogo da “sorte ou revés”, duas crianças precisam saber se um número sorteado é par ou ímpar.*  
**Problema:** Leia um número e diga se é par ou ímpar.  
**Conceito:** `if`.  

- **Entrada:** 7  
- **Saída:** Ímpar  

---

### 5. O Maior de Dois Números  
⚖️ *Dois amigos estão disputando quem tem mais figurinhas.*  
**Problema:** Leia a quantidade de figurinhas de cada um e mostre quem tem mais.  
**Conceito:** Condicional.  

- **Entrada:** 12, 20  
- **Saída:** O segundo tem mais figurinhas.  

---

### 6. O Maior de Três Números  
🥇 *Uma corrida terminou e o juiz precisa anunciar o campeão entre 3 corredores.*  
**Problema:** Leia os tempos e mostre quem venceu.  
**Conceito:** `if-else` aninhado.  

- **Entrada:** 10.2, 9.8, 11.0  
- **Saída:** O segundo corredor venceu.  

---

### 7. Tabuada  
📚 *Uma criança está estudando multiplicação e quer consultar a tabuada.*  
**Problema:** Leia um número e imprima sua tabuada de 1 a 10.  
**Conceito:** `for`.  

- **Entrada:** 5  
- **Saída:**  
5 x 1 = 5  
...  
5 x 10 = 50  

---

### 8. Soma dos N Primeiros Números  
💰 *Um cofrinho mágico acumula moedas de 1 até N reais.*  
**Problema:** Leia N e calcule o total economizado.  
**Conceito:** Laço de repetição.  

- **Entrada:** 5  
- **Saída:** 15  

---

### 9. Fatorial de um Número  
🧪 *Um cientista precisa calcular combinações para um experimento.*  
**Problema:** Leia N e calcule seu fatorial.  
**Conceito:** Laços.  

- **Entrada:** 5  
- **Saída:** 120  

---

### 10. Sequência de Fibonacci  
🌻 *Um botânico está estudando o crescimento de plantas que segue o padrão de Fibonacci.*  
**Problema:** Mostre os N primeiros termos da sequência.  
**Conceito:** Laços + variáveis acumuladoras.  

- **Entrada:** 6  
- **Saída:** 0 1 1 2 3 5  

---

### 11. Número Primo  
🔐 *Um sistema de segurança usa números primos para gerar senhas.*  
**Problema:** Leia um número e diga se é primo.  
**Conceito:** Repetição + decisão.  

- **Entrada:** 7  
- **Saída:** É primo  

---

### 12. Contagem de Dígitos  
📱 *Um aplicativo de cadastro precisa saber quantos dígitos um número de telefone possui.*  
**Problema:** Leia um número e informe quantos dígitos ele tem.  
**Conceito:** Divisão inteira em laço.  

- **Entrada:** 12345  
- **Saída:** 5 dígitos  

---

### 13. Inversão de Número  
🔄 *Um caixa eletrônico exibe o número do cartão invertido como medida de segurança.*  
**Problema:** Leia um número e mostre-o invertido.  
**Conceito:** Aritmética + repetição.  

- **Entrada:** 1234  
- **Saída:** 4321  

---

### 14. Vetor de Notas  
📊 *Uma escola quer calcular a média da turma a partir das notas de 5 alunos.*  
**Problema:** Leia 5 notas em um vetor e calcule a média.  
**Conceito:** Vetores.  

- **Entrada:** 6, 7, 8, 9, 10  
- **Saída:** Média da turma = 8.0  

---

### 15. Maior e Menor em Vetor  
🏆 *Um campeonato registrou as pontuações de 10 jogadores.*  
**Problema:** Mostre quem teve a maior e menor pontuação.  
**Conceito:** Vetores + laços.  

- **Entrada:** 10 valores (3, 7, 9, 1, 8, 5, 6, 2, 4, 10)  
- **Saída:** Maior = 10, Menor = 1  

---

### 16. Ordenação Simples (Bubble Sort)  
📦 *Um armazém precisa organizar caixas por peso.*  
**Problema:** Leia 5 números e ordene-os em ordem crescente.  
**Conceito:** Ordenação.  

- **Entrada:** 7, 2, 5, 1, 4  
- **Saída:** 1, 2, 4, 5, 7  

---

### 17. Matriz Identidade  
🎮 *Um desenvolvedor de jogos precisa de uma matriz identidade para cálculos gráficos.*  
**Problema:** Mostre a matriz identidade 3x3.  
**Conceito:** Matrizes.  

- **Saída:**  
1 0 0  
0 1 0  
0 0 1  

---

### 18. Soma de Matrizes  
🔢 *Um engenheiro precisa somar duas matrizes com dados experimentais.*  
**Problema:** Leia duas matrizes 2x2 e mostre a soma.  
**Conceito:** Matrizes + laços aninhados.  

- **Entrada:**  
M1 = [[1,2],[3,4]]  
M2 = [[5,6],[7,8]]  
- **Saída:**  
[6,8]  
[10,12]  

---

### 19. Função para Calcular Potência  
⚡ *Um físico quer calcular rapidamente potências para seus experimentos.*  
**Problema:** Implemente uma função que calcule base^expoente.  
**Conceito:** Funções.  

- **Entrada:** 2 ³  
- **Saída:** 8  

---

### 20. Estrutura para Cadastro de Aluno  
📝 *Uma secretaria acadêmica precisa cadastrar alunos com nome, matrícula e nota.*  
**Problema:** Use uma `struct` para ler dados de 3 alunos e mostrar os aprovados.  
**Conceito:** `struct`.  

- **Entrada:**  
(Ana, 123, 7.0), (João, 124, 4.5), (Maria, 125, 8.0)  
- **Saída:**  
Ana (123) - Aprovado  
Maria (125) - Aprovado  
