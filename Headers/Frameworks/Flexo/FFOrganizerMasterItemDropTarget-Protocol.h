//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPasteboardReading.h"

@class LKViewModule;

@protocol FFOrganizerMasterItemDropTarget <NSPasteboardReading>
- (BOOL)performDrop:(id <NSDraggingInfo>)arg1 validatedDragOperation:(unsigned long long)arg2 newSubitemInsertionIndex:(long long)arg3 organizerModule:(LKViewModule *)arg4;
- (unsigned long long)validateDrop:(id <NSDraggingInfo>)arg1 newSubitemInsertionIndex:(long long)arg2;
@end

