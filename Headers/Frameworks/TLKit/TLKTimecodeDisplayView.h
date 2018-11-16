//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class LKTextField;

@interface TLKTimecodeDisplayView : NSView
{
    LKTextField *_timecodeTextField;
    struct CGSize _size;
    struct CGRect _alignmentRect;
    struct CGRect _edgeRect;
    int _type;
    int _mode;
}

- (id)timelineView;
- (struct CGRect)visibleRect;
- (BOOL)isCallout:(int)arg1;
- (id)_facetForType:(int)arg1;
- (void)_updateMargins:(BOOL)arg1;
@property int type;
@property int mode;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setLocation:(struct CGRect)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)setTextColor:(int)arg1;
- (void)setAlignment:(unsigned long long)arg1;
- (void)reload;
- (id)init;
- (void)drawCalloutAbove;
- (void)drawCalloutBelow;
- (void)drawRect:(struct CGRect)arg1;

@end
