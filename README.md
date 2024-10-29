# Documentação de Montagem e Conexões - Semáforo

## 1. Introdução
Este documento descreve o processo de montagem e as conexões necessárias para criar um modelo de semáforo. O projeto utiliza componentes básicos como LEDs, resistores e uma placa de prototipagem. O objetivo é simular o funcionamento de um semáforo, com LEDs representando as luzes de parada (vermelho), atenção (amarelo) e siga (verde).

## 2. Montagem do Circuito
1. **Configuração da Placa**: Posicionamento dos LEDs (vermelho, amarelo e verde) na placa de prototipagem, deixando um espaço entre eles para facilitar as conexões.
2. **Conexão dos LEDs**: Conexão da perna mais curta de cada LED ao GND da placa. Em seguida, ligação de um resistor à perna mais longa de cada LED para limitar a corrente.
3. **Ligação dos Resistores**: Conexão dos resistores às portas digitais da placa controladora, como o Arduino, de acordo com o seguinte esquema:
   - LED vermelho: pino 23
   - LED amarelo: pino 22
   - LED verde: pino 32
4. **Fonte de Alimentação**: Conexão a placa controladora ao computador para fornecer energia.

## 3. Especificações dos Componentes Utilizados

| Componente         | Especificação                  | Quantidade |
|--------------------|--------------------------------|------------|
| LED Vermelho       | -                 | 1          |
| LED Amarelo        | -                 | 1          |
| LED Verde          | -                 | 1          |
| Resistores         | 220Ω e 330Ω                         | 3          |
| Placa Controladora | ESP32        | 1          |
| Protoboard         | -                              | 1          |
| Cabos Jumpers      | -                              | Vários     |

# 4. Avaliador: Mirella Borim

| Critério                                                                                                 | Contempla (Pontos) | Contempla Parcialmente (Pontos) | Não Contempla (Pontos) | Observações do Avaliador |
|---------------------------------------------------------------------------------------------------------|--------------------|----------------------------------|--------------------------|---------------------------|
| Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores                | Até 3              | Até 1,5                            | 0                        |             3              |
| Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo                  | Até 3              | Até 1,5                          | 0                        |        3                   |
| Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) | Até 3              | Até 1,5                          | 0                        |     3                       |
| Extra: Implmeentou um componente de liga/desliga no semáforo e/ou usou ponteiros no código | Até 1              |  Até 0,5                         | 0                        |       1                    |
|  |                                                             |  | |**Pontuação Total**|
## 4. Considerações Finais
Depois de montar e conectar tudo, é necessário conferir se as ligações estão corretas para garantir que o circuito está seguro e funcionando bem. Considerando que todas as ligações foram feitas de um jeito certo, os LEDs acenderão na sequência certa, simulando o funcionamento de um semáforo.