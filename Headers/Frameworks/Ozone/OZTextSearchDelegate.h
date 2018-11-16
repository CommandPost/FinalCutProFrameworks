//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FFTextSearchDelegateBase.h"

#import "FFTextSearchAppDelegate.h"

@interface OZTextSearchDelegate : FFTextSearchDelegateBase <FFTextSearchAppDelegate>
{
    struct OZDocument *_document;
    BOOL _inhibitUndo;
}

+ (id)getInstance;
@property(nonatomic) BOOL inhibitUndo; // @synthesize inhibitUndo=_inhibitUndo;
@property(nonatomic) struct OZDocument *document; // @synthesize document=_document;
- (void)didReplaceAll:(struct vector<std::__1::vector<FFTextSearchResult, std::__1::allocator<FFTextSearchResult>>, std::__1::allocator<std::__1::vector<FFTextSearchResult, std::__1::allocator<FFTextSearchResult>>>> *)arg1 textObjects:(vector_9e9b204a *)arg2;
- (void)willReplaceAll:(struct vector<std::__1::vector<FFTextSearchResult, std::__1::allocator<FFTextSearchResult>>, std::__1::allocator<std::__1::vector<FFTextSearchResult, std::__1::allocator<FFTextSearchResult>>>> *)arg1 textObjects:(vector_9e9b204a *)arg2;
- (void)updateStrings:(id)arg1;
- (BOOL)textToolIsActive;
- (int)currentTextSelectionLength;
- (void)didReplace:(id)arg1 didSetNewSelection:(BOOL)arg2;
- (void)willReplace:(id)arg1;
- (void)didFindResult:(id)arg1 setSelectionForResult:(struct FFTextSearchResult)arg2;
- (void)notifySearchOSC:(id)arg1;
- (void)getNextTextObject:(id *)arg1 after:(id *)arg2 flags:(unsigned int)arg3 searchForward:(BOOL)arg4;
- (BOOL)getSearchResults:(vector_1392cc16 *)arg1 forString:(id)arg2 fromTextObject:(id)arg3 withFlags:(unsigned int)arg4 searchForward:(BOOL)arg5 jumpTo:(struct FFTextSearchResult *)arg6;
- (void)setCurrentObject:(id *)arg1;
- (CDStruct_1b6d18a9)getCurrentTime;
- (id)getCurrentTextObject;
- (void)goToPreviousResult;
- (void)goToNextResult;
- (void)performSearch;
- (vector_1392cc16)results;
- (void)didSelectNewObject;
- (void)setActive:(BOOL)arg1;
- (BOOL)active;
- (void)notify:(unsigned int)arg1;
- (void)textEdited:(id)arg1;
- (void)updateCanvas;
- (id)getPrevTextObjectFromTime:(const CDStruct_1b6d18a9 *)arg1 andBeforeTextObject:(id *)arg2 wrapAround:(BOOL)arg3;
- (id)getNextTextObjectFromTime:(const CDStruct_1b6d18a9 *)arg1 andAfterTextObject:(id *)arg2 wrapAround:(BOOL)arg3;
- (BOOL)canSearchInSequence;
- (id)init;

@end

