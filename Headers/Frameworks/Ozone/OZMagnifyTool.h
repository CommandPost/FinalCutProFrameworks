//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZTool.h>

#import <Ozone/POOnScreenControlMetalRendering-Protocol.h>

@class MDPMultiline, NSString;

@interface OZMagnifyTool : OZTool <POOnScreenControlMetalRendering>
{
    PCVector2_7e488b7d *_viewCenter;
    PCVector2_7e488b7d *_filmMouseDown;
    PCVector2_7e488b7d *_filmMouseCurrent;
    PCVector2_7e488b7d *_viewMouseDown;
    double _panx;
    double _pany;
    double _zoom;
    BOOL _showCrosshairs;
    BOOL _showBoundingBox;
    BOOL _zoomOut;
    BOOL _spacebarMode;
    MDPMultiline *_line;
    MDPMultiline *_quad;
}

- (id)newPrimitivesForContext:(id)arg1 userInfo:(id)arg2;
- (void)draw;
- (BOOL)oscFlagsChanged:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)displayDefaultOnScreenControls;
- (void)iconDoubleClick;
- (id)getDefaultCursor;
- (struct PCUUID)getClassID;
- (id)getTooltip;
- (id)getName;
- (void)setSpacebarMode:(BOOL)arg1 zoomOut:(BOOL)arg2;
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

