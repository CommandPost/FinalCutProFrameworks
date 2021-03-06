//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/NSObject-Protocol.h>

@protocol FFSearchableText <NSObject>
- (void)closeUndoGroup;
- (void)openUndoGroup:(vector_9e9b204a *)arg1;
- (void)addTXTextInputObjects:(vector_9e9b204a *)arg1 fromResults:(vector_1392cc16 *)arg2;
- (BOOL)hasAtLeastOneInstanceOf:(const struct PCString *)arg1 withFlags:(unsigned int)arg2;
- (void)insertText:(const struct PCString *)arg1 atTime:(const CDStruct_1b6d18a9 *)arg2 at:(unsigned int)arg3 ID:(unsigned int)arg4;
- (void)deleteTextAtTime:(const CDStruct_1b6d18a9 *)arg1 at:(unsigned int)arg2 length:(unsigned int)arg3 ID:(unsigned int)arg4;
- (CDStruct_1b6d18a9)getTimeForID:(unsigned int)arg1;
- (vector_1392cc16)getTextIDs;
- (unsigned int)getResultID;
- (unsigned int)getParentID;
- (unsigned int)getID;
- (void)clearSearchResults;
- (void)getSearchResults:(vector_1392cc16 *)arg1 forString:(const struct PCString *)arg2 withFlags:(unsigned int)arg3;
- (void)resetSelection:(BOOL)arg1;
- (void)resetSelectionRangeForResult:(struct FFTextSearchResult)arg1;
- (void)setSelectionRangeForResult:(struct FFTextSearchResult)arg1;
- (void)setSelectionRangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (CDStruct_1b6d18a9)getTimeOffsetForResult:(id)arg1;
- (CDStruct_1b6d18a9)getTimeOffset:(id)arg1;
- (unsigned int)getLength;
- (unsigned int)getSelectionLength;
- (unsigned int)getRightSelectionOffset;
- (unsigned int)getLeftSelectionOffset;
- (unsigned int)getCursorPosition;

@optional
- (void)updateDisplayName;
@end

