//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProView.h"

@class FFShareDestinationAddController, NSProThemeFacet, NSString;

__attribute__((visibility("hidden")))
@interface FFShareDestinationAddControllerTileView : NSProView
{
    NSProThemeFacet *_facet;
    NSString *_title;
    NSString *_destinationType;
    FFShareDestinationAddController *_controller;
    BOOL _dragInProgress;
    BOOL _mouseInside;
    BOOL _pressed;
}

- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)_dragTile:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)_forceMouseExited;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
@property(readonly, nonatomic) NSString *destinationType; // @synthesize destinationType=_destinationType;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)_setPressed:(BOOL)arg1;
- (void)_deselect;
- (void)_selectByExtendingSelection:(BOOL)arg1;
- (BOOL)_isSelected;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 destination:(id)arg2 controller:(id)arg3;

@end
