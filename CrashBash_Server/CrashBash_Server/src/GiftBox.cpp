#include "GiftBox.h"

GiftBox::GiftBox(int x,int y):Box(x,y)
{
    giftType=rand()%4;

    //ctor
}

GiftBox::~GiftBox()
{
    //dtor
}

int GiftBox::giftType()
{
    return this->giftType;
    ///ali to bayad ino begiri bad if bezani k befahmi b oon player chio ezafe koni
}

bool GiftBox::checkCollisionToPlayer()
{

}
