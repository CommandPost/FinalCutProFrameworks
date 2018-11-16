//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import "NSCopying.h"

@class FFAnchoredObject, NSString;

__attribute__((visibility("hidden")))
@interface FFMatchReference : FFBaseDSObject <NSCopying>
{
    FFAnchoredObject *_anchoredObjectRef;
    CDStruct_1b6d18a9 _time;
    NSString *_projectDocumentID;
    NSString *_anchoredObjectPersistentID;
}

+ (id)copyClassDescription;
- (id)initWithAnchoredObject:(id)arg1 andTime:(CDStruct_1b6d18a9)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) NSString *anchoredObjectPersistentID; // @synthesize anchoredObjectPersistentID=_anchoredObjectPersistentID;
@property(readonly) NSString *projectDocumentID; // @synthesize projectDocumentID=_projectDocumentID;
@property(readonly) CDStruct_1b6d18a9 time; // @synthesize time=_time;
@property(readonly, nonatomic) FFAnchoredObject *anchoredObject; // @synthesize anchoredObject=_anchoredObjectRef;

@end

