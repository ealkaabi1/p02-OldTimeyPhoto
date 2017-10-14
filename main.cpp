//Eisa Alkaabi
//CSCI 111
//p02-OldTimeyPhoto

#include <vector>
#include <iostream>
#include "bitmap.h"

using namespace std;

int main()
{
  Bitmap image;
  vector <vector <Pixel> > bmp;
  string file;

  do
  {
    cout << "Filename: ";
    getline(cin, file);
    image.open(file);

    if (image.isImage() == false)
    {
      cout << "\nThe file must be a valid 24 bit depth Windows BMP image file." << endl;
      cout << "Please try another filename.\n" << endl;
    }
  } while (image.isImage() == false);

  bmp = image.toPixelMatrix();

  cout << file << " has been loaded. It is " << bmp[0].size() << " pixels "
    << "wide and " << bmp.size() << " high" << endl;

  cout << "Converting to grayscale........" << endl;

  for (int i = 0; i < bmp.size(); i++)
  {
    for (int j = 0; j < bmp[i].size(); j++)
    {
      // still need work this out
    }
  }


  // overwrite the current bitmap with the pixel matrix
  image.fromPixelMatrix(bmp);

  // save the file as oldtimey.bmp
  image.save("oldtimey.bmp");

  cout << "Done." << endl;

  return 0;
}
