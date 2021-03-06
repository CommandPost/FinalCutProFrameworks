//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class FFProStoryTimelinePresentation;

@interface FFToggleOrganizeByRoleOperation : NSOperation
{
    FFProStoryTimelinePresentation *_storyPresentation;
    long long _nextMode;
}

@property(nonatomic) long long nextMode; // @synthesize nextMode=_nextMode;
@property(retain, nonatomic) FFProStoryTimelinePresentation *storyPresentation; // @synthesize storyPresentation=_storyPresentation;
- (void)main;
- (void)dealloc;
- (id)initWithStoryPresentation:(id)arg1 nextOrganizedMode:(long long)arg2;
- (id)init;

@end

