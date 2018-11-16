//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, PAEOSCManager;

@interface PAEOSC : NSObject
{
    NSMutableDictionary *_paramMap;
    id <PROAPIAccessing> _apiManager;
    unsigned long long _drawingSpace;
    BOOL _drawHandlesInScreenSpace;
    BOOL _useInputCoords;
    BOOL _hidden;
    PAEOSCManager *_manager;
}

@property PAEOSCManager *manager; // @synthesize manager=_manager;
@property(readonly) id api; // @synthesize api=_apiManager;
- (double)backingScaleFactor;
- (void)didUnfocus:(id)arg1;
- (void)didFocus:(id)arg1;
- (void)keyUp:(const PCVector2_79efa81a *)arg1 keyPressed:(unsigned short)arg2 modifiers:(unsigned long long)arg3 forceUpdate:(char *)arg4 didHandle:(char *)arg5 time:(CDUnion_2516e51e)arg6;
- (void)keyDown:(const PCVector2_79efa81a *)arg1 keyPressed:(unsigned short)arg2 modifiers:(unsigned long long)arg3 forceUpdate:(char *)arg4 didHandle:(char *)arg5 time:(CDUnion_2516e51e)arg6;
- (void)mouseDragged:(const PCVector2_79efa81a *)arg1 activePart:(int)arg2 modifiers:(unsigned long long)arg3 forceUpdate:(char *)arg4 time:(CDUnion_2516e51e)arg5;
- (void)mouseExited:(const PCVector2_79efa81a *)arg1 modifiers:(unsigned long long)arg2 forceUpdate:(char *)arg3 time:(CDUnion_2516e51e)arg4;
- (void)mouseMoved:(const PCVector2_79efa81a *)arg1 activePart:(int)arg2 modifiers:(unsigned long long)arg3 forceUpdate:(char *)arg4 time:(CDUnion_2516e51e)arg5;
- (void)mouseEntered:(const PCVector2_79efa81a *)arg1 modifiers:(unsigned long long)arg2 forceUpdate:(char *)arg3 time:(CDUnion_2516e51e)arg4;
- (void)mouseUp:(const PCVector2_79efa81a *)arg1 activePart:(int)arg2 modifiers:(unsigned long long)arg3 forceUpdate:(char *)arg4 time:(CDUnion_2516e51e)arg5;
- (void)mouseDown:(const PCVector2_79efa81a *)arg1 activePart:(int)arg2 modifiers:(unsigned long long)arg3 forceUpdate:(char *)arg4 didHandle:(char *)arg5 time:(CDUnion_2516e51e)arg6;
- (BOOL)handlesPart:(int)arg1;
- (PCVector2_79efa81a)mouseDownPosition;
- (PCVector2_79efa81a)mousePosition;
- (BOOL)runningInMotionEffect;
- (void)drawForSelectionWithWidth:(int)arg1 height:(int)arg2 activePart:(int)arg3 paramAPI:(id)arg4 oscAPI:(id)arg5 atTime:(CDUnion_2516e51e)arg6;
- (void)drawForDisplayWithWidth:(int)arg1 height:(int)arg2 activePart:(int)arg3 paramAPI:(id)arg4 oscAPI:(id)arg5 atTime:(CDUnion_2516e51e)arg6;
- (void)drawFor:(int)arg1 withWidth:(int)arg2 height:(int)arg3 activePart:(int)arg4 paramAPI:(id)arg5 oscAPI:(id)arg6 atTime:(CDUnion_2516e51e)arg7;
- (void)setHidden:(BOOL)arg1;
- (void)convertPointFromObjectAbsoluteToDrawingSpace:(PCVector2_79efa81a *)arg1 withOSCAPI:(id)arg2;
- (void)convertPointFromObjectAbsoluteToObjectNormalized:(PCVector2_79efa81a *)arg1 withOSCAPI:(id)arg2;
- (void)convertPointFromDrawingSpaceToObjectAbsolute:(PCVector2_79efa81a *)arg1 withOSCAPI:(id)arg2;
- (void)convertPointFromObjectNormalizedToObjectAbsolute:(PCVector2_79efa81a *)arg1 withOSCAPI:(id)arg2;
- (void)convertPointFromObjectNormalizedToDrawingAbsolute:(PCVector2_79efa81a *)arg1 withOSCAPI:(id)arg2;
- (void)convertPointFromDrawingSpaceToAbsolute:(PCVector2_79efa81a *)arg1 withOSCAPI:(id)arg2;
- (void)convertPointFromDrawingSpaceToObjectNormalized:(PCVector2_79efa81a *)arg1 withOSCAPI:(id)arg2;
- (PCMatrix44Tmpl_93ed1289)screenToImage;
- (PCMatrix44Tmpl_93ed1289)imageToScreen;
- (PCMatrix44Tmpl_93ed1289)screenToObject;
- (PCMatrix44Tmpl_93ed1289)objectToScreen;
- (PCRect_3a266109)objectBounds;
- (BOOL)useInputCoords;
- (void)setUseInputCoords:(BOOL)arg1;
- (unsigned long long)drawingSpace;
- (void)setDrawingSpace:(unsigned long long)arg1;
- (BOOL)drawHandlesInScreenSpace;
- (void)setDrawHandlesInScreenSpace:(BOOL)arg1;
- (PCVector2_79efa81a)point:(int)arg1 atTime:(CDUnion_2516e51e)arg2;
- (unsigned int)paramIDForKey:(int)arg1;
- (void)addParameter:(unsigned int)arg1 forKey:(int)arg2;
- (void)dealloc;
- (id)initWithAPIManager:(id)arg1;

@end

