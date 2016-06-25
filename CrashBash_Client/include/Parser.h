#include "iostream"
#include "string"
#include "Input.h"
#include "vector"
#include "GiftBox.h"
#include "NormalBox.h"
#include "TntBox.h"
#include "Player.h"

using namespace std;


class Parser
{
    public:
        Parser();
        virtual ~Parser();

        string Code();
        void deCode();
        vector <NormalBox*> normalBoxVector;
        vector <TntBox*> tntBoxVector;
        vector <GiftBox*> giftBoxVector;
        vector <Player*> playerVector;
        Input Input;
        int giftBoxNum;
        int tntBoxNum;
        int normalBoxNum;

    private:
        string wModel;
};


