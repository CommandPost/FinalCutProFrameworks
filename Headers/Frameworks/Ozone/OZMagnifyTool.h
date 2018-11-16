//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZTool.h>

@interface OZMagnifyTool : OZTool
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
}

- (void)draw;
- (BOOL)flagsChanged:(id)arg1;
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

@end

