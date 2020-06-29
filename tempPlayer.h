//
// Created by nori on 29.06.20.
//

#ifndef CCPP_EXAM_TEMPPLAYER_H
#define CCPP_EXAM_TEMPPLAYER_H


#include "bjCards.h"
#include "bjHand.h"

class tempPlayer {
private:
    bjHand main;
    bjHand split;

    int chips = 0;

    bool hasSplit = false;

public:
    explicit tempPlayer(int c = 0) : chips(c) {}

    explicit tempPlayer() = default;

    bool canPlayerSplit();

    void splitCards();

    void bet(int min, int max);

    int getChips();

    int getValue(bool checkMain);

    void resetHand();

    bool isBroke(int min);

    void payWinSum(bool checkMain);

    void collectBet(bool checkMain);

    void giveBetBack(bool checkMain);

    void showFirstCard();

    void showAllCards(bool checkMain);

    bool playerHasSplit();

    void givePlayercard(bjCards *card, bool checkMain);
};


#endif //CCPP_EXAM_TEMPPLAYER_H