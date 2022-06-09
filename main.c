#include<stdio.h>
#include"Layer.h"
#include"NeuralNetwork.h"
#include"ECG.h"

int main(){
    NeuralNetwork neuralNetwork = createNeuralNetwork();

    Layer input_layer = createLayer(NULL,8,INPUT);
    addLayer(neuralNetwork, input_layer);
    Layer hidden_layer = createLayer("relu",4,HIDDEN);
    addLayer(neuralNetwork, hidden_layer);
    Layer output_layer = createLayer("sigmoid",1,OUTPUT);
    addLayer(neuralNetwork, output_layer);

    ECG ecg = createECG(0.06,-0.435,2.03,-0.75,0.635,1.0055555555555555,-0.7166666666666667,0.044444444444444446);
    
    double result = executeNeuralNetwork(neuralNetwork, ecg);

    printf("Resultado: %.10lf, ou seja ECG %s anomalias", result, result>0.5?"POSSUI":"NAO POSSUI");
}