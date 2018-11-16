//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, TLKItemLaneFragmentLayer, TLKItemLaneInfo, TLKLayoutContext;

@interface TLKItemLaneFragment : NSObject
{
    TLKItemLaneInfo *_itemLaneInfo;
    TLKLayoutContext *_layoutContext;
    struct CGPoint _position;
    struct CGRect _bounds;
    TLKItemLaneFragmentLayer *_layer;
    NSSet *_itemComponentFragments;
}

@property(copy, nonatomic) NSSet *itemComponentFragments; // @synthesize itemComponentFragments=_itemComponentFragments;
@property(nonatomic) TLKLayoutContext *layoutContext; // @synthesize layoutContext=_layoutContext;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(retain, nonatomic) TLKItemLaneFragmentLayer *layer;
- (void)removeItemComponentFragmentsObject:(id)arg1;
- (void)addItemComponentFragmentsObject:(id)arg1;
@property(nonatomic) TLKItemLaneInfo *itemLaneInfo;
@property(nonatomic) struct CGRect frame;
- (id)description;
- (void)dealloc;
- (id)init;

@end

