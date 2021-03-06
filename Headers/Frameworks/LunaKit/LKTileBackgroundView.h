//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class LKTile;

@interface LKTileBackgroundView : NSView
{
    LKTile *_tile;
}

- (void)updateSpacing;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setTile:(id)arg1;
- (id)tile;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (unsigned long long)autoresizingMask;
- (void)dealloc;
- (id)initWithTile:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;

@end

