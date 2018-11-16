//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZTool.h>

@class NSImage, NSTimer;

@interface OZEditTool : OZTool
{
    _Bool _setUndo;
    _Bool _cloned;
    int _moving;
    double _startFilmX;
    double _startFilmY;
    double _currentX;
    double _currentY;
    double _currentFilmX;
    double _currentFilmY;
    _Bool _capturing;
    int _dragConstraint;
    struct OZTransformNode *_pMouseDownNode;
    struct set<OZSceneNode*, std::less<OZSceneNode*>, std::allocator<OZSceneNode*>> *_originalSelection;
    struct map<OZElement*, PCVector2<double>, std::less<OZElement*>, std::allocator<std::pair<OZElement* const, PCVector2<double>>>> *_starts;
    NSTimer *_keySnapTimer;
    double _startBoundsX1;
    double _startBoundsY1;
    double _startBoundsX2;
    double _startBoundsY2;
    struct PCSemaphore *_renderImageSignal;
    NSImage *_renderImageResult;
}

- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (void)dealloc;
- (id)getName;
- (id)getTooltip;
- (struct PCUUID)getClassID;
- (id)getDefaultCursor;
- (void)iconDoubleClick;
- (BOOL)handlesMousingInOnScreenControls;
- (BOOL)displayDefaultOnScreenControls;
- (void)updateStartMap:(struct OZScene *)arg1 state:(const struct OZRenderState *)arg2;
- (void)updateSelection:(id)arg1 moving:(BOOL)arg2;
- (void)mouseDown:(id)arg1 withNode:(struct OZSceneNode *)arg2;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (BOOL)flagsChanged:(id)arg1;
- (void)_snapTimer:(id)arg1;
- (BOOL)nudgeX:(double)arg1 Y:(double)arg2;
- (BOOL)keyDownOSC:(id)arg1;
- (BOOL)nudgeUp:(id)arg1;
- (BOOL)nudgeDown:(id)arg1;
- (BOOL)nudgeLeft:(id)arg1;
- (BOOL)nudgeRight:(id)arg1;
- (BOOL)nudgeUpBig:(id)arg1;
- (BOOL)nudgeDownBig:(id)arg1;
- (BOOL)nudgeLeftBig:(id)arg1;
- (BOOL)nudgeRightBig:(id)arg1;
- (void)draw;

@end

