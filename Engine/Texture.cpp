#include "Texture.h"
#include "ChiliWin.h"


Texture::Texture(std::string filename)
{
	std::ifstream file(filename, std::ios::binary);
	BITMAPFILEHEADER bmfileHeader;
	file.read(reinterpret_cast<char*>(&bmfileHeader), sizeof(BITMAPFILEHEADER));
	BITMAPINFOHEADER bmInfo;
	file.read(reinterpret_cast<char*>(&bmInfo), sizeof(BITMAPINFOHEADER));

	file.seekg(bmfileHeader.bfOffBits, std::ios::beg);
	file.get();
	assert(bmInfo.biWidth > 0 && bmInfo.biHeight > 0);
	width = bmInfo.biWidth;
	height = bmInfo.biHeight;
	int Padding = (4 - (width * 3) % 4) % 4;
	pPixels = new Color[width*height];
	for (int i = height-1; i >=0; i--)
	{
		for (int j = 0; j <width; j++)
		{
			PutPixel({ j,i }, Color(file.get(), file.get(), file.get()));
		}
		file.seekg(Padding, std::ios::cur);
	}
}

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
