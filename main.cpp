#include "includes/image.h"

int main(int agrc, char** argv){
    Image test("sampleFiles/sample1.jpg");
    test.write("output/new.png");
    //Image copy = test;

    return 0;
}