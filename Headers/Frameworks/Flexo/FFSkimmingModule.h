//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, FFContext, FFPlayerModule, NSImage;

__attribute__((visibility("hidden")))
@interface FFSkimmingModule : NSObject
{
    id <FFSkimmingModuleDelegate> m_delegate;
    struct NSObject *m_skimmable;
    FFPlayerModule *m_playerModule;
    FFContext *m_context;
    CALayer *m_skimmingLayer;
    CALayer *m_skimmingLensLayer;
    CDStruct_1b6d18a9 m_layerStartTime;
    double m_layerTimePerPixel;
    CDStruct_1b6d18a9 m_layerSampleDuration;
    BOOL m_useDelegateTimeMapping;
    BOOL m_showVideoThumbnail;
    BOOL m_isSkimmingInViewer;
    CALayer *m_playheadLayer;
    double m_playheadWidth;
    CALayer *m_videoPlayerLayer;
    NSImage *m_skimmingCursorImage;
}

+ (id)newDefaultContextForSkimmable:(struct NSObject *)arg1;
- (void)timeRateChangedForContext:(id)arg1;
- (void)_setPlayheadTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_timeForPoint:(struct CGPoint)arg1;
- (struct CGRect)_rectForTime:(CDStruct_1b6d18a9)arg1;
- (struct NSObject *)skimmable;
- (id)playerModule;
- (void)updateSkimming:(struct CGPoint)arg1;
- (void)updateSkimmingWithSkimmable:(struct NSObject *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)_setSkimmable:(struct NSObject *)arg1 withPoint:(struct CGPoint)arg2 orWithTime:(CDStruct_1b6d18a9)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)_cleanupSkimmingLayer;
- (void)_cleanupSkimming;
- (void)dealloc;
- (id)init;

@end

