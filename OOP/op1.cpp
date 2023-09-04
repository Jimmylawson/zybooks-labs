#include<iostream>

using namespace std;

class Triangle{
    private:
        double height;
        double base;

    public:
        void SetBase(double base) { this->base = base; }
        void SetHeight(double height) { this->height = height; }
        double GetArea() const;
        void PrintInfo() const;

};

double Triangle::GetArea()const{
        return height * base;
}
void Triangle::PrintInfo()const{
        cout << "Triangle with smaller area:" << endl;
        cout << "Base: " << base << endl;
        cout << "Height: " << height << endl;
        cout << "Area: " << GetArea() << endl;
}
int main()
{
        Triangle triangle1;
        Triangle triangle2;
        double base, height;
        double base2,height2;

        cout << "Enter your first num1 &num2: ";
        cin >> base >> height;
        triangle1.SetBase(base);
        triangle1.SetHeight(height);
        cin >> base2>> height2;
        triangle2.SetBase(base2);
        triangle2.SetHeight(height2);

        if(triangle1.GetArea()<triangle2.GetArea()){
            triangle1.PrintInfo();
        }else
            triangle2.PrintInfo();

        return 0;
}