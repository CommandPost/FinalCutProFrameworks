//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/TLKAccessibilityLayer.h>

#import "TLKAccessibilityProtocol.h"
#import "TLKPartInfo.h"

@class NSString, TLKThemeBackedLayer;

@interface TLKPlayheadMarker : TLKAccessibilityLayer <TLKPartInfo, TLKAccessibilityProtocol>
{
    TLKThemeBackedLayer *_head;
    TLKThemeBackedLayer *_body;
    long long _playheadState;
    struct {
        unsigned int skimmingPlayhead:1;
        unsigned int skimming:1;
        unsigned int snapped:1;
        unsigned int isPlaying:1;
        unsigned int reserved:28;
    } _pmFlags;
}

- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityDescription;
- (id)accessibilityRole;
- (struct CGRect)accessibilityRect;
- (struct CGRect)elementFrame;
@property BOOL snapped;
@property BOOL skimming;
@property BOOL skimmingPlayhead;
@property long long playheadState;
@property BOOL playing;
- (id)hitTest:(struct CGPoint)arg1;
- (id)subpartAtPoint:(struct CGPoint)arg1;
- (id)partIdentifier;
- (void)layoutSublayers;
- (struct CGRect)playheadFrame;
- (void)setPosition:(struct CGPoint)arg1;
- (id)init;
- (void)updatePlayhead;
- (void)setDelegate:(id)arg1;
- (id)timelineView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

