//
//  MapNode.h
//  KillMonst
//
//  Created by 徐以 on 10/5/16.
//
//

#ifndef MapNode_h
#define MapNode_h

#include "cocos2d.h"

USING_NS_CC;

class MapNode : public Node
{
public:
    MapNode();
    virtual ~MapNode();
    
    virtual bool init() override;
    virtual void onEnter() override;
    virtual void onExit() override;
    
};

#endif /* MapNode_h */
