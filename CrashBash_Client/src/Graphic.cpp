#include "Graphic.h"

Graphic::Graphic():width(1300),height(973),window(sf::VideoMode(width, height), "CrashBash"), surface(width,height)
{
}

Graphic::~Graphic()
{
}

void Graphic::showSurface()
{
    window.draw(surface.show());
}

void Graphic::showNormalBoxes(NormalBox* normalBoxObj)
{
    this->normalbox=normalBoxObj;
    window.draw(normalbox->show());
}

void Graphic::showTntBoxes(TntBox* tntBoxObj)
{
    this->tntbox=tntBoxObj;
    window.draw(tntbox->show());
}

void Graphic::showGiftBoxes(GiftBox* giftBoxObj)
{
    this->giftbox=giftBoxObj;
    window.draw(giftbox->show());
}

void Graphic::showPlayers(Player* playerObj)
{
    this->player=playerObj;
    window.draw(player->show());
}

void Graphic::showPlayersHealth()
{
   /// return player->
}
