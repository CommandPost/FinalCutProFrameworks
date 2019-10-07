//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

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

