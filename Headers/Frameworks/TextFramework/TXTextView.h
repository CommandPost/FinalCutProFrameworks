//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

@class TXTextViewController;

@interface TXTextView : NSTextView
{
    TXTextViewController *_controller;
}

- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)drawRect:(struct CGRect)arg1;
- (id)getUndoManager;
- (BOOL)validateMenuItem:(id)arg1;
- (void)undo:(id)arg1;
- (void)redo:(id)arg1;
@property(nonatomic) TXTextViewController *controller; // @synthesize controller=_controller;

@end

