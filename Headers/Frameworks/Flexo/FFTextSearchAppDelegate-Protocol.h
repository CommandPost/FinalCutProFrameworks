//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol FFTextSearchAppDelegate
+ (id)getInstance;
- (vector_2735d0ca)getSearchResults:(const id)arg1 withFlags:(unsigned int)arg2 searchForward:(BOOL)arg3 setSelection:(BOOL)arg4;
- (void)goToNextResult;
- (void)goToPreviousResult;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (void)didSelectNewObject;
- (vector_2735d0ca)results;
- (void)replaceString:(const id)arg1 withString:(const id)arg2 withFlags:(unsigned int)arg3 goToNext:(BOOL)arg4 replaceAll:(BOOL)arg5;
- (BOOL)canSearchInSequence;
- (int)currentTextSelectionLength;
- (BOOL)textToolIsActive;
- (void)updateStrings:(id)arg1;
@end
