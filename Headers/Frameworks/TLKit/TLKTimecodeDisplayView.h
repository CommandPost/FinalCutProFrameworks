//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class LKTextField, LKTimecodeFormatter, NSDate, NSTimer, TLKDelegateProxy;

@interface TLKTimecodeDisplayView : NSView
{
    LKTextField *_timecodeTextField;
    struct CGSize _size;
    struct CGRect _alignmentRect;
    int _type;
    int _mode;
    int _editingMode;
    BOOL _displaysSubframes;
    TLKDelegateProxy *_delegateProxy;
    LKTimecodeFormatter *_timecodeFormatter;
    NSTimer *_deferredUpdatesTimer;
    NSDate *_lastUpdateTime;
    CDStruct_1b6d18a9 _time;
    CDStruct_1b6d18a9 _deltaTime;
}

+ (id)_imageNameForFacetWithPartID:(long long)arg1 editingMode:(int)arg2;
+ (id)_imageNameForType:(int)arg1 editingMode:(int)arg2;
@property(copy, nonatomic) NSDate *lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) NSTimer *deferredUpdatesTimer; // @synthesize deferredUpdatesTimer=_deferredUpdatesTimer;
@property(nonatomic) BOOL displaysSubframes; // @synthesize displaysSubframes=_displaysSubframes;
@property(nonatomic) CDStruct_1b6d18a9 deltaTime; // @synthesize deltaTime=_deltaTime;
@property(nonatomic) CDStruct_1b6d18a9 time; // @synthesize time=_time;
@property(retain, nonatomic) LKTimecodeFormatter *timecodeFormatter; // @synthesize timecodeFormatter=_timecodeFormatter;
@property(nonatomic) TLKDelegateProxy *delegateProxy; // @synthesize delegateProxy=_delegateProxy;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawCalloutBelow;
- (void)drawCalloutAbove;
- (void)drawCalloutCentered;
- (id)imageForFacetWithPartID:(long long)arg1;
- (void)dealloc;
- (id)init;
- (void)_updateContents;
- (void)_handleDeferredUpdatesTimer:(id)arg1;
- (void)displayTime:(CDStruct_1b6d18a9)arg1 deltaTime:(CDStruct_1b6d18a9)arg2 type:(unsigned long long)arg3 mode:(unsigned long long)arg4 subframes:(BOOL)arg5 inRect:(struct CGRect)arg6;
- (id)_stringFromTime:(CDStruct_1b6d18a9)arg1 displaySubframes:(BOOL)arg2 displaySign:(BOOL)arg3;
- (void)reload;
- (void)setAlignment:(long long)arg1;
- (void)setTextColor:(int)arg1;
- (id)attributedStringValue;
- (id)stringValue;
- (void)setDuration:(id)arg1 delta:(id)arg2;
- (void)setAttributedStringValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setLocation:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
@property(nonatomic) int mode;
@property(nonatomic) int type;
- (void)_updateMargins:(BOOL)arg1;
- (id)_imageForType:(int)arg1;
- (BOOL)_isCallout:(int)arg1;
@property(nonatomic) int editingMode;
- (void)setHidden:(BOOL)arg1;

@end

