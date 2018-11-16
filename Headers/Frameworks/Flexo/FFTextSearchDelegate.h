//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFTextSearchDelegateBase.h>

#import "FFTextSearchAppDelegate.h"

@class FFPlayerVideoModule;

@interface FFTextSearchDelegate : FFTextSearchDelegateBase <FFTextSearchAppDelegate>
{
    FFPlayerVideoModule *_playerVideoModule;
}

+ (id)getInstance;
@property(nonatomic) FFPlayerVideoModule *playerVideoModule; // @synthesize playerVideoModule=_playerVideoModule;
- (void)didReplaceAll:(vector_cb3c6831 *)arg1 textObjects:(vector_8a98cfff *)arg2;
- (void)willReplaceAll:(vector_cb3c6831 *)arg1 textObjects:(vector_8a98cfff *)arg2;
- (void)updateStrings:(id)arg1;
- (BOOL)textToolIsActive;
- (int)currentTextSelectionLength;
- (void)didReplace:(id)arg1 didSetNewSelection:(BOOL)arg2;
- (void)willReplace:(id)arg1;
- (void)didFindResult:(id)arg1 setSelectionForResult:(struct FFTextSearchResult)arg2;
- (BOOL)getSearchResults:(vector_2735d0ca *)arg1 forString:(id)arg2 fromTextObject:(id)arg3 withFlags:(unsigned int)arg4 searchForward:(BOOL)arg5 jumpTo:(struct FFTextSearchResult *)arg6;
- (void)getNextTextObject:(id *)arg1 after:(id *)arg2 flags:(unsigned int)arg3 searchForward:(BOOL)arg4;
- (id)getNextTextObjectFromTime:(const CDStruct_1b6d18a9 *)arg1 andAfterTextObject:(id *)arg2 wrapAround:(BOOL)arg3;
- (id)getPrevTextObjectFromTime:(const CDStruct_1b6d18a9 *)arg1 andBeforeTextObject:(id *)arg2 wrapAround:(BOOL)arg3;
- (void)setCurrentObject:(id *)arg1;
- (void)setCurrentTime:(const CDStruct_1b6d18a9 *)arg1 forAnchoredObject:(id)arg2;
- (void)setCurrentTime:(const CDStruct_1b6d18a9 *)arg1;
- (CDStruct_1b6d18a9)getCurrentTime;
- (id)getCurrentTextObject;
- (void)wLock:(BOOL)arg1;
- (void)rLock:(BOOL)arg1;
- (id)_getTextEffectFromAnchoredObject:(id)arg1;
- (BOOL)canSearchInSequence;
- (vector_2735d0ca)results;
- (void)didSelectNewObject;
- (void)setActive:(BOOL)arg1;
- (BOOL)active;
- (void)goToPreviousResult;
- (void)goToNextResult;
- (void)findReplaceTFDidChange:(id)arg1;
- (id)sequence;

@end

