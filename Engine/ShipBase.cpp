#include "ShipBase.h"

ShipBase::ShipBase(std::string TEXTURE, RectI CollisionBox, double hp, double attack, double defense, double MagicPoints)
	:
	tex(TEXTURE),
	colission(CollisionBox),
	hp(hp),
	attack(attack),
	defense(defense),
	MagicPoints(MagicPoints)
{}//constructor 1

ShipBase::ShipBase(std::string TEXTURE, RectI CollisionBox, Weapon Wp, double hp, double attack, double defense, double MagicPoints)
	:
	tex(TEXTURE),
	colission(CollisionBox),
	Wp(Wp),
	hp(hp),
	attack(attack),
	defense(defense),
	MagicPoints(MagicPoints)
{}//constructor 2

//Constructors With Tags

ShipBase::ShipBase(std::string TEXTURE, RectI CollisionBox, double hp, double attack, double defense, double MagicPoints, Tag tagExtra)
	:
	tex(TEXTURE),
	colission(CollisionBox),
	hp(hp),
	attack(attack),
	defense(defense),
	MagicPoints(MagicPoints),
	tag(tagExtra)
{}//first Constructor with tag parameter extra

ShipBase::ShipBase(std::string TEXTURE, RectI CollisionBox, Weapon Wp, double hp, double attack, double defense, double MagicPoints, Tag tagExtra)
	:
	tex(TEXTURE),
	colission(CollisionBox),
	Wp(Wp),
	hp(hp),
	attack(attack),
	defense(defense),
	MagicPoints(MagicPoints),
	tag(tagExtra)
{}//Second Constructor With Tag Parameter Extra







