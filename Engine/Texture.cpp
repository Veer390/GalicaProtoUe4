#include "Texture.h"

void Texture::PutPixel(vector loc, Color c)
{
	pPixels[width*loc.y + loc.x] = c;

}

Color Texture::GetPixel(vector loc)
{
	return pPixels[width*loc.y + loc.x];
}

int Texture::GetWidth()
{
	return width;
}

int Texture::GetHeight()
{
	return height;
}
