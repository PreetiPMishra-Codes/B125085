#include <iostream>
using namespace std;

class Image {
protected:
    int w,h;
public:
    Image(int a,int b) : w(a),h(b) {}
};

class CompressedImage : public Image {
protected:
    float ratio;
public:
    CompressedImage(int a,int b,float r) : Image(a,b),ratio(r) {}
};

class EncryptedImage : public CompressedImage {
    string algo;
public:
    EncryptedImage(int a,int b,float r,string s) : CompressedImage(a,b,r),algo(s) {}
    void display() {
        cout<<"Original pixels: "<<w*h
            <<"\nEffective size: "<<w*h*ratio/100
            <<"\nAlgorithm: "<<algo;
    }
};

int main() {
    int w,h;
    float r;
    string s;
    cout<<"Enter width, height, compression ratio and algorithm: ";
    cin>>w>>h>>r>>s;
    EncryptedImage img(w,h,r,s);
    img.display();
}
