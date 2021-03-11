//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZShapeTool.h>

@class LKColorWell, OZRotoshapeOnscreenControl;

@interface OZSplineTool : OZShapeTool
{
    OZRotoshapeOnscreenControl *_rotoOSC;
    unsigned int _interpolation;
    _Bool _creating;
    _Bool _addingToScene;
    LKColorWell *_pPrimaryColorWell;
}

+ (void)initialize;
- (void)updateOptionsView;
- (id)getPrimaryColor;
- (void)setPrimaryColor:(id)arg1;
- (BOOL)keyUpOSC:(id)arg1;
- (BOOL)keyDownOSC:(id)arg1;
- (BOOL)delete:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)didCancelDrawing;
- (BOOL)selectNone:(id)arg1;
- (BOOL)selectAll:(id)arg1;
- (void)draw;
- (void)endWithDocument:(struct OZDocument *)arg1;
- (id)menuForEvent:(id)arg1;
- (id)getCursorWithEvent:(id)arg1;
- (id)getDefaultCursor;
- (struct PCUUID)getClassID;
- (id)getTooltip;
- (id)getName;
- (unsigned int)getInterpolation;
- (void)setInterpolation:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end

