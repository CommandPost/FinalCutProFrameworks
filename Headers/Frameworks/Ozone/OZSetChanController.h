//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZChooseChanController.h>

@class NSTextField;

@interface OZSetChanController : OZChooseChanController
{
    NSTextField *_pTF;
    struct list<OZSingleChannelBehavior *, std::__1::allocator<OZSingleChannelBehavior *>> *_pSingleChanBHs;
}

- (id)getStringForExcludeFlags:(unsigned int)arg1;
- (void)setChannelCB:(id)arg1;
- (void)delayedAction:(id)arg1;
- (void)addToMenu:(id)arg1 forCompoundChannel:(struct OZCompoundChannel *)arg2;
- (BOOL)shouldIgnoreChannel:(struct OZChannelBase *)arg1;
- (BOOL)shouldIgnoreSubchannels:(struct OZChannelFolder *)arg1;
- (struct OZObjectManipulator *)appliedToObject;
- (struct OZDocument *)document;
- (void)disable;
- (void)enable;
- (void)update;
- (void)dealloc;
- (id)initWithBehaviors:(list_64b41211 *)arg1 context:(id)arg2;

@end

