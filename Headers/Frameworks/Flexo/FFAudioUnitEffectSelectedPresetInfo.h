//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface FFAudioUnitEffectSelectedPresetInfo : NSObject
{
    NSMutableSet *_dirtyStates;
    BOOL _presetHasMenuItem;
}

@property(nonatomic) BOOL presetHasMenuItem; // @synthesize presetHasMenuItem=_presetHasMenuItem;
@property(readonly, nonatomic) NSSet *dirtyStates; // @synthesize dirtyStates=_dirtyStates;
- (void)addDirtyState:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end

