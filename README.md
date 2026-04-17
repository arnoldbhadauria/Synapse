# 🧠 Synapse

**Synapse** is a lightweight, custom-built Machine Learning library written in C++, designed to give you full control over how neural networks work under the hood.

It is built on top of a custom numerical computation library called **Tensor**, which acts like a minimal NumPy alternative for matrix operations.

---

## 🚀 Why Synapse?

Most ML libraries hide the implementation details. Synapse does the opposite.

It helps you:

* Understand neural networks deeply
* Build everything from scratch
* Experiment with your own ideas freely
* Avoid heavy dependencies

---

## 🧩 Core Features

* 🧱 Layer-based neural network design
* 🔢 Custom matrix operations using Tensor library
* ⚙️ Manual forward propagation
* 🧠 Support for multiple activation functions (planned / partial)
* 🪶 Lightweight and dependency-free

---

## 🏗️ Architecture

### 🔹 Layer Class

Represents a single neural network layer.

* Stores:

  * Weights
  * Biases
  * Activation function type
* Performs:

  * Forward propagation

```cpp
Layer(int n_inputs, int n_neurons, ActivationType activation);
matrix2d forward(matrix inputs);
```

---

### 🔹 Network Class

Represents the full neural network.

* Stores:

  * Multiple layers
* Performs:

  * Prediction (forward pass through all layers)

```cpp
void addLayer(Layer layer);
matrix2d predict(matrix x_inputs);
```

---

## ⚙️ Dependencies

This project depends on your custom **Tensor** library.

Tensor provides:

* Matrix multiplication
* Data transformations (1D → 2D)
* Basic numerical utilities

Make sure Tensor is included properly:

```cpp
#include "Tensor.h"
```

---

## 💡 Example Usage

```cpp
#include "synapse.h"

int main() {
    Network net;

    net.addLayer(Layer(3, 5, Layer::RELU));
    net.addLayer(Layer(5, 2, Layer::SIGMOID));

    matrix input = {1.0, 2.0, 3.0};

    matrix2d output = net.predict(input);

    return 0;
}
```

---

## 🚧 Current Status

⚠️ This is an **early-stage project**

### Implemented:

* Layer structure
* Basic forward pass (partial)
* Network container

### Not yet implemented:

* Backpropagation
* Training loop
* Loss functions
* Full activation support

---

## 🔮 Future Plans

* Add backpropagation support
* Implement optimizers (SGD, Adam)
* Add loss functions (MSE, Cross-Entropy)
* Improve Tensor performance
* GPU acceleration (long-term goal 👀)

---

## 🤔 Why Build This?

Because understanding ML deeply is more powerful than just using it.

Synapse is not meant to replace frameworks like TensorFlow or PyTorch —
it’s meant to help you **think like them**.

---

## 📜 License

Open-source (you can choose MIT or any license you prefer)

---

## 🙌 Contribution

Feel free to:

* Suggest improvements
* Add features
* Optimize code
* Break things and fix them 😄

---

## 🧠 Final Thought

> “If you can build it, you truly understand it.”

