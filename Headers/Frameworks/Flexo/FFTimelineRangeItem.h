//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFTimelineComponentProxy;

__attribute__((visibility("hidden")))
@interface FFTimelineRangeItem : NSObject
{
    void *_leadingKeyframe;
    void *_trailingKeyframe;
    CDStruct_e83c9415 _timeRange;
    BOOL _enabled;
    CDStruct_e83c9415 _leadingFadeRange;
    void *_leadingFadeKeyframe;
    unsigned int _leadingFadeInterpolation;
    CDStruct_e83c9415 _trailingFadeRange;
    void *_trailingFadeKeyframe;
    unsigned int _trailingFadeInterpolation;
    FFTimelineComponentProxy *_proxy;
}

@property(nonatomic) unsigned int trailingFadeInterpolation; // @synthesize trailingFadeInterpolation=_trailingFadeInterpolation;
@property(nonatomic) CDStruct_e83c9415 trailingFadeRange; // @synthesize trailingFadeRange=_trailingFadeRange;
@property(nonatomic) void *trailingFadeKeyframe; // @synthesize trailingFadeKeyframe=_trailingFadeKeyframe;
@property(nonatomic) unsigned int leadingFadeInterpolation; // @synthesize leadingFadeInterpolation=_leadingFadeInterpolation;
@property(nonatomic) CDStruct_e83c9415 leadingFadeRange; // @synthesize leadingFadeRange=_leadingFadeRange;
@property(nonatomic) void *leadingFadeKeyframe; // @synthesize leadingFadeKeyframe=_leadingFadeKeyframe;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) void *trailingKeyframe; // @synthesize trailingKeyframe=_trailingKeyframe;
@property(nonatomic) void *leadingKeyframe; // @synthesize leadingKeyframe=_leadingKeyframe;
@property(nonatomic) FFTimelineComponentProxy *proxy; // @synthesize proxy=_proxy;
- (id)description;

@end

