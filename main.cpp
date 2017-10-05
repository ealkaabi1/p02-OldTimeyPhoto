#include <vector>
#include <iostream>
#include "bitmap.h"

using namespace std;

int main()
{
  Bitmap image;
  vector <vector <Pixel> > bmp;
  Pixel rgb;
  string file = "machupicchu.bmp";

  image.open(file);
  bmp = image.toPixelMatrix();

  cout << file << " has been loaded. It is " << bmp[0].size() << " pixels "
    << "wide and " << bmp.size() << " high" << endl;

  return 0;
}
