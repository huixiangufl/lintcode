/**
 * Your object will be instantiated and called as such:
 * ShapeFactory* sf = new ShapeFactory();
 * Shape* shape = sf->getShape(shapeType);
 * shape->draw();
 */
class Shape {
public:
    virtual void draw() const=0;
};

class Rectangle: public Shape {
public:
    void draw() const {
        cout << " ----" << endl;
        cout << "|    |" << endl;
        cout << " ----" << endl;
    }
};

class Square: public Shape {
public:
    void draw() const {
        cout << " ----" << endl;
        cout << "|    |" << endl;
        cout << "|    |" << endl;
        cout << " ----" << endl;
    }
};

class Triangle: public Shape {
public:
    void draw() const {
        cout << "  /\\" << endl;
        cout << " /  \\" << endl;
        cout << "/____\\" << endl;
    }
    
};

class ShapeFactory {
public:
    /**
     * @param shapeType a string
     * @return Get object of type Shape
     */
    Shape* getShape(string& shapeType) {
        Shape * p = NULL;
        if (shapeType == "Rectangle") {
             p = new Rectangle();
        } else if (shapeType == "Square") {
             p = new Square();
        } else if (shapeType == "Triangle") {
             p = new Triangle();
        }
        return p;
    }
};
