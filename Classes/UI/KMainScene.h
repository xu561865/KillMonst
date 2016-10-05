//
//  KMainScene.h
//  KillMonst
//
//  Created by 徐以 on 10/4/16.
//
//

#ifndef KMainScene_h
#define KMainScene_h

#include <stdio.h>

#include "cocos2d.h"

USING_NS_CC;

class KMainScene : public Layer
{
public:
    CREATE_FUNC(KMainScene);
    
    KMainScene();
    virtual ~KMainScene();
    
    virtual bool init() override;
    virtual void onEnter() override;
    virtual void onExit() override;
    
};

#endif /* KMainScene_h */
