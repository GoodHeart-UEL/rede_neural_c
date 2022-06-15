# Rede Neural em C
Repositório destinado a implementação de uma Rede Neural Perceptron Multicamadas alimentada com pesos e bias resultantes de treinamento em ambiente externo. A intenção do desenvolvimento deste projeto é possibilitar a implementação de uma rede neural treinada em um sistema embarcado.

## Compilação e execução
Para compilar os arquivos basta executar o comando abaixo:
```
make
```
Para visualizar um exemplo, basta executar:
```
./neural
```
## Estrutura
Foi implementada a rede neural utilizando a seguinte estrutura:

<div align="center">
  <img src="./estrutura_rede_neural.png" align="center"/>
</div>

Cada "objeto" representado pela imagem acima estão implementado em formato TADs (Tipo Abstrato de Dados) e possuem arquivos ```.c``` e ```.h```. É possível consultar a utilidade de cada TAD em seu respectivo arquivo ```.h```.

Para atualizar os pesos da rede neural basta editar os arquivos: 
```h_weights.txt``` (pesos da camada oculta) e ```o_weights.txt``` (pesos da camada de saída).

Para atualizar os bias da rede neural basta editar os arquivos: 
```h_bias.txt``` (bias da camada oculta) e ```o_bias.txt``` (bias da camada de saída)
