//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/NSCopying-Protocol.h>
#import <Flexo/NSSecureCoding-Protocol.h>

@class NSPredicate, NSString;

__attribute__((visibility("hidden")))
@interface FFQuery : NSObject <NSSecureCoding, NSCopying>
{
    NSPredicate *_predicate;
    NSString *_className;
    Class _class;
}

+ (BOOL)supportsSecureCoding;
+ (id)forSearchClass:(Class)arg1 format:(id)arg2;
+ (id)forSearchClass:(Class)arg1 predicate:(id)arg2;
+ (id)forSearchClass:(Class)arg1;
- (Class)searchClass;
- (id)searchClassName;
- (id)predicate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initCopy:(id)arg1 zone:(struct _NSZone *)arg2;
- (id)initWithSearchClass:(Class)arg1 predicate:(id)arg2;
- (id)initWithSearchClass:(Class)arg1;

@end

