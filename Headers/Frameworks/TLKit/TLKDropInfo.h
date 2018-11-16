//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class TLKLayoutManager;

@interface TLKDropInfo : NSObject <NSCopying>
{
    long long _dropIndex;
    CDStruct_1b6d18a9 _dropTime;
    id <TLKTimelineItem> _targetItem;
    TLKLayoutManager *_layoutManager;
}

@property(retain) id <TLKTimelineItem> targetItem; // @synthesize targetItem=_targetItem;
@property(retain) TLKLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property CDStruct_1b6d18a9 dropTime; // @synthesize dropTime=_dropTime;
@property long long dropIndex; // @synthesize dropIndex=_dropIndex;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)dictionaryRepresentation;
- (id)_newDictionaryRepresentationForEquality:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

