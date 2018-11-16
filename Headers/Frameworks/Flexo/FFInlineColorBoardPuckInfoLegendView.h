//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class FFInlineColorBoardInspectorController;

__attribute__((visibility("hidden")))
@interface FFInlineColorBoardPuckInfoLegendView : NSView
{
    int _puckType;
    FFInlineColorBoardInspectorController *_ctr;
    struct CGPoint _normalizedPoint;
}

@property(nonatomic) struct CGPoint normalizedPoint; // @synthesize normalizedPoint=_normalizedPoint;
@property __weak FFInlineColorBoardInspectorController *controller; // @synthesize controller=_ctr;
- (void)drawNegativeMarkerAtCenterPt:(struct CGPoint)arg1 forNormalizedPt:(struct CGPoint)arg2;
- (void)drawColorAsLegendImageForNormalizedPt:(struct CGPoint)arg1 yBoardPercentage:(long long)arg2;
- (void)drawPlaceholderAsLegendImage:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)legendImageForPuckType:(int)arg1;
- (void)setPuckType:(int)arg1;
- (int)puckType;

@end

