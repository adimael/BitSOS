# Projeto: Implementação do Sinal SOS em Código Morse com a Placa BitDogLab

Este projeto demonstra como implementar o sinal SOS em código Morse utilizando a linguagem C e a placa de desenvolvimento BitDogLab. A simulação foi realizada no Wokwi e o código foi modularizado para facilitar a compreensão e a manutenção.

---

## 🛠️ Funcionalidades

- Transmissão do sinal SOS em código Morse:
  - **Ponto (.)**: LED aceso por 0,2 segundos.
  - **Traço (-)**: LED aceso por 0,8 segundos.
  - Intervalo entre pontos e traços: 0,125 segundos.
  - Intervalo entre letras: 0,25 segundos.
  - Reinício do ciclo após 3 segundos.
- Modularização do código em funções:
  - `led_on()`
  - `enviar_sos()`
  - `main()`
- Compatível com a placa BitDogLab e simulável no Wokwi.

---

## 📁 Estrutura do Projeto

- `main.c`: Código-fonte principal do projeto.
- `README.md`: Documentação do projeto.
- `diagram.json`: Arquivo de configuração para simulação no Wokwi.

---

## 🖥️ Como Usar

### Pré-requisitos
- [Visual Studio Code](https://code.visualstudio.com/)
- [Simulador Wokwi](https://wokwi.com/)
- Ambiente configurado para desenvolvimento com a placa BitDogLab.

### Passos
1. Clone o repositório:
   ```bash
   git clone https://github.com/adimael/BitSOS.git
    ````

2. Abra o projeto no Visual Studio Code.
3. Compile o código utilizando a extensão configurada.
4. Simule o projeto no Wokwi ou carregue-o na placa BitDogLab.

## 📚 Referências

1. [Raspberry Pi Pico Documentation](https://www.raspberrypi.com/documentation/microcontrollers/pico-series.html)  
   Documentação oficial do Raspberry Pi Pico.  
   **Acesso em:** 09/01/2025.

2. [Tutorial Código Morse - TELECOM UFF](https://www.telecom.uff.br/pet/petws/downloads/tutoriais/codigo_morse/Tutorial_Codigo_Morse_2019_12_19.pdf)  
   Tutorial sobre código Morse publicado pela UFF.  
   **Acesso em:** 09/01/2025.

3. [Documentação Wokwi](https://docs.wokwi.com/pt-BR/)  
   Guia oficial de uso do simulador Wokwi.  
   **Acesso em:** 09/01/2025.



