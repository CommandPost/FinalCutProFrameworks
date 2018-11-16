//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCell.h"

#import "NSCopying.h"

@class LKButtonCell, NSView;

@interface OZLayerLockStatusCell : NSCell <NSCopying>
{
    LKButtonCell *_linkButton;
    LKButtonCell *_freezeButton;
    LKButtonCell *_3DButton;
    LKButtonCell *_lockButton;
    NSView *_controlView;
    long long _trackingRow;
    long long _trackingColumn;
}

- (long long)pointInButton:(struct CGRect)arg1 inView:(id)arg2 event:(id)arg3;
- (void)changeButtonValue:(id)arg1;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)buttonCellRect:(struct CGRect)arg1 atIndex:(long long)arg2;
- (void)setEnabledValues:(unsigned int)arg1;
- (void)setStateValues:(unsigned int)arg1;
- (void)setTransparentValues:(unsigned int)arg1;
- (void)setControlView:(id)arg1;
- (id)controlView;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initTextCell:(id)arg1;

@end

