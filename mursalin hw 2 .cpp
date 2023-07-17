#include <iostream>

class Tree {
private:
    int width;
    int height;

public:
    Tree(int w, int h) {
        width = w;
        height = h;
        std::cout << "Tree object created." << std::endl;
    }

    ~Tree() {
        std::cout << "Tree object destroyed." << std::endl;
    }

    void set(int w, int h) {
        width = w;
        height = h;
    }

    void display() {
        std::cout << "Tree width: " << width << std::endl;
        std::cout << "Tree height: " << height << std::endl;
    }
};

int main() {
    Tree myTree(10, 15);
    myTree.display();

    return 0;
}
