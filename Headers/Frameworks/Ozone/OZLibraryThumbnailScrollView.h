//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKScrollView.h>

@interface OZLibraryThumbnailScrollView : LKScrollView
{
}

- (BOOL)validateMenuItem:(id)arg1;
- (void)selectNone:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)delete:(id)arg1;
- (void)libraryDelete:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (BOOL)needsPanelToBecomeKey;
- (void)mouseDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

