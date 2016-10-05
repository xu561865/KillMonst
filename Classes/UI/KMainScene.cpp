//
//  KMainScene.cpp
//  KillMonst
//
//  Created by 徐以 on 10/4/16.
//
//

#include "KMainScene.h"

KMainScene::KMainScene()
{
    
}

KMainScene::~KMainScene()
{
    
}

bool KMainScene::init()
{
    if(!Layer::init())
    {
        return false;
    }
    
    return true;
}

void KMainScene::onEnter()
{
    Layer::onEnter();
}

void KMainScene::onExit()
{
    Layer::onExit();
}
