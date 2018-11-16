//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZOverlay.h>

@interface OZLightOverlay : OZOverlay
{
    double _currentFilmX;
    double _currentFilmY;
    _Bool _setUndo;
    _Bool _capturing;
}

- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;
- (int)getDrawingOrder;
- (void)dealloc;
- (void)getAllLightNodes:(struct OZScene *)arg1:(vector_e01f805a *)arg2;
- (void)draw;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (_Bool)getSetUndo;
- (void)setSetUndo:(_Bool)arg1;
- (_Bool)getCapturing;
- (void)setCapturing:(_Bool)arg1;

@end

