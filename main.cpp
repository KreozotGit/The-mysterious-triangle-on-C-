#include <iostream>
using namespace std;
int main(){
    int ab,bc,ca;
    cout<<"Enter the length of the first side of the triangle: ";
    cin>>ab;
    cout<<"Enter the length of the second side of the triangle: ";
    cin>>bc;
    cout<<"Enter the length of the third side of the triangle: ";
    cin>>ca;
    if(ab>0&&bc>0&&ca>0&&(ab+bc)>ca&&(ab+ca)>bc&&(bc+ca)>ab){
        if(ab==bc&&bc==ca){
            cout<<"The triangle is equilateral.";
        }
        else if(ab==bc||bc==ca||ab==ca){
            cout<<"Isosceles triangle.";
        }
        else{
            cout<<"The triangle is versatile.";
        }
    }
    else{
        cout<<"The triangle does not exist.";
    }
    system("pause>nul");
    return 0;
}