//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSFilePromiseProvider.h>

@class NSTreeNode;

@interface PEAppSharePastboardItem : NSFilePromiseProvider
{
}

- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
@property(readonly, nonatomic) NSTreeNode *treeNode;
- (id)initWithTreeNode:(id)arg1 delegate:(id)arg2;

@end

