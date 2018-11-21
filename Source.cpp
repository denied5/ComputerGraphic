#include "tgaimage.h"
TGAColor RED(255, 0, 50, 40);
int main(int argc, char** argv) {
	TGAImage image(200,200,TGAImage::RGBA);
	image.set(100, 50, RED);
	image.write_tga_file("image.tga");
}