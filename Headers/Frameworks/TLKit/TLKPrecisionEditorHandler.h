//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TLKit/TLKTimelineHandler.h>

@interface TLKPrecisionEditorHandler : TLKTimelineHandler
{
    unsigned int _deselectMultipleEdgsOnExit;
}

- (id)cursorAtPoint:(struct CGPoint)arg1 dispatcher:(id)arg2;
- (void)clickedOnBackgroundOfTimeline:(id)arg1;
- (void)_exitPrecisionEditor:(id)arg1;
- (void)_enterPrecisionEditorWithLeftItem:(id)arg1 rightItem:(id)arg2;
- (void)_enterPrecisionEditorWithRightItem:(id)arg1;
- (void)_enterPrecisionEditorWithLeftItem:(id)arg1;
- (void)_changeEditPointToLeftItem:(id)arg1 orRightItem:(id)arg2;
- (void)_deselectEdges;
- (void)commit:(id)arg1;
- (void)moveToLastEdit;
- (void)moveToFirstEdit;
- (void)moveToPreviousEdit;
- (void)moveToNextEdit;
- (void)moveToTrailingEdge:(id)arg1;
- (void)moveToLeadingEdge:(id)arg1;
- (void)moveToEditPoint:(id)arg1;
- (void)movePlayheadToCurrentPosition:(id)arg1;
- (BOOL)shouldSkimItem:(id)arg1;
- (void)cancel:(id)arg1;
- (void)stopHandling:(id)arg1;
- (void)startHandling:(id)arg1;
- (void)applyConfiguration:(id)arg1;

@end

