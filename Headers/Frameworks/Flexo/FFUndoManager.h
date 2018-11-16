//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSUndoManager.h"

@class FFUndoHandler;

__attribute__((visibility("hidden")))
@interface FFUndoManager : NSUndoManager
{
    FFUndoHandler *_undoHandler;
    BOOL _removeAllActionsDisabled;
    BOOL _removeAllActionsRequested;
}

@property(nonatomic) FFUndoHandler *undoHandler; // @synthesize undoHandler=_undoHandler;
- (id)prepareWithInvocationTarget:(id)arg1;
- (void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)updateTargetModDate:(id)arg1;
- (void)removeAllActions;
- (void)redo;
- (void)undo;

@end

