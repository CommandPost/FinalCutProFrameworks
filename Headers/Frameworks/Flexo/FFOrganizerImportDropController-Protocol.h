//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol FFOrganizerImportDropController <NSObject>

@optional
- (BOOL)performImportDropOperation:(id <NSDraggingInfo>)arg1;
- (unsigned long long)shouldAcceptImportDrop:(id <NSDraggingInfo>)arg1;
- (NSArray *)dragTypesForImportDrop;
- (BOOL)wantsImportDragAndDrop;
@end
