# Super Trunfo - Países
Autor: Jórdan Pereira Cerqueira e Silva

Este pacote contém três programas em C para o desafio **Super Trunfo - Países**. 
Cada programa corresponde a um nível do desafio: Novato, Aventureiro e Mestre.

---

## 📂 Arquivos incluídos
- `novato.c` → Implementa o nível Novato (cadastro básico)
- `aventureiro.c` → Implementa o nível Aventureiro (atributos calculados)
- `mestre.c` → Implementa o nível Mestre (comparação e super poder)

---

## 🚩 Nível Novato
- Cadastro de **2 cartas**
- Atributos: População (int), Área (float), PIB (float), Pontos turísticos (int)
- Entrada via `scanf` e saída via `printf`
- **Sem laços nem condicionais**

---

## 🛡 Nível Aventureiro
- Mantém atributos do Novato
- Calcula automaticamente:
  - **Densidade Populacional** = População / Área
  - **PIB per capita** = PIB / População
- Exibe os novos atributos junto com os demais
- **Sem laços nem condicionais**

---

## 🏆 Nível Mestre
- População agora é `unsigned long int`
- Mantém atributos + cálculos do Aventureiro
- Calcula o **Super Poder**:
  - Soma de todos os atributos
  - Densidade é usada como `1/densidade`
- Faz **comparação entre as cartas**:
  - Para densidade, vence o menor valor
  - Para os outros atributos e Super Poder, vence o maior
- Exibe `1` se Carta 1 vence, `0` se Carta 2 vence

---

## ⚙️ Como compilar e executar

No terminal (Linux/Mac ou Windows com MinGW):

```bash
# Nível Novato
gcc -std=c11 -Wall -Wextra -O2 novato.c -o novato
./novato

# Nível Aventureiro
gcc -std=c11 -Wall -Wextra -O2 aventureiro.c -o aventureiro
./aventureiro

# Nível Mestre
gcc -std=c11 -Wall -Wextra -O2 mestre.c -o mestre
./mestre
```

---

## 📌 Observações
- No Nível Mestre são usados operadores ternários para as comparações (`condicao ? 1 : 0`).
- Caso o professor prefira uma saída mais "seca" (sem títulos como `=== Dados da Carta 1 ===`), basta simplificar os `printf`.

Boa sorte e bom jogo! 🎮
# Super Trunfo - Países
Autor: Jórdan Pereira Cerqueira e Silva

Este pacote contém três programas em C para o desafio **Super Trunfo - Países**. 
Cada programa corresponde a um nível do desafio: Novato, Aventureiro e Mestre.

---

## 📂 Arquivos incluídos
- `novato.c` → Implementa o nível Novato (cadastro básico)
- `aventureiro.c` → Implementa o nível Aventureiro (atributos calculados)
- `mestre.c` → Implementa o nível Mestre (comparação e super poder)

---

## 🚩 Nível Novato
- Cadastro de **2 cartas**
- Atributos: População (int), Área (float), PIB (float), Pontos turísticos (int)
- Entrada via `scanf` e saída via `printf`
- **Sem laços nem condicionais**

---

## 🛡 Nível Aventureiro
- Mantém atributos do Novato
- Calcula automaticamente:
  - **Densidade Populacional** = População / Área
  - **PIB per capita** = PIB / População
- Exibe os novos atributos junto com os demais
- **Sem laços nem condicionais**

---

## 🏆 Nível Mestre
- População agora é `unsigned long int`
- Mantém atributos + cálculos do Aventureiro
- Calcula o **Super Poder**:
  - Soma de todos os atributos
  - Densidade é usada como `1/densidade`
- Faz **comparação entre as cartas**:
  - Para densidade, vence o menor valor
  - Para os outros atributos e Super Poder, vence o maior
- Exibe `1` se Carta 1 vence, `0` se Carta 2 vence

---

## ⚙️ Como compilar e executar

No terminal (Linux/Mac ou Windows com MinGW):

```bash
# Nível Novato
gcc -std=c11 -Wall -Wextra -O2 novato.c -o novato
./novato

# Nível Aventureiro
gcc -std=c11 -Wall -Wextra -O2 aventureiro.c -o aventureiro
./aventureiro

# Nível Mestre
gcc -std=c11 -Wall -Wextra -O2 mestre.c -o mestre
./mestre
```

---

## 📌 Observações
- No Nível Mestre são usados operadores ternários para as comparações (`condicao ? 1 : 0`).
- Caso o professor prefira uma saída mais "seca" (sem títulos como `=== Dados da Carta 1 ===`), basta simplificar os `printf`.

Boa sorte e bom jogo! 🎮
