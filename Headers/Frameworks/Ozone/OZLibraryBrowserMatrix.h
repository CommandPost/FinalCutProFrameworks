//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSMatrix.h>

@class NSEvent;

@interface OZLibraryBrowserMatrix : NSMatrix
{
    NSEvent *_downEvent;
    int _dropTargetRow;
}

- (BOOL)validateMenuItem:(id)arg1;
- (void)libraryDelete:(id)arg1;
- (void)delete:(id)arg1;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)cancel:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)setDownEvent:(id)arg1;
- (id)downEvent;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)startDrag:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)getLibraryController;
- (id)getBrowser;
- (void)viewDidMoveToSuperview;
- (int)targetRow;
- (void)setDropTargetRow:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 mode:(unsigned long long)arg2 prototype:(id)arg3 numberOfRows:(long long)arg4 numberOfColumns:(long long)arg5;
- (id)initWithFrame:(struct CGRect)arg1 mode:(unsigned long long)arg2 cellClass:(Class)arg3 numberOfRows:(long long)arg4 numberOfColumns:(long long)arg5;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

