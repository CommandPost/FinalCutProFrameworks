//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZAutoObjectTabController.h>

@class NSMutableArray, OZCreateWidgetCtlr;

@interface OZRigInspectorController : OZAutoObjectTabController
{
    struct OZRig *_pRig;
    OZCreateWidgetCtlr *_pCreateWidgetCtlr;
    NSMutableArray *_widgetControllers;
}

- (id)initWithSceneNodes:(list_699e9227 *)arg1 viewCtlrDelegate:(id)arg2;
- (struct OZChannelFolder *)getRootChan:(struct OZSceneNode *)arg1;
- (BOOL)buildUIWithSceneNodes:(list_699e9227 *)arg1 context:(id)arg2;
- (void)buildUI:(id)arg1;
- (void)notify:(unsigned int)arg1;
- (void)dealloc;

@end

