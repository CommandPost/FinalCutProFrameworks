//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFInspectorControllerSegmentedInsertionDrawing-Protocol.h>

@class NSColor, NSString;

__attribute__((visibility("hidden")))
@interface FFInspectorControllerInsertionLineDrawer : NSObject <FFInspectorControllerSegmentedInsertionDrawing>
{
    NSColor *_lineColor;
    double _lineWidth;
    double _horizontalInset;
    double _yOffset;
    unsigned long long _insertionIndex;
    BOOL _needsNewLayer;
}

@property(nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(nonatomic) double horizontalInset; // @synthesize horizontalInset=_horizontalInset;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) NSColor *lineColor; // @synthesize lineColor=_lineColor;
- (void)setInsertionIndex:(unsigned long long)arg1;
- (id)layerForDrawSegment:(id)arg1;
- (BOOL)hasSegmentedDrawing;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

