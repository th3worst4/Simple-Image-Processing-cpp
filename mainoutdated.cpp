#include <iostream>
#include <fstream>

#include <sstream>

using namespace std;

int main(){
    
    ifstream image;
    ofstream newimage;

    image.open("..\\sampleFiles\\sample1.ppm");
    newimage.open("..\\output\\newimage.ppm");

    string type, w, h, rgb;

    image >> type;
    image >> w;
    image >> h;
    image >> rgb;

    newimage << type << endl << w << " " << h << endl << rgb << endl;

    string r, g, b;
    int red, green, blue;
    
    while(!image.eof()){
        image >> r;
        image >> g;
        image >> b;
        
        stringstream redstream(r);
        stringstream greenstream(g);
        stringstream bluestream(b);

        redstream >> red;
        greenstream >> green;
        bluestream >> blue;

        //cout << red << green << blue << endl;

        int gray = (red * 0.299 + green * 0.587 + blue * 0.114);

        newimage << gray << " " << gray << " " << gray << endl;

    }

    //cout << type << " " << w << " " << h << " " << rgb << endl; 

    image.close();
    newimage.close();

    return 0;
}