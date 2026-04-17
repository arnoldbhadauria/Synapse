#include<iostream>
#include<vector>
#include<string>
#include<math.h>

#include "synapse.h"
#include "Tensor.h"

// essential namespaces
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

typedef vector<double> matrix;
typedef vector<vector<double>> matrix2d;

// definations

// Layer class
Layer::Layer(int n_inputs,int n_neurons, ActivationType activation){
    this->weights.resize(n_inputs,matrix(n_neurons,0.1));
    this->biases.resize(n_neurons,matrix(1));
}

matrix2d Layer::forward(matrix inputs){
    matrix2d _inputs=Tensor::get2dMatrix(inputs);
    matrix2d output=Tensor::multiplyMatrix(_inputs,this->weights);
    return output;
}

// Network Class
Network::Network(){
    
}

void Network::addLayer(Layer layer){
    this->layers.push_back(layer);
}

matrix2d Network::predict(matrix x_inputs){

}
