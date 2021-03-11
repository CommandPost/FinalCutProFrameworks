//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

__attribute__((visibility("hidden")))
@interface _FFInspectorDraggableView : NSView
{
    long long _rowIndex;
    struct CGPoint _cursorBegin;
    struct {
        unsigned int didDrag:1;
        unsigned int mouseIsDown:1;
        unsigned int highlighted:1;
        unsigned int viewHeightIsFixed:1;
    } _idv_flags;
}

@property(readonly, nonatomic) long long rowIndex; // @synthesize rowIndex=_rowIndex;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)_sendBeginDraggingSessionWithIdentifier:(id)arg1 event:(id)arg2;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)highlighted;
@property(getter=isHighlighted) BOOL highlighted; // @dynamic highlighted;
- (struct CGSize)intrinsicContentSize;
- (id)initWithSubController:(id)arg1 rowIndex:(long long)arg2;

@end

