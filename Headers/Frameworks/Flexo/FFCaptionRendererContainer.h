//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptionRenderer;

__attribute__((visibility("hidden")))
@interface FFCaptionRendererContainer : NSObject
{
    AVCaptionRenderer *_renderer;
    CDStruct_1b6d18a9 _sequenceFrameDuration;
    CDStruct_e83c9415 _timeRange;
}

@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) CDStruct_1b6d18a9 sequenceFrameDuration; // @synthesize sequenceFrameDuration=_sequenceFrameDuration;
@property(retain, nonatomic) AVCaptionRenderer *renderer; // @synthesize renderer=_renderer;
- (void)renderInContext:(struct CGContext *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (void)setCaptions:(id)arg1;
- (id)captions;
- (id)description;
- (void)dealloc;
- (id)init;

@end

