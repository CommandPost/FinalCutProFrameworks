//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKTextField.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NewKeywordTextField : LKTextField
{
    NSString *m_savedText;
    BOOL m_restoreSavedText;
}

- (void)cancelOperation:(id)arg1;
- (BOOL)textShouldEndEditing:(id)arg1;
- (BOOL)textShouldBeginEditing:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)mouseDown:(id)arg1;

@end

