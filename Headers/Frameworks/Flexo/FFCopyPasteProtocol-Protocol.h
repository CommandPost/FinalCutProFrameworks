//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol FFCopyPasteProtocol
- (BOOL)canCopyWithSelection:(id)arg1;
- (BOOL)canCutWithSelection:(id)arg1;
- (BOOL)canPasteWithSelection:(id)arg1;
- (BOOL)canPasteInsert;
- (BOOL)canPasteAnchored;
- (BOOL)copyWithSelection:(id)arg1;
- (BOOL)cutWithSelection:(id)arg1 error:(id *)arg2;
- (BOOL)pasteWithSelection:(id)arg1 atTime:(CDStruct_1b6d18a9 *)arg2 error:(id *)arg3;
@end

