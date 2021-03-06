//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSImageView.h>

@class NSArray, NSImage, NSView;

__attribute__((visibility("hidden")))
@interface FFAudioSurroundPannerView : NSImageView
{
    float m_dishRadius;
    struct CGPoint m_dishCenter;
    struct CGPoint m_currentPuckPosition;
    struct CGRect m_dishBounds;
    struct CGRect m_puckBounds;
    struct CGPoint m_clickedPuckPosition;
    NSImage *m_surroundDishImage;
    NSImage *m_surroundPuckWellImage;
    NSImage *m_surroundPuckImage;
    BOOL m_movePuckOnSingleClick;
    BOOL m_showHUDOnDoubleClick;
    BOOL m_useLargeSpeakerImages;
    BOOL m_trackingThresholdExceeded;
    struct CGPoint m_clickedPoint;
    id m_visualDatasource;
    NSArray *m_speakerViews;
    NSImageView *m_speakerViewL;
    NSImageView *m_speakerViewC;
    NSImageView *m_speakerViewR;
    NSImageView *m_speakerViewLS;
    NSImageView *m_speakerViewRS;
    NSView *m_dishPlaceholder;
    BOOL m_isTouchingDish;
}

- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)snapPointToSpeaker:(struct CGPoint *)arg1;
- (void)_calculateDishSize;
- (id)_imageForSpeaker:(int)arg1 forBias:(int)arg2 disabled:(BOOL)arg3;
- (void)setBias:(int)arg1 forSpeaker:(int)arg2;
- (void)setVisualDatasource:(id)arg1;
- (void)setShowHUDOnDoubleClick:(BOOL)arg1;
- (void)setMovePuckOnSingleClick:(BOOL)arg1;
- (void)setPuckBounds:(struct CGRect)arg1;
- (void)setDishBounds:(struct CGRect)arg1;
- (void)setDishImage:(id)arg1;
- (void)setPuckWellImage:(id)arg1;
- (void)setPuckImage:(id)arg1;
- (float)angleInDegreesForPosition:(struct CGPoint)arg1;
- (float)angleForCurrentPuckPosition;
- (float)rValueForPosition:(struct CGPoint)arg1;
- (float)rValueForCurrentPuckPosition;
- (void)setCurrentPuckYPosition:(float)arg1;
- (float)currentPuckYPosition;
- (void)setCurrentPuckXPosition:(float)arg1;
- (float)currentPuckXPosition;
- (void)setCurrentPuckPosition:(struct CGPoint)arg1;
- (struct CGPoint)currentPuckPosition;
- (void)setPanToCentered:(id)arg1;
- (struct CGPoint)convertPointToUnitDish:(struct CGPoint)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_dishTouched:(BOOL)arg1;
- (BOOL)pointInDish:(struct CGPoint)arg1;
- (void)trackPuck:(id)arg1;
- (BOOL)crossedTrackingThreshold:(id)arg1;
- (struct CGPoint)pointFromEvent:(id)arg1;
- (void)trackMouse:(id)arg1 withTarget:(id)arg2 andSelector:(SEL)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawSpeakerImages:(struct CGRect)arg1;
- (void)drawVisualData;
- (void)drawArc:(struct SurroundPannerVisualData)arg1 inContext:(struct CGContext *)arg2;
- (void)_generateControlPointsForAngle:(float)arg1 andHeight:(float)arg2 intoPoints:(struct ControlPoints *)arg3;
- (struct CGRect)puckWellRect;
- (struct CGRect)puckRect;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

