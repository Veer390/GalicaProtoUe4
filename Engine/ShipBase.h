#pragma once
#include "Vec2.h"
#include "Colors.h"
#include "Rect.h"
#include "Texture.h"
#include "WeaponBase.h"
#include "Input.h"
#include "TaggingSystem.h"
#include <string>


class ShipBase
{
private:
	Texture tex;
	RectI colission;
	double hp;
	
	Weapon Wp;
	Input obj;

	double attack;
	double defense;
	double MagicPoints;
	
	Tag tag;
	Tag tagExtra;
protected:
	ShipBase(std::string TEXTURE,RectI CollisionBox,
		     double hp,double attack,double defense,
		     double MagicPoints);
	ShipBase(std::string TEXTURE, RectI CollisionBox,Weapon Wp, 
		     double hp, double attack, double defense, 
		     double MagicPoints);
	
	//Same Constructors With Added Tag Extra Parameter..

	ShipBase(std::string TEXTURE, RectI CollisionBox,
		double hp, double attack, double defense,
		double MagicPoints,Tag tagExtra);
	ShipBase(std::string TEXTURE, RectI CollisionBox, Weapon Wp,
		double hp, double attack, double defense,
		double MagicPoints, Tag tagExtra);



};
