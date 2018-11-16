//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ERLPropertyDescription, ERLRelationalObject;

@interface ERLPropertyValue : NSObject
{
    ERLPropertyDescription *_propertyDescription;
    ERLRelationalObject *_owner;
}

@property(readonly, nonatomic) ERLRelationalObject *owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) ERLPropertyDescription *propertyDescription; // @synthesize propertyDescription=_propertyDescription;
- (void)setObjectValue:(id)arg1;
- (id)objectValue;
- (void)applyDeleteRule;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithPropertyDescription:(id)arg1 owner:(id)arg2;

@end

