//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZAutoObjectTabController.h>

@class OZProjCtlrDelegate;

@interface OZProjectDARCtlr : OZAutoObjectTabController
{
    struct OZScene *_pScene;
    BOOL _isInMotion;
    OZProjCtlrDelegate *_pProjDelegate;
    struct OZProjectNode *_pProjectNode;
}

- (BOOL)buildUIWithSceneNodes:(list_d81b4758 *)arg1 context:(id)arg2;

@end

