//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFBackgroundTask.h>

@class NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface FFBackgroundAnalysisTask : FFBackgroundTask
{
    NSSet *_assetsInUse;
    NSMutableDictionary *_options;
}

@property(readonly, nonatomic) NSMutableDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) NSSet *assetsInUse; // @synthesize assetsInUse=_assetsInUse;
- (void)dealloc;
- (id)initWithDisplayName:(id)arg1 assets:(id)arg2 options:(id)arg3 taskBlock:(CDUnknownBlockType)arg4;

@end

