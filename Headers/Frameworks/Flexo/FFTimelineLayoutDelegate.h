//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TLKLayoutManagerDelegate.h"

@class FFStoryTimelinePresentation, NSString;

__attribute__((visibility("hidden")))
@interface FFTimelineLayoutDelegate : NSObject <TLKLayoutManagerDelegate>
{
    FFStoryTimelinePresentation *_storyPresentation;
}

@property(retain, nonatomic) FFStoryTimelinePresentation *storyPresentation; // @synthesize storyPresentation=_storyPresentation;
- (double)layoutManager:(id)arg1 heightForItemComponent:(id)arg2 proposedHeight:(double)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

