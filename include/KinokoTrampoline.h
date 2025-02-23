#pragma once

#include "syati.h"

class KinokoTrampoline : public RailMoveObj {
public:
    KinokoTrampoline(const char *);
    ~KinokoTrampoline();
    virtual void init (const JMapInfoIter &);
    virtual void control();
    virtual bool receiveOtherMsg(u32 msg, HitSensor *pSender, HitSensor *pReceiver);
    
    void activate();
    void deactivate();
    bool isActive();

    u32 _D8;
    u32 _DC;
    CollisionParts *mBounceCollision; // _E0
    CollisionParts *mIdleCollision; // _E4
};