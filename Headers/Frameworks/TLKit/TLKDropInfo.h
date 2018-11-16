//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class TLKItemLaneFragment, TLKLayoutContext;

@interface TLKDropInfo : NSObject <NSCopying>
{
    long long _dropIndex;
    CDStruct_1b6d18a9 _dropTime;
    CDStruct_e83c9415 _highlightRange;
    TLKLayoutContext *_targetLayoutContext;
    id _targetItem;
    TLKItemLaneFragment *_targetItemLaneFragment;
}

@property(retain, nonatomic) TLKItemLaneFragment *targetItemLaneFragment; // @synthesize targetItemLaneFragment=_targetItemLaneFragment;
@property(nonatomic) CDStruct_e83c9415 highlightRange; // @synthesize highlightRange=_highlightRange;
@property(retain, nonatomic) id targetItem; // @synthesize targetItem=_targetItem;
@property(retain, nonatomic) TLKLayoutContext *targetLayoutContext; // @synthesize targetLayoutContext=_targetLayoutContext;
@property(nonatomic) CDStruct_1b6d18a9 dropTime; // @synthesize dropTime=_dropTime;
@property(nonatomic) long long dropIndex; // @synthesize dropIndex=_dropIndex;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)dictionaryRepresentation;
- (id)_newDictionaryRepresentationForEquality:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

