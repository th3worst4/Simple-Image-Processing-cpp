#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <typeinfo>
#include <sstream>

using namespace std;

void ppm_convert(ifstream* sourcefile){
    ofstream outputfile("..\\sampleFiles\\test.jpg", ios::binary);

    string type, w, h, rgb;
    *sourcefile >> type >> w >> h >> rgb;

    vector<unsigned char> buffer(istreambuf_iterator<char>(*sourcefile), {});

    for(int i=0; i<20; i++){
        cout<<buffer[i]<<endl;
    }
  
    /*copy( 
        istreambuf_iterator<char>(*sourcefile), 
        istreambuf_iterator<char>( ),
        ostreambuf_iterator<char>(outputfile));*/

}

int main(){
    ifstream image("..\\sampleFiles\\sample1.ppm", ios::binary);
      
    ppm_convert(&image);

    return 0;
}