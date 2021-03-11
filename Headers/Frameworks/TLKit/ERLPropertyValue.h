//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

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

