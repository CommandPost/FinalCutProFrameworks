//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface FFDetermineCaptionFormatsInUseOperationMultiple : NSObject
{
    NSArray *_sources;
}

@property(copy, nonatomic) NSArray *sources; // @synthesize sources=_sources;
- (id)captionFormatsInUseWithSource:(id)arg1;
- (id)unsortedCaptionFormatsInUse;
- (id)captionFormatsInUse;
- (void)dealloc;

@end

