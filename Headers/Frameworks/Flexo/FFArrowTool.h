//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFTool.h>

@interface FFArrowTool : FFTool
{
    struct CGPoint _dragStartPoint;
    BOOL _imageReady;
}

+ (id)displayName;
+ (id)toolTip;
+ (id)toolbarFacet;
- (id)cursor;
- (BOOL)handlesSelection;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)thumbImageReady:(id)arg1;
- (void)mouseDragged:(id)arg1;

@end

