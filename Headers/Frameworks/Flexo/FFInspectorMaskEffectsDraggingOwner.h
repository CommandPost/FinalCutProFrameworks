//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FFInspectorControllerDragging.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FFInspectorMaskEffectsDraggingOwner : NSObject <FFInspectorControllerDragging>
{
    id <FFInspectorVideoEffectsDataSource> _dataSource;
}

- (void)clearDraggingDropIndicatorsForController:(id)arg1;
- (BOOL)acceptDropForController:(id)arg1 childIndex:(long long)arg2 draggingInfo:(id)arg3;
- (unsigned long long)validateDropForController:(id)arg1 proposedChildIndex:(long long)arg2 draggingInfo:(id)arg3;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
