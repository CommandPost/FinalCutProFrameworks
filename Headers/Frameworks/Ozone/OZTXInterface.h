//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFSearchableText.h"

@interface OZTXInterface : NSObject <FFSearchableText>
{
    struct TXTextInput *_text;
}

+ (id)newWrapperWithText:(struct TXTextInput *)arg1;
- (unsigned int)getCursorPosition;
- (unsigned int)getLeftSelectionOffset;
- (unsigned int)getRightSelectionOffset;
- (unsigned int)getLength;
- (unsigned int)getSelectionLength;
- (CDStruct_1b6d18a9)getTimeForID:(unsigned int)arg1;
- (CDStruct_1b6d18a9)getTimeOffsetForResult:(id)arg1;
- (CDStruct_1b6d18a9)getTimeOffset:(id)arg1;
- (void)getSearchResults:(vector_d1504541 *)arg1 forString:(const struct PCString *)arg2 withFlags:(unsigned int)arg3;
- (void)setSelectionRangeForResult:(struct FFTextSearchResult)arg1;
- (void)resetSelection:(BOOL)arg1;
- (void)setSelectionRangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)clearSearchResults;
- (unsigned int)getID;
- (unsigned int)getResultID;
- (unsigned int)getParentID;
- (vector_d1504541)getTextIDs;
- (void)wLock;
- (void)wUnlock;
- (void)deleteTextAtTime:(const CDStruct_1b6d18a9 *)arg1 at:(unsigned int)arg2 length:(unsigned int)arg3 ID:(unsigned int)arg4;
- (void)insertText:(const struct PCString *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2 at:(unsigned int)arg3 ID:(unsigned int)arg4;
- (BOOL)hasAtLeastOneInstanceOf:(const struct PCString *)arg1 withFlags:(unsigned int)arg2;
- (void)addTXTextInputObjects:(vector_1e3759f0 *)arg1 fromResults:(vector_d1504541 *)arg2;
- (void)openUndoGroup:(vector_1e3759f0 *)arg1;
- (void)closeUndoGroup;
@property(nonatomic) struct TXTextInput *text; // @synthesize text=_text;

@end

