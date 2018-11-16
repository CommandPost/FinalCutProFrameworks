//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewCtlrRoot.h"

@class LKScrollView, NSView;

@interface OZAutoInspectorController : OZViewCtlrRoot
{
    NSView *_pMainView;
    LKScrollView *_pScrollView;
    BOOL _isRoot;
    id *_pViewCtlrDelegate;
}

- (void)animView:(id)arg1 setFrameSize:(struct CGSize)arg2;
- (void)animView:(id)arg1 setFrameOrigin:(struct CGPoint)arg2;
- (void)animView:(id)arg1 setHidden:(BOOL)arg2;
- (struct OZChannelFolder *)getRootChan:(struct OZSceneNode *)arg1;
- (void)scrollToChannel:(struct OZChannelBase *)arg1;
- (void)resizeColumnsLabelWidth:(float)arg1 paramWidth:(float)arg2;
- (id)mainView;
- (BOOL)buildUIWithSceneNodes:(list_1192f13f *)arg1 context:(id)arg2;
- (void)buildUI:(struct OZSceneNode *)arg1 context:(id)arg2;
- (void)didBuildUI;
- (void)dealloc;
- (id)initWithSceneNodes:(list_1192f13f *)arg1 viewCtlrDelegate:(id)arg2 context:(id)arg3;
- (id)initWithSceneNodes:(list_1192f13f *)arg1 viewCtlrDelegate:(id)arg2;
- (id)initWithSceneNodes:(list_1192f13f *)arg1;
- (id)initWithNode:(struct OZSceneNode *)arg1 viewCtlrDelegate:(id)arg2 context:(id)arg3;
- (id)initWithNode:(struct OZSceneNode *)arg1;
- (void)commonInit;

@end

