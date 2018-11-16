//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProInspector/OZGradientView.h>

@class LKColorWell, OZGradientEditor;

@interface OZGradientGutter : OZGradientView
{
    OZGradientEditor *_pGradientEditor;
    struct OZChannelGradientSample *_pDeleted;
    struct OZChannelEnum *_pInterpolation;
    LKColorWell *_pTransientColorWell;
    struct CGPoint _startingLocation;
    double _startingValue;
    double _nextSample;
    int _moving;
    BOOL _deleteUndoHandled;
    BOOL _keyframed;
    BOOL _needsToBeKeyframed;
    BOOL _enabled;
    BOOL _didMove;
}

- (id).cxx_construct;
- (void)update;
- (void)viewDidEndLiveResize;
- (void)setBounds:(struct CGRect)arg1;
- (void)updateToolTips;
- (void)getSamples:(map_d7d8ae3b *)arg1;
- (struct OZChannelGradientFolder *)getFolder;
- (void)setEnabled:(BOOL)arg1;
- (void)flagsChanged:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)setInterpolation:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)startColorPicker:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (_Rb_tree_iterator_31a39c12)findSampleIn:(map_d7d8ae3b *)arg1 location:(struct CGPoint)arg2 hitMiddle:(char *)arg3;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)drawGutter:(struct CGRect)arg1 sampleIndex:(int)arg2 middleIndex:(int)arg3;
- (void)dealloc;
- (void)setGradientEditor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

