//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFComponentOSC.h>

@class NSArray, NSBitmapImageRep, NSMutableArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface FFFaceRecognitionOSC : FFComponentOSC
{
    NSArray *facesInDisplayedFrame;
    NSSet *faceMarkersInDisplayedFrame;
    NSBitmapImageRep *_closeButtonBitmap;
    NSBitmapImageRep *_closeButtonPressedBitmap;
    NSString *_UIDForPersonWithPressedClosedButton;
    NSMutableArray *_metadataEntryWindowControllers;
}

- (id)initWithEffectStack:(id)arg1;
- (id)_metadataEntryPopupWindowControllerForPerson:(id)arg1 playerView:(id)arg2;
- (void)drawRect:(struct CGRect)arg1 toContext:(struct _CGLContextObject *)arg2 drawProperties:(id)arg3;
- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 forContainer:(id)arg3 viewBounds:(struct CGRect)arg4;
- (BOOL)hitTest:(struct CGPoint)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (BOOL)isAvailableDuringPlayback;
- (struct CGRect)_currentMediaBounds;
- (struct CGRect)_faceRectForFace:(id)arg1 mediaBounds:(struct CGRect)arg2;
- (struct CGRect)_closeButtonRectForFaceRect:(struct CGRect)arg1;
- (BOOL)containsTime:(CDStruct_1b6d18a9)arg1 forContainer:(id)arg2;
- (BOOL)isSelectionBased;
- (void)dealloc;

@end

