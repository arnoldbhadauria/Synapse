#pragma once

#include<vector>
#include<string>

// essential namespaces
using std::string;
using std::vector;

typedef vector<double> matrix;
typedef vector<vector<double>> matrix2d;

// declarations
class Layer{
    
private:
    matrix2d weights;
    matrix2d biases;
    enum ActivationType {RELU,SIGMOID,TANH,NONE};

public:
    Layer(int n_inputs,int n_neurons, ActivationType activation);
    matrix2d forward(matrix inputs);

};

class Network{
    
private:
    vector<Layer> layers;
    matrix2d result;

public:
    Network();
    void addLayer(Layer layer);
    matrix2d predict(matrix x_inputs);
};

