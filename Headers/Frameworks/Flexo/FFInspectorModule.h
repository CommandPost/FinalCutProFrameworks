//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKInspector.h"

@class FFContext;

@interface FFInspectorModule : LKInspector
{
    FFContext *_context;
    BOOL _readLockHeldOnItems;
    CDStruct_1b6d18a9 _cachedContextTimeForUpdate;
    id _cachedContextContainerForUpdate;
}

+ (id)iconForItems:(id)arg1;
@property(retain, nonatomic) id cachedContextContainerForUpdate; // @synthesize cachedContextContainerForUpdate=_cachedContextContainerForUpdate;
@property(nonatomic) CDStruct_1b6d18a9 cachedContextTimeForUpdate; // @synthesize cachedContextTimeForUpdate=_cachedContextTimeForUpdate;
@property(nonatomic) BOOL readLockHeldOnItems; // @synthesize readLockHeldOnItems=_readLockHeldOnItems;
@property(retain, nonatomic) FFContext *context; // @synthesize context=_context;
- (BOOL)shouldDisplayModuleWithItems:(id)arg1;
- (id)getCurrentSelectedColorEffectFromCurrentItems:(id)arg1;
- (id)getCurrentSelectedEffectFromCurrentItems:(id)arg1 needToCreateDummy:(char *)arg2 moreThanOnePossibleColorEffectStack:(char *)arg3;
- (id)firstSelectedColorEffect:(id)arg1;
- (id)_videoEffectsForItem:(id)arg1;
- (void)setModuleInUpdateModeWith:(BOOL)arg1 contextTimeForUpdate:(CDStruct_1b6d18a9)arg2 contextContainerForUpdate:(id)arg3;
- (id)inspectedItem;
- (void)dealloc;

@end

