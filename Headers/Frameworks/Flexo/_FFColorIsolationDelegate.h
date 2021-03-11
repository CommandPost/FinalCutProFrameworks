//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFColorSelectionOSCDelegate-Protocol.h>

@class FFEffectStack, FFMaskBase, NSString;

__attribute__((visibility("hidden")))
@interface _FFColorIsolationDelegate : NSObject <FFColorSelectionOSCDelegate>
{
    FFEffectStack *_effectStack;
    FFMaskBase *_mask;
}

+ (id)sharedDelegate;
@property(nonatomic) FFMaskBase *mask; // @synthesize mask=_mask;
@property(nonatomic) FFEffectStack *effectStack; // @synthesize effectStack=_effectStack;
@property(readonly, getter=wantsSaturatedResult) BOOL wantsSaturatedResult;
- (int)HDRDelinearizedForWorkingSpace:(int)arg1;
- (long long)colorSelectionOSCSampleModel;
- (id)effect;
- (long long)effectCountForReference;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

